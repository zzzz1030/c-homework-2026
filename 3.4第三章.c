#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int score = 0;
//
//	printf("请输入成绩：");
//	scanf("%d", &score);
//
//	switch (score / 10) {
//	case 10:
//	case 9:
//		printf("等级A");
//		break;
//	case 8:
//		printf("等级B");
//		break;
//	case 7:
//		printf("等级C");
//		break;
//	case 6:
//		printf("等级D");
//		break;
//	default:
//		printf("不合格");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, max;
//
//	printf("请输入三个数");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if ("a>=b") {
//		if ("a>=c") {
//			max = a;
//		}else{
//			max = c;
//		}
//	}else {
//		if (b >= c) {
//			max = b;
//		}else {
//			max = c;
//		}
//
//	}
//	
//	printf("最大的数是%d\n", max);
//	
//	return 0;
//}


//int main() 
//{
//	int a, b;
//
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b); 
//
//	if (a > b) {
//		printf("较大的数是：%d\n", a);
//	}
//	else if (a < b) {
//		printf("较大的数是：%d\n", b);
//	}
//
//	return 0;
//}

//int main()
//{
//	//初始化
//	int price = 0;
//	int bill = 0;
//	//读入金额和票面
//	printf("请输入金额：");
//	scanf_s("%d", &price);
//
//	printf("请输入票面：");
//	scanf_s("%d", &bill);
//	//计算找零
//	if (bill > price) {
//		printf("应该找您：%d\n", bill - price);
//	}else {
//		printf("你的钱不够\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 5 == 3);
//	printf("%d\n", 5 >= 3);
//	printf("%d\n", 5 <= 3);
//
//	printf("%d\n", 7 >= 3 + 4);
//
//	return 0;
//}

//int main()
//{
//	int hour1, minute1;
//	int hour2, minute2;
//
//	scanf_s("%d %d", &hour1, &minute1);
//	scanf_s("%d %d", &hour2, &minute2);
//
//	int ih = hour2 - hour1;
//	int im = minute2 - minute1;
//
//	if (im < 0) {
//		im = 60 + im;
//		ih--;
//	}
//
//	printf("时差是%d小时%d分\n", ih, im);
//	return 0;
//}