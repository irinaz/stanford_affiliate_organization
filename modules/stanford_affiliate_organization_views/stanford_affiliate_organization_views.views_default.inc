<?php
/**
 * @file
 * stanford_affiliate_organization_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_affiliate_organization_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_affiliates';
  $view->description = 'A view of Stanford Affiliate Organizations';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Affiliates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partners';
  $handler->display->display_options['css_class'] = 'span12';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3 column';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_affiliate_link']['id'] = 'field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['table'] = 'field_data_field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['field'] = 'field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_affiliate_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_affiliate_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_affiliate_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_affiliate_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_affiliate_image']['id'] = 'field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['table'] = 'field_data_field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['field'] = 'field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_affiliate_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_affiliate_image']['alter']['path'] = '[field_s_affiliate_link]';
  $handler->display->display_options['fields']['field_s_affiliate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_affiliate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_affiliate_image']['settings'] = array(
    'image_style' => 'large-scaled',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_s_affiliate_link]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_affiliate_organization' => 'stanford_affiliate_organization',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_affiliates'] = $view;

  $view = new view();
  $view->name = 'stanford_affiliates_grid_page';
  $view->description = 'A view of Stanford Affiliate Organizations';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Affiliates: Grid Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Affiliates';
  $handler->display->display_options['css_class'] = 'views-grid-five';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all affiliates';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_affiliate_link']['id'] = 'field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['table'] = 'field_data_field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['field'] = 'field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_affiliate_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_affiliate_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_affiliate_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_affiliate_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_affiliate_image']['id'] = 'field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['table'] = 'field_data_field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['field'] = 'field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_affiliate_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_affiliate_image']['alter']['path'] = '[field_s_affiliate_link]';
  $handler->display->display_options['fields']['field_s_affiliate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_affiliate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_affiliate_image']['settings'] = array(
    'image_style' => 'sm-profile-scaled',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Sorting Weight (field_s_affiliate_weight) */
  $handler->display->display_options['sorts']['field_s_affiliate_weight_value']['id'] = 'field_s_affiliate_weight_value';
  $handler->display->display_options['sorts']['field_s_affiliate_weight_value']['table'] = 'field_data_field_s_affiliate_weight';
  $handler->display->display_options['sorts']['field_s_affiliate_weight_value']['field'] = 'field_s_affiliate_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_affiliate_organization' => 'stanford_affiliate_organization',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_grid');
  $handler->display->display_options['path'] = 'affiliates';
  $export['stanford_affiliates_grid_page'] = $view;

  $view = new view();
  $view->name = 'stanford_affiliates_homepage_large_block';
  $view->description = 'A view of Stanford Affiliate Organizations';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Affiliates: Homepage large block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Affiliates';
  $handler->display->display_options['css_class'] = 'views-grid-five';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all affiliates';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_affiliate_link']['id'] = 'field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['table'] = 'field_data_field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['field'] = 'field_s_affiliate_link';
  $handler->display->display_options['fields']['field_s_affiliate_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_affiliate_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_affiliate_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_affiliate_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_affiliate_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_affiliate_image']['id'] = 'field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['table'] = 'field_data_field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['field'] = 'field_s_affiliate_image';
  $handler->display->display_options['fields']['field_s_affiliate_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_affiliate_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_affiliate_image']['alter']['path'] = '[field_s_affiliate_link]';
  $handler->display->display_options['fields']['field_s_affiliate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_affiliate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_affiliate_image']['settings'] = array(
    'image_style' => 'sm-profile-scaled',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Sorting Weight (field_s_affiliate_weight) */
  $handler->display->display_options['sorts']['field_s_affiliate_weight_value']['id'] = 'field_s_affiliate_weight_value';
  $handler->display->display_options['sorts']['field_s_affiliate_weight_value']['table'] = 'field_data_field_s_affiliate_weight';
  $handler->display->display_options['sorts']['field_s_affiliate_weight_value']['field'] = 'field_s_affiliate_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_affiliate_organization' => 'stanford_affiliate_organization',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'affiliates';
  $export['stanford_affiliates_homepage_large_block'] = $view;

  return $export;
}
