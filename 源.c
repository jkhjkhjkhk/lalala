#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>
////int main()
//{
//	printf("%d\n", sizeof(char));             
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}



//bit ����λ
//1kb=8bit
//1mb=1024kb

//%d  ����
//%f  float
//%lf  double



//int num = 20;//ȫ�ֱ���
//int main()
//{ 
//    int a = 10;//�ֲ�����(�ֲ�����)
//
//    return 0;
//}



//int main()
//{
//	int a=20;
//	int b=10;
//	printf("%d\n",a+b);
//	scanf("%d %d", &a, &b);
//	printf("%d\n",a+b);
//	return 0;
//}





//int b = 0;//ȫ�ֱ��������ں�����ʹ��
//int main()
//{
//    {
//        int a = 10;//�ֲ�����ֻ���ڴ�������ʹ��
//    }
//    return 0;
//}



//extern int x;
//int main()
//{
//	printf("%d\n", x);
//	return 0;
//}




//int main()
//{
	//printf("\?\n");
	//printf("\'\n");
	//printf("\?\n");
	//printf("%c\n",'\'');
	//printf("%s", "123");
	//printf("%s", "12\t3");
	//printf("\a\a");//���к󷢳�����
	//printf("%s\n","\101\123\145\222");
//	printf("%d\n",'\x47');
//	printf("%c\n",'\x47');
//	return 0;
////}
//
//
//int main()
//{
//	int input;
//	printf("��Ҫ�ú�ѧϰ��");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�����Ǻú���");
//	}
//	else
//	{
//		printf("����ȥ������");
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	while (x < 100)
//	{
//		printf("��������%d\n", x);
//	     x++;
//	}
//	if (x == 100)
//	{
//		printf("�������");
//	}
//	return 0;
//}

//int add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{    
//	int sum1=0, sum2=0;
//	scanf("%d %d", sum1, sum2);  
//	add(sum1, sum2);
//	printf("%d", add(sum1,sum2));
//    
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~��λȡ��   �����Բ�����ʽ����
//                      //������ԭ�뷴�벹����ͬ
//
//	return 0;
//}
//
//
//
 
//
//int main()
//{
//	int b = 0;
//	int a = 2;
//	printf("%d\n",a||b);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 7;
//	int x = 0;
//	x = a > b ? a : b;
//	printf("%d\n",x);
//
//
//	return 0;
//}

//#define add(x, y) ((x)+(y))//�궨��
//int main()
//{
//	printf("%d\n", 2*add(2, 3));
//
//
//	return 0;
//}
//
// 
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", *pa);
//
//
//	return 0;
//}




//struct stu
//{
//	char name[20];
//	int age;
//	double grade;
//
//
//};
//
//int main()
//{
//	struct stu a = { "������",20,99.9 };
//	printf("%s %d %lf\n", a.name, a.age, a.grade);
//	struct stu* pa = &a;
//	printf("%s %d %lf\n", (*pa).name, (*pa).age, (*pa).grade);
//	printf("%s %d %lf\n", pa->name, pa->age, pa->grade);
//	return 0;
//}

//int main()
//{  
//	int  IQ;
//	scanf("%d", &IQ);
//	if (IQ < 50)
//		printf("���Ǹ��Բ�");
//	else if (IQ >= 50 && IQ < 100)
//		printf("���Ǹ�������");
//	else if (IQ >= 100 && IQ < 150)
//		printf("�����е������");
//	else if (IQ >= 150 && IQ < 200)
//		printf("���Ǹ���ѧ�ҵ���");
//	else if (IQ >= 200)
//		printf("����Բ��ڵ���������");
//
//
// 	return 
 


//100��������
//int main()
//{
//	int a;
//	for (a = 1;a <= 100; a++)
//	{
//		if (a % 2 ==1)
//		{
//			printf("%d\n",a);
//		}
//
//
//	}
//	return 0;
//}
 

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//				break;
//	 case 4:
//		 printf("������");
//		 break;
//	 case 5:
//		 printf("������");
//		 break;
//	 case 6:
//		 printf("������");
//		 break;
//	 case 7:
//		 printf("������");
//		 break;
//	 default:
//		 printf("����ɵ����");
//		 break;
//
//	}
//
//		 return 0;
//}
//
////int main()
////{
////	int a = 1;
////	while (a <= 10)
////	{
////		printf("%d\n", a);
////		a++;
////
////         
////	}
////
////	return 0;
////}

//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		printf("%c\n", a);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		putchar(a);
//	}
//
//
//	return 0;
//
//}


//
//int main()
//{
//
//	int a = 72;                                         //getchar()�Ὣ�����ַ�ת��Ϊascllֵ
//	putchar(a);
//	return 0;
//}







//��׺��
//int main()
//{
//	int a = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		a = a * i;
//		sum = sum + a;
//
//
//	}
//	printf("%d\n",sum);
//
//	return 0;
//}//       1    2   6      24      120,

//
// 
// 
//                                                        ����
//int a[] = { 1,2,3,4,5,6,7,8,9 };//����
////ҪѰ�ҵ�ֵ
//int main()
//{
//	int sz = sizeof(a) / sizeof(a[0]);
//	int l = 0, r = sz - 1, x = 0;
//	scanf("%d", &x);
//	while (r>=l)
//	{
//		int mid = (l + r) / 2;
//		if (a[mid] < x)
//		{
//			l = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			r = mid - 1;
//		}
//		else//else���治Ҫ������
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (l > r)
//	{
//		printf("������û�����ֵ");
//	}
//	return 0;
//}


                                            //���֣�2��
//int a[1000010];
//int main()
//{
//	int n, t, x;
//	scanf("%d %d", &n, &t);
//	int i;
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	while (t--)
//	{
//		
//		scanf("%d" ,&x);
//		int l=1, r=n;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (a[mid] < x)
//				l = mid + 1;
//			else
//				r = mid;
//		}
//		if (a[l] == x)
//			printf("%d", l - 1);
//		else
//			printf("-1");
//
//		l = 1, r = n;
//		while (l < r)
//		{
//			int mid = (l + r+1) / 2;
//			if (x > a[mid])
//				l = mid;
//			else
//				r = mid-1;
//		}
//		if (x == a[r])
//			printf("%d", r - 1);
//		else
//			printf("-1");
//	}
//	return 0;
//}





//int main()
//{
//	int t = 3;
//	  while (t--)//                      t�Լ�  ���ж��Ƿ�Ϊ0�ٽ�������
//	    {
//		   printf("%d\n", t);
//	     }
//
//	return 0;
//}

//int main()
//{
//	char  arr[20];//                               scanf   �ַ���   ʱ����Ҫ&
//	scanf("%s", arr);
//	printf("%s", arr);
//
//	return 0;
//}
 /*

int main()
{
	char  arr1[] = { "1232456" };
	printf("%d", sizeof(arr1));

	return 0;
}


*/





//#include <string.h>
//#include <windows.h>//����sleep��ͷ�ļ�
//int main()
//{
//	char arr1[] = {"welcome to shanxi"};
//	char arr2[] = { "#################" };
//	int l = 0;
//	int r = strlen(arr1) - 1;//                                     strlen ֻ���Բ��ַ������� sizeof������    
//	while (l <=r)                                       //          strlen Ҫ��ͷ�ļ�
//	{
//		arr2[l] = arr1[l];
//		arr2[r] = arr1[r];
//		printf("%s\n", arr2);
//		Sleep(1000);//                                         sleep ��sҪ��д
//		system("cls");
//		l += 1, r -= 1;
//	}
//
//
//	return 0;
//}
//


//void menu()
//{                                                                               //;С��Ϸ
//	printf("*********************\n");
//	printf("*****1��start********\n");
//	printf("*****2��exit*********\n");
//	printf("*********************\n");
//	printf("*********************\n");
//}
//int main()
//{
//	menu();
//	int a=0;
//	scanf("%d",&a);
//	system("cls");
//	if (a == 1)
//	{
//		int ans = 0;
//		printf("������һ������");
//		scanf("%d", &ans);
//		system("cls");
//		int x = 0;
//		scanf("%d", &x); 
//		switch ();
//
//
//
//
//
//
//
//	 }
//	else
//	{
//		printf("�˳���Ϸ");
//	}
//		return 0;
//}





//void swap(int* pa, int* pb )  //��������������
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d", b);
//
//
//
//	return 0;
//}
// 
// 
 
 
 
 


 
 
 
// 
//
//void print(unsigned int a)//              �����ݹ�
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	print(n);
//
//
//	return 0;
//}






//int my_strlen(char* arr)//                 �����ݹ�2
//{
//	if (*arr != '\0')
//	return 	1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	char arr[10];
//	scanf("%s",arr);
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = { 'z','h','a','n','g'};
//	char arr2[] = "zhang";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2); 
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//




//int main()
//{
//	int arr[5][5];
//	int a, b;
//	for (a = 0; a < 5; a++)
//	{
//		for (b = 0; b < 5; b++)
//			scanf("%d", &arr[a][b]);
//	}
//
//
//
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int x = 0; x < 5; x++)
//	{
//		int mid = 0;
//		mid = arr[m-1][x];
//		arr[m-1][x] = arr[n-1][x];
//		arr[n-1][x] = mid;
//	}
//
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void lalalal(char str[])
{
	char arr[10000];
	int i = 0, j = 0,x=0;
	while (str[i]!='\0')
	{
		if (str[i] == ' ')
		{
			x = i;
			if (str[++x] == ' ')
			{
				i++;
			}
			else
			{
				arr[j] = str[i];
			}


		}
		else
		{
			arr[j] = str[i];
			j++;
			i++;
		}
	}

	for()
}
int main() 
{
	char   str[10000];
	int i, j;
	gets(str);
	lalalal(str);
	int n = sizeof(str) / sizeof(str[0]);
	for (int x = 0; x < n; x++);
	{
		printf("%s", str);
	}
	return 0;
}