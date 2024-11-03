node *beg(node *head,int ndata){
	node *beg = (node *)malloc(sizeof(node));
	beg->data = ndata;
	
	if(head == NULL){
		beg->next = beg;
		return beg;
	}
	
	node *last = head;
	while(last->next != head){
	last = last->next;
	}
	
	last->next = beg;
	beg->next = head;
	head = beg;
return head;
}
