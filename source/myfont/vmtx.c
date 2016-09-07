/*
 Copyright (C) 2016 Alexander Borisov
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#include "myfont/vmtx.h"

void myfont_load_table_vmtx(myfont_font_t *mf)
{
    memset(&mf->table_vmtx, 0, sizeof(myfont_table_vmtx_t));
    
    if(mf->cache.tables_offset[MyFONT_TKEY_vmtx] == 0)
        return;
    
    myfont_table_vmtx_t *tvmtx = &mf->table_vmtx;
    const uint32_t table_offset = mf->cache.tables_offset[MyFONT_TKEY_vmtx];
    
    /* get current data */
    uint8_t *data = &mf->file_data[table_offset];
    uint16_t num_metrics = mf->table_vhea.numOfLongVerMetrics;
    
    if(num_metrics == 0)
        return;
    
    uint32_t pos = table_offset + (num_metrics * 4);
    if(pos > mf->file_size)
        return;
    
    myfont_long_ver_metric_t *lver_metric = (myfont_long_ver_metric_t *)myfont_calloc(mf, num_metrics, sizeof(myfont_long_ver_metric_t));
    
    if(lver_metric == NULL)
        return;
    
    for(uint16_t i = 0; i < num_metrics; i++) {
        lver_metric[i].advanceHeight = myfont_read_u16(&data);
        lver_metric[i].topSideBearing = myfont_read_16(&data);
    }
    
    tvmtx->vMetrics = lver_metric;
    
    if(mf->table_maxp.numGlyphs <= mf->table_vhea.numOfLongVerMetrics)
        return;
    
    uint16_t numOfTSB = mf->table_maxp.numGlyphs - mf->table_vhea.numOfLongVerMetrics;
    
    pos = pos + (numOfTSB * 2);
    if(pos > mf->file_size)
        return;
    
    int16_t *topSideBearing = (int16_t *)myfont_calloc(mf, numOfTSB, sizeof(int16_t));
    
    if(topSideBearing == NULL)
        return;
    
    for(uint16_t i = 0; i < num_metrics; i++) {
        topSideBearing[i] = myfont_read_16(&data);
    }
    
    tvmtx->topSideBearing = topSideBearing;
}

