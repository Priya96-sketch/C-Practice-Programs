//Creating three nodes simply
#include <stdio.h>
#include <stdlib.h>

//Creating the Structure, as in C language we represent a node using Structures.
struct node{
    int data;
    struct node* next;
};
//Main function creating the 3 nodes
int main() {
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	
	//allocating the 3 nodes in Heap//
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	//Now time to assign values to the nodes
	//head node
	head->data=1;
	head->next=second;
	
	//second node
	second->data=2;
	second->next=third;
	
	//third node
	third->data=3;
	third->next=NULL;
	return 0;
}
