#include<stdio.h>
void main() {

	//逻辑与
	//	double score = 70;
	//	if (score >= 60 && score <= 80) {
	//		printf("ok1");
	//	}
	//	else {
	//		printf("not ok");
	//	}
	//}


	//int a = 10, b = 99;
	//if(a < 20 && b++>99) {//a=10 <20 为 1 ，b++先比较再自增，99并不大于99所以不执行第一个条件，而执行第二个条件
	//	printf("ok");
	//}
	//else {
	//	printf("\nnot ok ");
	//}
	//}

	//逻辑或
int a = 10, b = 99;
if (a < 5 || b++>100) {//a<5
	printf("ok");
}
	printf("b=%d\n", b);
}
