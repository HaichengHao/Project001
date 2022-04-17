#include<stdio.h>
#define A 1
#define B A+3
#define C A/B*3
void main() {
	//分析过程
	//#define就是一个简单的替换
	//C 其实就是A/A+3*3 =1/1+3*3
	//如果常量值被小括号括起来，就为A/(A+3)*3 = 1/(1+3)*3
	printf("c=%d", C);//c=10

}