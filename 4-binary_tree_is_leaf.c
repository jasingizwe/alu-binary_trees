#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is leaf
 *
 * @node: Pointer to (sub)tree
 * Return: 1 | 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}
	return (0);
}
