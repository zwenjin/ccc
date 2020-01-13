#include <stdio.h>

/*
	三段式格式为   条件语句?a:b 
	若条件成立则整个语句的值为a，否则为b
	三段式也有短路现象 
*/ 
int main(){
	int a=5;
	int b=10;
	printf("a=%d,b=%d\n",a,b); 
	printf("其中小的为:%d\n",(a<b?a:b++));//输出小的变量，执行a；而b++不执行 
	printf("b++没有被执行，所以还是:%d\n",b);//b还是10 
	return 0;
}
