#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: pointer to the node insert
 * @value:  value to store
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new;
		new->left = tmp;
		tmp->parent = new;
	}
	else
	{
		parent->left = new;
		new->left = NULL;
	}
	return (new);
}
