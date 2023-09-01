#include "binary_trees.h"
/**
 * binary_tree_nodes - is a function that counts the nodes with atleast 1 child 
 * @tree: is a pointer to the root node
 * Return: 0 if tree is NULL 
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left_node;
    size_t right_node;

    if (tree == NULL)
    {
        return (0);
    }

    left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

    if (tree->left || tree->right)
    {
        return (left_node + right_node + 1);
    }
    else
    {
        return (left_node + right_node);
    }
}