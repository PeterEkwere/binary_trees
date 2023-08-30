#include "binary_trees.h"
/**
 * binary_tree_inorder - This is a function that traverses in order
 * @tree: This is a pointer to the root node
 * @func: This is a pointer to a funtion to call
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