#include <stdio.h>

int main(){
	int a=7;//111(2)
	int b=5;//101(2)
	printf("%d\n",a&b);//101(2)�����5
	printf("%d\n",a|b);//111(2)�����7
	printf("%d\n",a^b);//010(2)�����2 
	printf("%d\n",b<<1);//1010(2),���10
	printf("%d\n",b>>1);//10(2)�����2 
	return 0;
} 
