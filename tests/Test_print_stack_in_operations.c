	int i = 0;
	while ( (*a)->node->next)
	{
		printf("%i %i\n", (*a)->node->data,  (*a)->node->index);
		printf("%i %i\n", (*b)->node->data, (*b)->node->index); 
		(*a)->node =  (*a)->node->next;
		i++;
	}
	printf("%i", (*b)->node->data);
		(*a)->size ++;
		(*b)->size --;
	