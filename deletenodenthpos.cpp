// LINKED LIST: DELETE A NODE AT NTH POSITION
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* head; //GLOBAL
void Insert(int data); // INSERT AN INTEGER AT THE END OF THE LIST	
void Print();	//PRINT ALL ELEMENTS IN THE LIST

void Delete(int n) // DELETE A NODE AT POS (N)
{ 
struct Node* temp1 = head;
if(n == 1){
	head = temp1->next; // HEAD NOW POINTS TO 2ND NODE
	free(temp1);
	return;
}
int i;
for(i = 0;i<n-2;i++)
	temp1 = temp1->next;
	//TEMP1 POINTS TO (N-1)TH NODE
	struct Node* temp2 = temp1->next; //NTH NODE
	temp1->next = temp2->next; //(N+1)TH NODE
	free(temp2); //delete temp2;
}

int main()
{
	head = NULL; // EMPTY LIST
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5); // List: 2-4-6-5
	Print();
	int n;
	printf("Enter a position\n");
	scanf("%d", &n);
	Delete(n);
	Print();
	
}
