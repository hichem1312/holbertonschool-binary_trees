#include "binary_trees.h"

/**
 * binary_tree_inorder - create a binary tree node
 * @tree: a pointer to the parent node
 * @func: the value to put in the new node
 * Return: n
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
