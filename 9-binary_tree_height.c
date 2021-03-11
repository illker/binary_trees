#include "binary_trees.h"

/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, r = 0, l = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l = binary_tree_height(tree->left);
	r = v(tree->right);

	if (l > r)
		h = l;
	else
		h = r;

	return (h + 1);
}
