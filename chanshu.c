#include <stdio.h>

/*
	值传递和地址传递 
*/
int swap1(int a);
int swap2(int *a);

int main(){
	int a=5;
	printf("a的平方为:%d,a还是:%d\n",swap1(a),a);//值传递，相当于在内存中又开辟了一块空间来存放a的平方 
	swap2(&a);//取a的地址，直接操作内存地址中的值 
	printf("a的平方为:%d\n",a);
	return 0;
}

int swap1(int a){
	return a*a;
}

int swap2(int *a){
	(*a)*=(*a);//将地址中的值乘以自己 
}
