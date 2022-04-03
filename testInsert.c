#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 30

struct node {
	int num;
	char name[SIZE];
	int time;
	struct node* next;
	struct node* prev;
};
struct node* head;

void PrintList() {
	struct node* temp;
	temp = head;
	while (temp) {
		printf("%d,%s", temp->num, temp->name);
		if (temp->next)
			printf("->");
		else
			printf("-||\n");
		temp = temp->next;
	}
}
void Insertbegin() {
	int number;
	char name1[SIZE];
	printf("please enter a num\n");
	scanf("%d", &number);
	//getchar();
	printf("please enter a name\n");
	fgets(name1, SIZE, stdin);
	//getchar();
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	if (temp == NULL) {
		printf("\nOVERFLOW\n");
	}
	else
	{  
		strcpy(temp->name,name1);
	    temp->num = number;
		temp->next = head;
		head = temp;
	}

	
}
	
	
	


void main() {
	int input;
	do {
		printf("\nenter 0 to procsses\n");
		scanf_s("%d", &input);
		//getchar();
		Insertbegin();
		PrintList();
	} while (input == 0);
}