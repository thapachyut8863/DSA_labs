#include<iostream>
#include<iostream>
using namespace std;
#define MAX 100

class Queue{
	private:
	char elements[MAX];
	int f;
	int r;
	public:
	Queue();
	~Queue();
		
	void enqueue(char element);
	char dequeue();
	bool isEmpty();
	bool isFull();
	char front();
	char rear();
};
Queue::Queue(){
f= -1;
r= -1;
}
bool Queue::isEmpty(){
return (f==r);
}
bool Queue::isFull(){
return r==MAX-1;
}
void Queue::enqueue(char element){
if(isFull()){
cout<< "Cannot enqueue"<<element<<"Queue Overflow";
    }
    else{
    r++;
    this->elements[r] = element;
    }
}
char Queue::dequeue(){
if(isEmpty()){
cout<< "Cannot dequeue"<<endl<< "queue Underflow";
}
else{
return elements[++f];
}
}
char Queue::front(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Queue Underflow";
}
else{
return elements[f];
}
}
char Queue::rear(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Queue Underflow";
}
else{
return elements[r];
}
}
Queue::~Queue(){
}
int main(){
Queue q;
q.enqueue('g');
q.enqueue('o');
q.enqueue('a');
q.enqueue('t');
cout<<q.dequeue();
cout<<q.dequeue();
cout<<q.dequeue();
cout<<q.dequeue();


}

