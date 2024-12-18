#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int size=50;
chat infix[size],postfix[size],Stack[size];
int top=-1;
int precedence(char ch){
	switch(ch){
		case '^': return 5;
		case '/': return 4;
		case '*': return 4;
		case '+': return 3;
		case '-': return 3;
		default : return 0;
	}
}
char Pop(){
	char ret;
	if(top!=-1){
		ret=Stack[top];
		top--;
		return ret;
	}
	else
	return '#';
}
char Topelement(){
	char ch;
	if(iop!=-1)
}
