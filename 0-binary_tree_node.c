#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *burger_node;

    burger_node = malloc(sizeof(binary_tree_t));

    if (!burger_node)
        return (NULL);
    else
    {
        burger_node->parent = parent;
        burger_node->left = NULL;
        burger_node->right = NULL;
        burger_node->n = value;
        return (burger_node);
    }
}
