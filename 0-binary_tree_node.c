#include "binary_trees.h"
/**
 * binary_tree_node - This is a Function that creates a new node
 * @parent: This is the parent node
 * @value: This is the value to be inserted in the node
 * Return: A pointer to the node if success or NULL if failed
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	
	return (new_node);
}
