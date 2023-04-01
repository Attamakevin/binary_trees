#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_delete - a function to delete a binary tree
* @tree: the binary tree to be deleted
* Return: return void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
