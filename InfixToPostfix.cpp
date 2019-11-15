#include<bits/stdc++.h>
using namespace std;
 char in[100],post[100],op[100];
int c1=-1,c2=-1;
void pop()
{
	post[++c1]=op[c2--];
}
int pri(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
void push(char c)
{
	if(c2==-1||c=='(')
		op[++c2]=c;
	else if(c==')')
	{
		int i=c2;
		while(op[c2]!='(')
	{
		pop();
		i++;
	}
	c2--;
	}
	else
	{
		while(pri(c)<=pri(op[c2]))
			pop();
		op[++c2]=c;
	}

}


int main()
{
	cout<<"Enter infix expression"<<endl;
	cin>>in;
	for(int i=0;in[i]!='\0';i++)
	{
		if(isalnum(in[i]))
			post[++c1]=in[i];
		else
			push(in[i]);
			
	}
	while(c2!=-1)
	{
		post[++c1]=op[c2--];
	}
	post[++c1]='\0';
	cout<<"PostFix expression:"<<endl;
	cout<<post<<endl;
	
	return 0;
}
