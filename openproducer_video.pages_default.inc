<?php
/**
 * @file
 * openproducer_video.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_video_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'video';
  $page->task = 'page';
  $page->admin_title = 'Video';
  $page->admin_description = '';
  $page->path = 'video';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Video',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_video_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'video';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'video',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '518aa1ed-fe7c-4942-a796-ca1278946109';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dade1577-fd5b-40fa-a629-7c799433c3c8';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'video-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '12',
    'offset' => '0',
    'fields_override' => array(
      'field_video' => 1,
      'filename' => 0,
    ),
    'exposed' => array(
      'widget_title' => 'All Videos',
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Video',
    'use_pager' => 0,
    'pager_id' => '',
    'link_to_view' => NULL,
    'more_link' => 0,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dade1577-fd5b-40fa-a629-7c799433c3c8';
  $display->content['new-dade1577-fd5b-40fa-a629-7c799433c3c8'] = $pane;
  $display->panels['contentmain'][0] = 'new-dade1577-fd5b-40fa-a629-7c799433c3c8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-dade1577-fd5b-40fa-a629-7c799433c3c8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['video'] = $page;

  return $pages;

}
