#include "binary_trees.h"

/**
 * binary_tree_postorder - print binary
 * @tree: root
 * @func: function
 * Return: nothing
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func)
		return;
	if (tree)
	{

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
