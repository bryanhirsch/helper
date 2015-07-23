<?php
/**
 * @file
 * recommendation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function recommendation_taxonomy_default_vocabularies() {
  return array(
    'recommendation_types' => array(
      'name' => 'Recommendation Types',
      'machine_name' => 'recommendation_types',
      'description' => 'Types of recommendations to be paired to use cases (this should correspond with "product groups" in Salesforce when possible.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
