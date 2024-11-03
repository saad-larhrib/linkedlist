//This is a function insert a new node at the beginning of Liked list

node *insertInBeg(node *head,int newData){
	//Allocation memory for the new node
	node *newNode = (node *)malloc(sizeof(node));
	
	//Assing the new data to the node
	newNode->data = newData;

	//Make the new node point to current head of the list
	newNode->next = head;
	
	//The new node becomes the new head oh the list
	head = newNode;
	
	//Return the updated head
	return head;

}
