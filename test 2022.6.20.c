#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
		return 0;
}


//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//
//	{
//		if ('0' > ch || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N)");
//	ret = getchar();
//	if (ret = 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("���������룺>");
//
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//		case 1:
//			m++;
//		case 2:
//			n++;
//		case 3:
//			switch (n)
//			{
//			case 1:
//				n++;
//			case 2:
//
//				m++;
//				n++;
//					break;
//			}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//
//}



//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{if (a % 2 == 1)
//		
//			printf("%d", a);
//			a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	swich(day)
//	{
//
//	}

	//if (1 == day)
	//	printf("����һ\n");
	//if (2 == day)
	//	printf("���ڶ�\n");
	//if (3 == day)
	//	printf("������\n");
		
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("�Ǻ�\n");
//	}
//	else
//			printf("����\n");
//			return 0;
//}
//int main()
//{
//	int a = 45;
//	if (a < 18)
//		printf("δ����\n");
//	else
//	{
//		if (a <= 28 && a >= 18)
//			printf("����\n");
//		else if (a >= 28 && a <= 50)
//			printf("׳��\n");
//		else if (a >= 50 && a <= 90)
//			printf("����\n");
//		else
//			printf("�ϲ�����");
//	}
//	return 0;
//}


//struct Book
//{
//	char name[20];
//	int peice;
//};
//int main()
//{
//	struct Book bi = { "C���Գ������",55 };
//	strcpy(bi.name,"C++");
//	printf("%s\n", bi.name);
//
//	//struct Book* pb = &bi;
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->peice);
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).peice);
//	//printf("����:%s\n", bi.name);
//	//printf("�۸�:%dԪ\n", bi.peice);
//	//bi.peice = 15;
//	//printf("�޸ĺ�ļ۸�:%dԪ\n", bi.peice);
//	return 0;
//}
//int main()
//{
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(double*));
	//printf("%d\n", sizeof(short*));
	//return 0;
	//double d = 3.14;
	//double* b = &d;
	//*b = 5.5;
	//printf("%d\n", sizeof(b));
	//printf("%lf\n", d);
	//return 0;
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//printf("%d\n", a);
	//return 0;
//}
//int main()
//{
//	char num = 'a';
//	char* num2 = &num;
//	*num2 = 'b';
//	printf("%d\n",sizeof(num2));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//		return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	extern int a;
//	printf("%d\n", a);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//		a++;
//		printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a < b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//		printf("%d\n", b);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//		return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//	printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ� % d\n", num2);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[4]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//
//	sum = Add(num1,num2);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
////int main()
//{
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("����ɽ������\n");
//	while (line < 20000)
//	{
//		printf("��1�д���\n,%d\n", line);
//		line++;
//	}
//	if (line>=20000);
//	printf("���ɴ�ɵ����\n");
//	return 0;
//}
