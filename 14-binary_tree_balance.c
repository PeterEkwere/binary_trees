#include "binary_trees.h"
/**
 * tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
int tree_height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

     if (tree == NULL)
    {
        return 0;
    }

	height_l = tree->left ? 1 + tree_height(tree->left) : 1;
	height_r = tree->right ? 1 + tree_height(tree->right) : 1;
	return ((height_l > height_r) ? height_l : height_r);
}
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
    left_height = tree_height(tree->left);
    right_height = tree_height(tree->right);
    return (left_height - right_height);
}