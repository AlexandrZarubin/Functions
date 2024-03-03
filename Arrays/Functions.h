#pragma once
#include<iostream>

const int n = 5;

using namespace std;
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);//Заполнение int
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//Заполнение double
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);//Заполнение cahr

//2dArray
void FillRand(int arr[][n], const int n, int minRand = 0, int maxRand = 100);//Заполнение int
void FillRand(double arr[][n], const int n, int minRand = 0, int maxRand = 100);//Заполнение double
void FillRand(char arr[][n], const int n, int minRand = 0, int maxRand = 100);//Заполнение cahr


void Print(const int arr[], const int n);		//Вывод int
void Print(const double arr[], const int n);	//Ввывод double
void Print(const char arr[], const int n);		//Вывод char

//2dArray
void Print(const int arr[][n], const int n);		//Вывод int
void Print(const double arr[][n], const int n);	//Ввывод double
void Print(const char arr[][n], const int n);		//Вывод char

int Sum(const int arr[], const int n);			//Сумма int
double Sum(const double arr[], const int n);	//Сумма double
char Sum(const char arr[], const int n);		//Сумма char

//2dArray
int Sum(const int arr[][n], const int n);			//Сумма int
double Sum(const double arr[][n], const int n);	//Сумма double
char Sum(const char arr[][n], const int n);		//Сумма char


int Avg(const int arr[], const int n);			//среднее-арифметическое int
double Avg(const double arr[], const int n);	//среднее-арифметическое double
char Avg(const char arr[], const int n);		//среднее-арифметическое char

//2dArray
int Avg(const int arr[][n], const int n);			//среднее-арифметическое int
double Avg(const double arr[][n], const int n);	//среднее-арифметическое double
char Avg(const char arr[][n], const int n);		//среднее-арифметическое char

int minValueIn(const int arr[], const int n);			//возвращает минимальное int
double minValueIn(const double arr[], const int n);		//возвращает минимальное double
char minValueIn(const char arr[], const int n);			//возвращает минимальное char

//2dArray
int minValueIn(const int arr[][n], const int n);			//возвращает минимальное int
double minValueIn(const double arr[][n], const int n);		//возвращает минимальное double
char minValueIn(const char arr[][n], const int n);			//возвращает минимальное char

int maxValueIn(const int arr[], const int n);			//возвращает максимальное int
double maxValueIn(const double arr[], const int n);		//возвращает максимальное double
char maxValueIn(const char arr[], const int n);			//возвращает максимальное char

//2dArray
int maxValueIn(const int arr[][n], const int n);			//возвращает максимальное int
double maxValueIn(const double arr[][n], const int n);		//возвращает максимальное double
char maxValueIn(const char arr[][n], const int n);			//возвращает максимальное char

template <typename T> void ShiftLeft(T Arr[], const int n, const int Shift = 1); //шаблон циклически сдвига массив на заданное число элементов влево
template <typename T> void ShiftRight(T Arr[], const int n, const int Shift = 1);

//2dArray
template <typename T> void ShiftLeft(T Arr[][n], const int n, const int Shift = 1); //шаблон циклически сдвига массив на заданное число элементов влево
template <typename T> void ShiftRight(T Arr[][n], const int n, const int Shift = 1);
template <typename T> void ShiftLeftLine(T Arr[][n], const int n, const int Shift = 1); //шаблон циклически сдвига массив на заданное число элементов влево
template <typename T> void ShiftRightLine(T Arr[][n], const int n, const int Shift = 1);


template <typename T>void SortSample(T arr[], const int n);			//Сортировка массива  int		Shell

//2dArray
template <typename T>void SortSample(T arr[][n], const int n);			//Сортировка массива  int