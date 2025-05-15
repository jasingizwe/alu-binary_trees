#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create a Binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Integer to store in the new left node
 * Return: Pointer to the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_left_child = malloc(sizeof(binary_tree_t));

	if (new_left_child == NULL)
	{
		return (NULL);
	}

	new_left_child->n = value;
	new_left_child->left = NULL;
	new_left_child->right = NULL;
	new_left_child->parent = parent;

	if (parent->left != NULL)
	{
		new_left_child->left = parent->left;
		parent->left->parent = new_left_child;
	}
	parent->left = new_left_child;

	return (new_left_child);
}
