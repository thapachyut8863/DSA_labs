#include<iostream>
using namespace std;

#define MAX_STACK_SIZE 100

class Stack{
	private:
		int elements[MAX_STACK_SIZE];
		int top;
	public:
		Stack();
		~Stack();
		
		void push(int element);
		int pop();
		int peek();
		bool isEmpty();
		bool isFull();
};
 Stack::Stack(){
 top = -1;
}
bool Stack::isEmpty(){
 return top<0;
}
bool Stack::isFull(){
return top>=MAX_STACK_SIZE-1;
}
void Stack::push(int element){
if(isFull()){
cout<< "Cannot push"<<element<<"Stack Overflow";
    }
    else{
    top++;
    this->elements[top] = element;
    }
}
int Stack::pop(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Stack Underflow";
}
else{
return elements[top--];
}
}
int Stack::peek(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Stack Underflow";
}
else{
return elements[top];
}
}
Stack::~Stack(){
}
int main()
{
Stack s;
s.push(3);
s.push(7);
s.push(6);
s.push(5);
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
}

