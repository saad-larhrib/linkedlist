node *fin(node *head,int ndata){
	node *fin = (node *)malloc(sizeof(node));
	fin->data = ndata;
	fin->next = NULL;

	if(head == NULL){
		fin->next = fin;
		return fin;
	}	
	
	node *ptr = head;
	while(ptr->next != head){
		ptr = ptr->next;
	}
	
	ptr->next = fin;
	fin->next = head;

return head;
}
