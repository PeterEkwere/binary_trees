#include "binary_trees.h"
/**
 * binary_tree_preorder - is a function that traverses a tree in pre-order
 * @tree: this is a pointer to the root node
 * @func: This is a pointer to a funciton to print a done
 * Return: Void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
