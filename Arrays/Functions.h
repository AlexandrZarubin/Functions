#pragma once
#include<iostream>

const int n = 5;

using namespace std;
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);//���������� int
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//���������� double
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);//���������� cahr

//2dArray
void FillRand(int arr[][n], const int n, int minRand = 0, int maxRand = 100);//���������� int
void FillRand(double arr[][n], const int n, int minRand = 0, int maxRand = 100);//���������� double
void FillRand(char arr[][n], const int n, int minRand = 0, int maxRand = 100);//���������� cahr


void Print(const int arr[], const int n);		//����� int
void Print(const double arr[], const int n);	//������ double
void Print(const char arr[], const int n);		//����� char

//2dArray
void Print(const int arr[][n], const int n);		//����� int
void Print(const double arr[][n], const int n);	//������ double
void Print(const char arr[][n], const int n);		//����� char

int Sum(const int arr[], const int n);			//����� int
double Sum(const double arr[], const int n);	//����� double
char Sum(const char arr[], const int n);		//����� char

//2dArray
int Sum(const int arr[][n], const int n);			//����� int
double Sum(const double arr[][n], const int n);	//����� double
char Sum(const char arr[][n], const int n);		//����� char


int Avg(const int arr[], const int n);			//�������-�������������� int
double Avg(const double arr[], const int n);	//�������-�������������� double
char Avg(const char arr[], const int n);		//�������-�������������� char

//2dArray
int Avg(const int arr[][n], const int n);			//�������-�������������� int
double Avg(const double arr[][n], const int n);	//�������-�������������� double
char Avg(const char arr[][n], const int n);		//�������-�������������� char

int minValueIn(const int arr[], const int n);			//���������� ����������� int
double minValueIn(const double arr[], const int n);		//���������� ����������� double
char minValueIn(const char arr[], const int n);			//���������� ����������� char

//2dArray
int minValueIn(const int arr[][n], const int n);			//���������� ����������� int
double minValueIn(const double arr[][n], const int n);		//���������� ����������� double
char minValueIn(const char arr[][n], const int n);			//���������� ����������� char

int maxValueIn(const int arr[], const int n);			//���������� ������������ int
double maxValueIn(const double arr[], const int n);		//���������� ������������ double
char maxValueIn(const char arr[], const int n);			//���������� ������������ char

//2dArray
int maxValueIn(const int arr[][n], const int n);			//���������� ������������ int
double maxValueIn(const double arr[][n], const int n);		//���������� ������������ double
char maxValueIn(const char arr[][n], const int n);			//���������� ������������ char

template <typename T> void ShiftLeft(T Arr[], const int n, const int Shift = 1); //������ ���������� ������ ������ �� �������� ����� ��������� �����
template <typename T> void ShiftRight(T Arr[], const int n, const int Shift = 1);

//2dArray
template <typename T> void ShiftLeft(T Arr[][n], const int n, const int Shift = 1); //������ ���������� ������ ������ �� �������� ����� ��������� �����
template <typename T> void ShiftRight(T Arr[][n], const int n, const int Shift = 1);
template <typename T> void ShiftLeftLine(T Arr[][n], const int n, const int Shift = 1); //������ ���������� ������ ������ �� �������� ����� ��������� �����
template <typename T> void ShiftRightLine(T Arr[][n], const int n, const int Shift = 1);


template <typename T>void SortSample(T arr[], const int n);			//���������� �������  int		Shell

//2dArray
template <typename T>void SortSample(T arr[][n], const int n);			//���������� �������  int