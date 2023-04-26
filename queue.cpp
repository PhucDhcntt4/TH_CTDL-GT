#include <iostream>
#define MAX_SIZE 20

using namespace std;

int queue[MAX_SIZE];
int front = 0, rear = 0 ;
 
void Enqueue(int data)

{

	if(rear == MAX_SIZE )
		cout<< "FUll" << endl;
	else
	{
		queue[rear++] = data;
	}
}

void Dequeue()
{
	if(front == rear)
		cout<<"Queue rong";
	else
	{
		queue[front]=0;
		front ++;
	}
}

int Front()
{
	return queue[front];

}

int size()
{
	return rear - front;
}

int main()
{
Enqueue(7);

Dequeue();
cout<< Front() <<endl;
cout<<size()<<endl;
return 0;
}