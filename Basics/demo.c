#include<stdio.h> // functions library
#include<conio.h> // console - header file

void result(){
	int mark;
	printf("Enter your mark : ");
	scanf("%d",&mark);
	
	printf("\nExam - 1 : %d\n",(mark*50)/36);
	printf("Exam - 2 : %d\n",(mark*100)/36);
	printf("Exam - 3 : %d\n\n",(mark*60)/36);
	result();
}

void main(){
	result();
}
