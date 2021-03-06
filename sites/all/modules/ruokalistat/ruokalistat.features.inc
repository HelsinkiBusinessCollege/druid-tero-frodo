<?php
/**
 * @file
 * ruokalistat.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ruokalistat_node_info() {
  $items = array(
    'ruokalaji' => array(
      'name' => t('Ruokalaji'),
      'base' => 'node_content',
      'description' => t('Käytä tätä sisältötyyppiä kun haluat lisätä uuden ruokalajin.'),
      'has_title' => '1',
      'title_label' => t('Ruokalajin nimi'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
