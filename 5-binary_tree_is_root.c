#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if node is root
 *
 * @node: Pointer to (sub)tree
 * Return: 1 | 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int res;

	if (node == NULL)
	{
		return (0);
	}

	res = (node->parent) ? 0 : 1;
	return (res);
}
