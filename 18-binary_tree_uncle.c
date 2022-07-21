#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer
 * Return: is_perfect
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((node == NULL) ||  (!node->parent) || (!node->parent->parent) ||
	(!node->parent->parent->left) || (!node->parent->parent->right))
		return (0);
	return (node->parent->parent->left != node->parent ?
	 node->parent->parent->left : node->parent->parent->right);
}
