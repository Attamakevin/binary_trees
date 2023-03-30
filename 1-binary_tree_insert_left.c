#include <stdio.h>
#include "binary_trees.h"
/** 
* binary_tree_insert_left - a function toinsert node to left of parentnode
* @parent: the parent node to insert into
* @value: the value tobe inserted
* Return: newnode or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL;
    }

    if (parent->left != NULL) {
        parent->left->parent = new_node;
        new_node->left = parent->left;
    }

    parent->left = new_node;

    return new_node;
}

