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

#include "modest/style/map.h"
#include "modest/style/map_resource.h"

void modest_style_map_collate_declaration(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    if(thr_dec->entry == NULL || thr_dec->entry->type >= MyCSS_PROPERTY_TYPE_LAST_ENTRY)
        return;
    
    modest_style_map_static_collate_declaration[ thr_dec->entry->type ](node, thr_dec);
}

void modest_style_map_collate_declaration_undef(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    
}

void modest_style_map_collate_declaration_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    modest_node_t *m_node = (modest_node_t*)node->data;
    
    if(modest_finder_thread_spec_is_up(&thr_dec->raw_spec, &m_node->stylesheet->height.raw.spec)) {
        m_node->stylesheet->height.raw.declaration = thr_dec->entry;
        m_node->stylesheet->height.raw.spec = thr_dec->raw_spec;
    }
}

void modest_style_map_collate_declaration_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    modest_node_t *m_node = (modest_node_t*)node->data;
    
    if(modest_finder_thread_spec_is_up(&thr_dec->raw_spec, &m_node->stylesheet->width.raw.spec)) {
        m_node->stylesheet->width.raw.declaration = thr_dec->entry;
        m_node->stylesheet->width.raw.spec = thr_dec->raw_spec;
    }
}

void modest_style_map_collate_declaration_border(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
//    modest_node_t *m_node = (modest_node_t*)node->data;
//    
//    if(modest_finder_thread_spec_is_up(&thr_dec->raw_spec, &m_node->stylesheet->width.raw.spec)) {
//        m_node->stylesheet->width.raw.declaration = thr_dec->entry;
//        m_node->stylesheet->width.raw.spec = thr_dec->raw_spec;
//    }
}

void modest_style_map_collate_declaration_align_content(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_align_items(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_align_self(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_attachment(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_clip(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_image(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_origin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_repeat(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_size(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_left_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_right_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_outset(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_repeat(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_slice(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_left_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_right_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_box_shadow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_box_suppress(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_clear(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_clear_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_display(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_basis(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_direction(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_flow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_grow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_shrink(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_wrap(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_float(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_float_displace(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_family(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_feature_settings(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_kerning(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_language_override(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_size(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_size_adjust(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_stretch(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_synthesis(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_alternates(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_caps(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_east_asian(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_ligatures(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_numeric(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_weight(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_indent_edge_reset(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_justify_content(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_max_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_max_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_min_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_min_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_order(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow_x(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow_y(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_visibility(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}


