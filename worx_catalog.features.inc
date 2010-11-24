<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function worx_catalog_ctools_plugin_api() {
  module_load_include('inc', 'worx_catalog', 'worx_catalog.defaults');
  $args = func_get_args();
  return call_user_func_array('_worx_catalog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function worx_catalog_imagecache_default_presets() {
  module_load_include('inc', 'worx_catalog', 'worx_catalog.defaults');
  $args = func_get_args();
  return call_user_func_array('_worx_catalog_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function worx_catalog_default_page_manager_pages() {
  module_load_include('inc', 'worx_catalog', 'worx_catalog.defaults');
  $args = func_get_args();
  return call_user_func_array('_worx_catalog_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function worx_catalog_views_default_views() {
  module_load_include('inc', 'worx_catalog', 'worx_catalog.features.views');
  $args = func_get_args();
  return call_user_func_array('_worx_catalog_views_default_views', $args);
}
