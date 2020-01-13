#include <stdio.h>

int main(){
	if(1||0&&0){
		printf("1||0&&0为1");//&&比||优先级高所以先执行0&&0在执行1||(0&&0) 
	}
	else{
		printf("1||0&&0为0");
	}
	return 0;
}
