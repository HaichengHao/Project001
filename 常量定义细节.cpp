#include<stdio.h>
#define A 1
#define B A+3
#define C A/B*3
void main() {
	//��������
	//#define����һ���򵥵��滻
	//C ��ʵ����A/A+3*3 =1/1+3*3
	//�������ֵ��С��������������ΪA/(A+3)*3 = 1/(1+3)*3
	printf("c=%d", C);//c=10

}