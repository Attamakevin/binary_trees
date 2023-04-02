#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - a function to count nodes with altleast one node
 * @tree: pointer to the root node
 * Return: nodes with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (1 + count);
}
