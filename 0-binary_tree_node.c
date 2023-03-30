#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_node - a function to create a binary tree
* @parent: the parent node
* @value: the key value of the the node
* Return: pointer to the created binary tree
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = parent;

	root = malloc(sizeof(binary_tree_t));
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	if (root == NULL)
	{
		return (NULL);
	}
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;
	return (root);
}
