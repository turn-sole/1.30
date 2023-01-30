#include<stdio.h>
//int my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	char* ch[5];
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	int (*pf[5])(const char*) = &my_strlen;
//	return 0;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("*******1.add  2.sub *****\n");
//	printf("*******3.mul  4.div *****\n");
//	printf("*******0.exit      ******\n");
//	printf("*************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int  (*pf[5])(int, int) = { 0,add,sub,mul,div };
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("Exit Calculator\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("selection error\n");
//		}
		/*switch (input)
		{
		case 1:
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("推出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}*/
//	} while (input);
//}
//int mani()
//{
//	int arr[10];
//	int(*pa)[10] = &arr;
//	int (*pf[5])(int, int);
//	int (*(ppf)[5])(int, int) = &pf;
//	return 0;
//}
