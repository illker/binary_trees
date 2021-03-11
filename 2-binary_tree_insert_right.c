#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right node
 * @parent: pointer to the node insert
 * @value:  value to store
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *burger_node = NULL;

	if (!parent)
		return (NULL);
	burger_node = malloc(sizeof(binary_tree_t));
	if (!burger_node)
		return (NULL);

	burger_node->parent = parent;
	burger_node->n = value;
	burger_node->left = NULL;

	if (parent->right)
	{
		burger_node->right = parent->right;
		parent->right = burger_node;
	}
	else
	{
		parent->right = burger_node;
		burger_node->right = NULL;
	}
	return (burger_node);
}
