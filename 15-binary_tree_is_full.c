#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * A binary tree is full if every node has either 0 or 2 children.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If the tree is NULL, it's not full */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf (no children), it's considered full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children exist, check both subtrees recursively */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one child is missing, the tree is not full */
	return (0);
}
