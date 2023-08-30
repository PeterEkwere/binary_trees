#include "binary_trees.h"
/**
 * binary_tree_depth - A function That calculates the depth of a node
 * @tree: is a pointer to a node
 * Return: 0 if none or count  
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t count = 0;
    binary_tree_t *temp = tree;

    while (temp->parent != NULL)
    {
        count++;
        temp = temp->parent;
    }
    return (count);
}