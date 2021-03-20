#include <iostream>

#include "STACK.h"

STACK::STACK(){
	stack = NULL;
	peek = NULL;
}

STACK::~STACK(){}

bool STACK::isEmpty(){
	if(stack == NULL){
		return true;
	}
	else{
		return false;
	}
}

void STACK::push(int data){
	counter += 1;
	Node* newNode = new Node();
	newNode->info = data;
	if (isEmpty()){
		newNode->next = newNode;
		stack = newNode;

	}

	else if (counter <= MAX_STACK_SIZE){
		newNode->next = stack->next;
		stack->next = newNode;
	}
	else if(isFull()){
		std::cout<<"Stack Overflow!"<<std::endl;
		counter -= 1;
	}
	
	
}

int STACK::top(){
	return stack->next->info;
}

int STACK::pop(){
	counter -= 1;
	int data;
	if(isEmpty()){
		std::cout<<"Stack Underflow!"<<std::endl;
	}
	else{
		peek = stack->next;
		data = peek->info;
		stack->next = peek->next;
			if (peek == stack)    //If only one node remains
			{
				stack = NULL;
				} 

	}

	return data;
}

bool STACK::isFull(){
	if (counter > MAX_STACK_SIZE)
		return true;
	else
		return false;
}


int main(){
	STACK s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	std::cout<<"The top element in the stack is: "<<s.top()<<std::endl;
	s.push(55);
	s.pop();
	s.push(23);
	std::cout<<"The top element in the stack is: "<<s.top()<<std::endl;
	s.push(28);
	s.pop();
	s.push(333);
	std::cout<<"The top element in the stack is: "<<s.top()<<std::endl;
	s.push(225);
	s.push(101);
	s.pop();
	s.push(8);
	std::cout<<"The top element in the stack is: "<<s.top()<<std::endl;
}
