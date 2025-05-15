#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * find_depth - Finds the depth of the leftmost node
 * @node: Pointer to the current node
 *
 * Return: Depth of the leftmost node
 */
static int find_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}

/**
 * is_perfect - Recursively checks if a binary tree is perfect
 * @node: Pointer to the current node
 * @depth: Expected depth of all leaves
 * @level: Current level of the node
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
static int is_perfect(const binary_tree_t *node, int depth, int level)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (depth == level + 1);

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (is_perfect(node->left, depth, level + 1) &&
		is_perfect(node->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = find_depth(tree);

	return (is_perfect(tree, depth, 0));
}
