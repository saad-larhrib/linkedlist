node *befor(node *head,int ndata,int val){
	node *bef = (node *)malloc(sizeof(node));
	bef->data = ndata;
	bef->next = NULL;
	
	if(head == NULL){
		bef->next = bef;
		return bef;
	}
	
	node *ptr = head;
	node *tmp = NULL;
	
	do{
		if(ptr->data == val){
			bef->next = ptr->next;
			tmp->next = bef;
			return head;
		}	
		tmp = ptr;
		ptr = ptr->next;
	}while(ptr->next != head && ptr->data != val);

return head; 
}
