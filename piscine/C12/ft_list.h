#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	int		data;
}			t_list;

t_list	*ft_create_elem(int data);

#endif
