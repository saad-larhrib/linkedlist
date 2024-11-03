//function to insert a node after a node with value 'val'
node *after(node *head,int ndata,int val){
	node *afnode = (node *)malloc(sizeof(node));
	afnode->data = ndata;
	afnode->next = NULL;

	//Step 2 : initialize PTR 
	node *ptr = head;
	
	//Step 3 : Traverse the list using ptr 
	while(ptr != NULL && ptr->data != val){
		ptr = ptr->next; //Move ptr to the next node
	}
	
	//if the value 'val' is found,insert the new node
	if(ptr != NULL){
		//Step 4: Link the new node to the node after ptr
		afnode->next = ptr->next; 
		ptr->next = afnode; //Link ptr to the new node
	}

//retrun the head of the list
return head;
}
