#include <stdio.h>

/*
	�������������ٵ��� 
*/
int max(int a,int b);//�������� 

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
