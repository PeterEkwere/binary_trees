#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function That inserts a nodes at the right
 * @parent: This is the Parent Node
 * @value: This is the newNode value
 * Return: A pointer to the node if success or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current = parent;
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);
	if (current->right == NULL)
	{
		current->right = new_node;
		new_node->parent = current;
	}
	else
	{
		new_node->right = current->right;
		current->right = new_node;
		new_node->parent = current;
	}
	return (new_node);
}
