// 在main函数用循环打印1~200的Fibonacci数列

#include <iostream>
using namespace std;

int main()
{
	int fib(int);

	int a[200];
	a[0] = a[1] = 1;
	for (int i = 2; i < 200; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < 200; i++)
	{
		cout << i + 1 << ":   ";
		cout << a[i] << endl;
	}

	//for (int i = 1; i < 200; i++)
	//{
	//	cout << i << ":   ";
	//	cout << fib(i) << endl;
	//}
}

//int fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}