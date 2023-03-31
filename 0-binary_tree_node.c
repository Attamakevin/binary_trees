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
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
