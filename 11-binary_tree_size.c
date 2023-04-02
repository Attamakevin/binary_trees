#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - a function to find the size of binary tree
 * @tree: a pointer to the root node
 * Reurn: return the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + ((binary_tree_size(tree->left) + binary_tree_size(tree->right))));
}
