#include<iostream>
#include"stack.h"
using namespace std;


int main()
{
  int i=0,x,a,b,c;
  char input[100];
  Stack s1;

  cout<<"Enter a valid postfix expression:"<<endl;
  cin>>input;

while(input[i] != '\0')
{
     if(input[i]>='0' && input[i]<='9')
     {
         x=input[i]-48;
         s1.push(x);
         cout<<input[i]<<endl;
     }
     else if (input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/')
     {
          a=s1.pop();
          b=s1.pop();
          switch(input[i])
          {
            case '+':
                c=b+a;
                s1.push(c);
                break;
            case '-':
                c=b-a;
                s1.push(c);
                break;
            case '*':
                c=b*a;
                s1.push(c);
                break;
            case '/':
                c=b/a;
                s1.push(c);
                break;
                                  
          }
     }

  i++;
}
cout<<"Answer = "<<s1.pop()<<endl;

return 0;

}
