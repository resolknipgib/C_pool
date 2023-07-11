#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree		*tree;

	tree = (t_btree *)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = (NULL);
		tree->right = (NULL);
		tree->item = item;
	}
	return (tree);
}
