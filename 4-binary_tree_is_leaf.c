#include "binary_trees.h"
/**
 * binary_tree_is_leaf - is a function that checks if a node is leaf
 * @node: is a pointer to the node to be checked
 * Return: 1 if True or 0 if False
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
