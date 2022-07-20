#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to put in the new node
 * Return: new node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	return (node);
}
