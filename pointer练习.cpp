//写一个程序，获取一个int变量num的地址，并显示到终端
//将num的地址赋值给指针变量,并通过ptr去修改num的值
//分析ptr的类型是int*，注意指针的类型和该指针指向的变量类型是对应关系
//并画出案例的内存布局图

#include<stdio.h>
void main() {
	int num = 100;
	int* ptr = &num;
	printf("num 的值 %d ,num 的地址 %p", num, &num);
	*ptr = 80;//通过指针访问 变量num,并修改num的值
	printf("\nptr自身的地址 %p",&ptr);
	printf("\n num当前的值 %d ,num当前的地址 %p", num ,&num);//可以发现num的值发生了改变，但是地址保持不变

}
/*结果：
num 的值 100 ,num 的地址 000000129015FAB4
 num当前的值 80 ,num当前的地址 000000129015FAB4 
 */