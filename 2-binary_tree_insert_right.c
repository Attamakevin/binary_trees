#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_insert_right - a function toinsert node to left of parentnode
* @parent: the parent node to insert into
* @value: the value tobe inserted
* Return: newnode or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	return (new_node);
}
