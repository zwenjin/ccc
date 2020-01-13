#include <stdio.h>

/*
	函数需向声明再调用 
*/
int max(int a,int b);//声明函数 

int main(){
	int a=5;
	int b=10;
	int abmax;
	abmax=max(a,b);
	printf("%d",abmax);
	return 0;
}

int max(int a,int b){
	return (a>b?a:b);
}
