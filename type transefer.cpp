////强制类型转化
//#include<stdio.h>
//void main() {
//	double d1 = 1.2345;
//	int num = (int)d1;//不是进行四舍五入，而是直接截断小数点后的部分
//	//强制类型转换只对最近的数有效，如果希望针对更多的表达式转换，使用括号（）
//	int num2 = (int)3.5 * 10 + 6 * 1.5; //相当于3*10+6*1.5 ,但有精度损失，答案39
//	int num3 = (int)(3.5 * 10 + 6 * 1.5);//答案44
//	printf("\nnum2=%d", num2);
//	printf("\nnum3=%d", num3);
//	printf("\nnum = %d d1 = %f", num,d1);//d1仍然是double类型
//}
////将精度高的转换成精度低的数据类型