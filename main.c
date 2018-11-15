#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int i;
	int j;
	char c;
	int (*calcfunc)(int,int);
	int addfunc(int,int);
	int subfunc(int,int);
	int mulfunc(int,int);
	int divfunc(int,int );
	
	printf("input calculation : ");
	scanf("%d %c %d",&i, &c, &j);
	
	
	switch(c)
	{
		case '+':
			calcfunc = addfunc;
			break;
		case '-':
			calcfunc = subfunc;
			break;
		case '*':
			calcfunc = mulfunc;
			break;
		case '/':
			calcfunc = divfunc;
			break;
	}
	
	printf("result : %i\n", calcfunc(i,j));
	return 0;
}
int addfunc(int a,int b){
	
	return a+b;
	
}

int subfunc(int a, int b){
	
	return a-b;
}
int mulfunc(int a, int b){
	return a*b;
	
}

int divfunc(int a ,int b){
	
	return a/b;
}
