////指针入门
//#include<stdio.h>
//void main() {
//	int num = 1;
//	//定义一个指针变量，指针
//	//说明
//	//1.int*表示类型为指针类型
//	//2.名称为ptr,ptr就是一个int*类型
//    //3.ptr指向了一个int类型变量的地址
//	int* ptr = &num;//把变量num地址给指针变量ptr,也可以说是让ptr指向了变量num的地址
//	
//					
//	//num的地址是多少
//	//说明一:如果要输出一个变量的地址，使用格式是%p
//	//说明二:&num表示取出num 这个变量对应的地址
//	printf("num 的值 =%d num 地址 =%p",num, &num);
//	printf("\nptr的地址是%p", &ptr);
//	printf("\nptr里边是什么 %p", ptr);//我们可以知道，ptr本身有地址，然后我们给它制定了一个地址（这个地址就是num的地址，相当于让ptr指向了num的地址）
//	printf("\nptr获取指向的值 %d", *ptr);//ptr指针指向num,num的值为1，获取到ptr指向地址对应的值，也就是ptr->num=1
//}
///*
//num 的值 =1 num 地址 =000000AC31CFFC34
//ptr的地址是000000AC31CFFC58
//ptr里边是什么 000000AC31CFFC34
//*/