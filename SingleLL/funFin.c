node *insertFin(node *head,int ndata){
	//Creat a new node 
	node *nodefin = (node *)malloc(sizeof(node));
	nodefin->data = ndata;
	nodefin->next = NULL;
	
	//if the list is empty, the new node is the head
	if(head == NULL){
		return head;
	}
	
	//traverse to the end of the list
	node *ptr = head;
	while(ptr != NULL){
		ptr = ptr->next;
	}

	
	//insert the new node at the end
	ptr->next = nodefin;

//return the updated head
return head;
}
