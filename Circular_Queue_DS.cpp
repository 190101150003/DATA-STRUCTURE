#include <stdio.h>
int front = 0;
int rear = -1;
int itemCount = 0;
int arr[20];


int size() {
   return itemCount;
}  

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == 20;
}

int peek() {
   return arr[front];
}


void insert(int data) {

   if(!isFull()) {
	
      if(rear == 20-1) {
         rear = -1;            
      }       

      arr[++rear] = data;
      itemCount++;
   }
}

int deletion() {
   int data = arr[front++];
	
   if(front == 20) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

void view()
{
	while(!isEmpty()) {
      int n = peek();  
	  printf("Elements in Queue are .. \n");         
      printf("%d ",n);
      int a = deletion();
   }   
}
int menu()
{
    int choice;
    printf("\n1. Insertion");
    printf("\n2. Deletion");
    printf("\n3. View");
    printf("\n4. Exit");
    printf("\n\nEnter your choice\n ");
    scanf("%d",&choice);
    return choice;
}
int main() {
	
    int data;
    int res;
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("\nEnter data to insert: ");
            scanf("%d",&data);
            insert(data);
            break;
        case 2:
            res = deletion();
            printf("Element removed: %d\n",res);
            break;
        case 3:
        	view();
        	break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice,retry");
        }
      
    } 
      getch();
}
