#include <stdio.h>

int main(){
	if(1||0&&0){
		printf("1||0&&0Ϊ1");//&&��||���ȼ���������ִ��0&&0��ִ��1||(0&&0) 
	}
	else{
		printf("1||0&&0Ϊ0");
	}
	return 0;
}
