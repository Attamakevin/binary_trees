#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - a function that return the height of binary tree
 * @tree: pointer to the root of the root node
 * Return: the height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return  (left_height + 1);
	else
		return (right_height + 1);
}
