#include <stdio.h>

int main(){
	int a=10;
	if(a<20||++a<11){//a<20���������Ժ���Ĳ���ִ�� 
		printf("%d\n",a);//���10 
	}
	if(a<5||++a<12){//a<5�������������ִ�� 
		printf("%d\n",a);//���11 
	}
	return 0;
} 
