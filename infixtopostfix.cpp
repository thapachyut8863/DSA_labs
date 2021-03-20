#include<iostream>
#include"stack.h"

using namespace std;


//Function to return precedence/priority of operators
int priority(char c){
  if(int(c)==42){  //for * operator
    return 2;
  }
  else if(int(c)==43){  //for + operator
    return 1;
  }
  else if(int(c)==45){  //for - operator
    return 1;
  }
  else if(int(c)==47){  //for / operator
    return 2;
  }
  else return -1;
}

//main block
int main(){
    string infixexp,postfixexp;
    cout<<"Enter an infix expression:"<<endl;
	cin>>infixexp;
    Stack s;
    char c;
	for(int i=0;i<infixexp.length();i++){
		c=infixexp[i];
        if(c=='('){       // If the scanned character is an ‘(‘, push it to the stack.

          s.push(c);
        }
        else if(c==')') {       // If the scanned character is an ‘)’, pop to output char p from the stack until an '(' is encountered

          char p=s.pop();
          while(p!='('){
            postfixexp+=p;
            p=s.pop();
          }
        }
        else if(int(c)>41&&int(c)<48){  //If the character is an operator
          if(!s.isEmpty()){
            char top=s.peak();
            while(!s.isEmpty()&&(priority(c)<=priority(top))){ //priority check with top element
              char token=s.pop();   //If priority of top element is higher or equal
              postfixexp+=token;
              top=s.peak();   //Resetting the top value
            }
          }
          s.push(c);
        }
        else{   //If the character is an operand
          postfixexp+=c;
        }
	}
    while(!s.isEmpty()){    //popping all the remaining characters at the end
        char token=s.pop();
        postfixexp+=token;
    }
    cout<<"The equivalent postfix expression is:"<<endl<<postfixexp<<endl;
}
