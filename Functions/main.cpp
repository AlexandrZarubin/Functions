#include<iostream>

using namespace std;
int Sum(int a, int b);
int Diff(int a, int b);
int Prode(int a, int b);
double Quot(int a, int b);
template<typename T>T Power(T Base, int Degree);//возводит число в степень
void main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c=Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;

	cout << a << " - " << b << " = " << Diff(a,b) << endl;

	cout << a << " * " << b << " = " << Prode(a, b) << endl;

	cout << a << " / " << b << " = " << Quot(a, b) << endl;

	cout<<a<<" ^ "<<b<<" = "<<Power(a,b)<<endl;
}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prode(int a, int b)
{
	return a * b;
}

double Quot(int a, int b)
{
	return (double)a / b;
}

template<typename T>T Power(T Base, int Degree)
{
	if (Degree == 0)return 1;//Ћюбое число в степени 0 равно 1
	T Result = 1;
	for (int i = 0; i < Degree; i++)
	{
		Result *= Base;
	}
	return Result;
}
