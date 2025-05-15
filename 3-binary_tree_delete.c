#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete_recursive - Delete tree recursively
 *
 * @tree: Pointer to (sub)tree
 * Return: tree | NULL
 */
binary_tree_t *binary_tree_delete_recursive(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (NULL);
	}

	binary_tree_delete_recursive(tree->left);
	binary_tree_delete_recursive(tree->right);
	free(tree);

	return (NULL);
}

/**
 * binary_tree_delete - Delete a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_delete_recursive(tree);
}
