#ifndef S_BTREE_H
#define S_BTREE_H

typedef struct		s_btree
{
	struct	s_btree	*left;
	struct	s_btree	*right;
	int		item;
}			t_btree;

#endif
