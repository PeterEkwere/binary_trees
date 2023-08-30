#include "binary_trees.h"
/**
 * binary_tree_postorder - is a function that traverses a list postorder
 * @tree: is a pointer to the root node
 * @func: is a function pointer to the printing function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
