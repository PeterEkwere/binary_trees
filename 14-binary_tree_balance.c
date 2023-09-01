#include "binary_trees.h"
/**
 * binary_tree_balance - is a function that checks the balance factor of the tree 
 * @tree: is a pointer to the root node
 * Return: 0 if tree is NULL 
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height;
    int right_height;

    if (tree == NULL)
    {
        return (0);
    }
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height + right_height);
}