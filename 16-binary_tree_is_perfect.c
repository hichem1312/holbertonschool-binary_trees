#include "binary_trees.h"
/**
 * binary_tree_height - tree hight
 * @tree: a pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_i = 0;
	size_t height_j = 0;

	if (!tree || (!tree->right && !tree->left))
		return (0);
	height_i = binary_tree_height(tree->left);
	height_j = binary_tree_height(tree->right);

	if (height_i >= height_j)
		return (height_i + 1);

	return (height_j + 1);
}

/**
 * check_is_perfect - check if tree is perfect
 * @node: pointer
 * @h: height of tree
 * @level: current level
 * Return: 1
 **/
int check_is_perfect(const binary_tree_t *node, size_t h, size_t level)
{
	if (!node->right && !node->left)
		return (h == level);

	if (!node->right || !node->left)
		return (0);

	return (check_is_perfect(node->left, h, level + 1) &&
			check_is_perfect(node->right, h, level + 1));
}

/**
 * binary_tree_is_perfect - check
 * @tree: pointer
 * Return: 1
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_tree = binary_tree_height(tree);

	if (tree == NULL)
		return (0);
	return (check_is_perfect(tree, height_tree, 0));
}
