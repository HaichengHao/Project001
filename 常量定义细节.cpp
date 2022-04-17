//#include<stdio.h>
//#define A 1
//#define B A+3
//#define C A/B*3
////const不能重定义，不可以定义两个一样的，而define通过undef取消某个符号的定义，再重新定义
//const double PI = 3.14;
////const double PI = 3.141;//这里会报错---> error C2374 : “PI”: 重定义；多次初始化
//#define PI2 3.14
//#undef PI2 //取消PI2的定义
//#define PI2 3.145
//void main() {
//	//分析过程
//	//#define就是一个简单的替换
//	//C 其实就是A/A+3*3 =1/1+3*3
//	//如果常量值被小括号括起来，就为A/(A+3)*3 = 1/(1+3)*3
//	printf("c=%d", C);//c=10
//
//}