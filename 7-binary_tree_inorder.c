#include "binary_trees.h"
/**
 * binary_tree_inorder - is a function that traverses a tree in in-order
 * @tree: this is a pointer to the root node
 * @func: This is a pointer to a funciton to print a done
 * Return: Void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
