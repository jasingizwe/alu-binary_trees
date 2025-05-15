#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create a Binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Integer to store in the new right node
 * Return: Pointer to the new right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_right_child = malloc(sizeof(binary_tree_t));

	if (new_right_child == NULL)
	{
		return (NULL);
	}

	new_right_child->n = value;
	new_right_child->left = NULL;
	new_right_child->right = NULL;
	new_right_child->parent = parent;

	if (parent->right != NULL)
	{
		new_right_child->right = parent->right;
		parent->right->parent = new_right_child;
	}
	parent->right = new_right_child;

	return (new_right_child);
}
