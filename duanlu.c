#include <stdio.h>

int main(){
	int a=10;
	if(a<20||++a<11){//a<20成立，所以后面的不用执行 
		printf("%d\n",a);//输出10 
	}
	if(a<5||++a<12){//a<5不成立，后面的执行 
		printf("%d\n",a);//输出11 
	}
	return 0;
} 
