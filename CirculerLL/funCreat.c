node *creat(node *head,int ndata){
	node *addnode = (node *)malloc(sizeof(node));
	addnode->data = ndata;
	addnode->next = NULL;
	
	if(head == NULL){
		head = addnode;
		addnode->next = head;
	}else{
		node *last = head;
		while(last->next != head){
			last = last->next;
		}
	last->next = addnode;
	addnode->next = head;
	}
return head;
}
