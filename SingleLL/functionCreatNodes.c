#include <stdio.h>
#include <stdlib.h>

//this is a struct for simple single list

typedef struct node{
	int data;
	struct node *next;
}node;

//this function creat Nodes and adds them to the list

node *creatNodes(node *head,int newData){
	//Allocation memory for the node 
	node *addNode = (node*)malloc(sizeof(node));
	addNode->data = newData;
	addNode->next = NULL;
	
	//if the list is empty , newNode becomes the head
	
	if(head == NULL){
		head = addNode;
	} else {
		//Travers the list to find the last node
		node *last = head;
		while(last->next != NULL){
			last = last->next;
		}
		//Attach the new Node at the end

		last->next = addNode; 
	}
	//Return the update head
	return head; 
}

int main(){
	node *head = NULL;
	int data1 = 10;
	int data2 = 11;

	//These calls do not update the head because head is passed by value
	head = creatNodes(head,data1);
	head = creatNodes(head,data2);

return 0;
}
