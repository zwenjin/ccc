#include <stdio.h>

/*
	ֵ���ݺ͵�ַ���� 
*/
int swap1(int a);
int swap2(int *a);

int main(){
	int a=5;
	printf("a��ƽ��Ϊ:%d,a����:%d\n",swap1(a),a);//ֵ���ݣ��൱�����ڴ����ֿ�����һ��ռ������a��ƽ�� 
	swap2(&a);//ȡa�ĵ�ַ��ֱ�Ӳ����ڴ��ַ�е�ֵ 
	printf("a��ƽ��Ϊ:%d\n",a);
	return 0;
}

int swap1(int a){
	return a*a;
}

int swap2(int *a){
	(*a)*=(*a);//����ַ�е�ֵ�����Լ� 
}
