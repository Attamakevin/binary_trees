#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - a function to tranverse a
 * tree using inorder tranversal
 * @tree: pointer to the root node
 * @func: pointer to the function
 * Return:return void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
