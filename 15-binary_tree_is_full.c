#include "binary_trees.h"
/**
 * binary_tree_is_full - is a function that checks if a tree is full
 * @tree: is a pointer to the root node
 * Return: 0 if tree is NULL or not Full and 1 if it is
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    int check = 0;

    if (tree == NULL)
    {
        return (0);
    }

    check = binary_tree_balance(tree);
    if (check == 0)
    {
        return (1);
    }
    return (0);
}