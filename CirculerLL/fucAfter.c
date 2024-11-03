node *after(node *head,int ndata,int val){
	node *af = (node *)malloc(sizeof(node));
	af->data = ndata;
	af->next = NULL;
	
	if(head == NULL){
		af->next = af;
		return af;
	}
	
	node *ptr = head;
	do{
		if(ptr->data == NULL){
			af->next = ptr->next;
			ptr->next = af;
		}
		ptr= ptr->next;
	}while(ptr != head);	
return head;
}
