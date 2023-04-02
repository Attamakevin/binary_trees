#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - a function to count leaf nodes
 * @tree: pointer to the root node
 * Return: return the number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leave_count += binary_tree_leaves(tree->left);
	leave_count += binary_tree_leaves(tree->right);
	return (leave_count);
}
