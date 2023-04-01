#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - function to check if a node is a root
 * @node: the node to check
 * Return: return 1 if node is a root and 0 if otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		return (1);
	}
return (0);
}
