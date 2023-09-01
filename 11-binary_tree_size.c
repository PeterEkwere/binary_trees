#include "binary_trees.h"
/**
 * binary_tree_size - is a function that returns the height of the tree
 * @tree: is a pointer to the root node
 * Return: 0 if fail or size if success
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}