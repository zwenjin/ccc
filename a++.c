#include <stdio.h>

int main(){
	int a = 1;
	printf("%d\n",a++);//先取值后自增输出1 
	printf("%d\n",++a);//先自增后取值输出3 
	return 0;
}
