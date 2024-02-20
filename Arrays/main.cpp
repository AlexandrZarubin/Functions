#include<iostream>
//#include<time.h>
//
//
const int n = 5;
//
//
using namespace std;
void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);//���������� int
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

template <typename T> void ShiftLeft(T Arr[], const int n,const int Shift=1); //������ ���������� ������ ������ �� �������� ����� ��������� �����
template <typename T> void ShiftRight(T Arr[], const int n,const int Shift = 1);

//2dArray
template <typename T> void ShiftLeft(T Arr[][n], const int n,const int Shift = 1); //������ ���������� ������ ������ �� �������� ����� ��������� �����
template <typename T> void ShiftRight(T Arr[][n], const int n,const int Shift = 1);
template <typename T> void ShiftLeftLine(T Arr[][n], const int n, const int Shift = 1); //������ ���������� ������ ������ �� �������� ����� ��������� �����
template <typename T> void ShiftRightLine(T Arr[][n], const int n, const int Shift = 1);


template <typename T>void SortSample(T arr[], const int n);			//���������� �������  int		Shell

//2dArray
template <typename T>void SortSample(T arr[][n], const int n);			//���������� �������  int


void main()
{
	//srand(time(NULL));
	setlocale(LC_ALL, "rus");
	
	int arr[n];
	double arrD[n]{};
	char arrCh[n]{};
	FillRand(arr, n);//���������� int
	FillRand(arrD, n);//���������� double
	FillRand(arrCh, n);//���������� char
	Print(arr, n);
	cout <<"����� ������� int: "<< Sum(arr, n) << endl;
	cout << "�������-�������������� int: " << Avg(arr, n) << endl;
	cout << "�����������  �������� �� ������� int: " << minValueIn(arr, n) << endl;
	cout << "������������  �������� �� ������� int: " << maxValueIn(arr, n) << endl;
	cout << "����� � ����� "; ShiftLeft(arr, n);
	Print(arr, n);
	cout << "����� � ����� "; ShiftRight(arr, n);
	Print(arr, n);
	SortSample(arr, n);
	cout << "Sort\t\t"; Print(arr, n);
	cout << endl;
	Print(arrD, n);
	cout << "����� ������� double: " << Sum(arrD, n) << endl;
	cout << "�������-�������������� double: " << Avg(arrD, n) << endl;
	cout << "�����������  �������� �� ������� double: " << minValueIn(arrD, n) << endl;
	cout << "������������  �������� �� ������� double: " << maxValueIn(arrD, n) << endl;
	cout << "����� � ����� "; ShiftLeft(arrD, n);
	Print(arrD, n);
	cout << "����� � ����� "; ShiftRight(arrD, n);
	Print(arrD, n);
	cout << endl;
	Print(arrCh, n);
	cout << "����� ������� char: " << Sum(arrCh, n) << endl;
	cout << "�������-�������������� char: " << Avg(arrCh, n) << endl;
	cout << "�����������  �������� �� ������� char: " << minValueIn(arrCh, n) << endl;
	cout << "������������  �������� �� ������� char: " << maxValueIn(arrCh, n) << endl;
	cout << "����� � ����� "; ShiftLeft(arrCh, n);
	Print(arrCh, n);
	cout << "����� � ����� "; ShiftRight(arrCh, n);
	Print(arrCh, n);
	cout << endl<<endl;
	cout << "--------------------------------------------------\n";
	cout << "��������� ������\n";
	//2dArray
	int TwoArr[n][n]{};
	double TwoArrD[n][n]{};
	char TwoArrCh[n][n]{};

	FillRand(TwoArr, n);
	FillRand(TwoArrD, n);
	FillRand(TwoArrCh, n);

	Print(TwoArr, n);
	cout << "����� � �����\n"; ShiftLeft(TwoArr, n);
	Print(TwoArr, n);
	cout << "����� � �����\n"; ShiftRight(TwoArr, n);
	Print(TwoArr, n);
	cout << "���������\n";
	//Print(TwoArr, n);
	cout << "����� � �����\n"; ShiftLeftLine(TwoArr, n);
	Print(TwoArr, n);
	cout << "����� � �����\n"; ShiftRightLine(TwoArr, n);
	Print(TwoArr, n);
	cout << "����� ������� int: " << Sum(TwoArr, n) << endl;
	cout << "�������-�������������� int: " << Avg(TwoArr, n) << endl;
	cout << "�����������  �������� �� ������� int: " << minValueIn(TwoArr, n) << endl;
	cout << "������������  �������� �� ������� int: " << maxValueIn(TwoArr, n) << endl;
	cout << endl;
	Print(TwoArrD, n);
	cout << "����� ������� double: " << Sum(TwoArrD, n) << endl;
	cout << "�������-�������������� double: " << Avg(TwoArrD, n) << endl;
	cout << "�����������  �������� �� ������� double: " << minValueIn(TwoArrD, n) << endl;
	cout << "������������  �������� �� ������� double: " << maxValueIn(TwoArrD, n) << endl;
	cout << endl;
	Print(TwoArrCh, n);
	cout << "����� ������� char: " << Sum(TwoArrCh, n) << endl;
	cout << "�������-�������������� char: " << Avg(TwoArrCh, n) << endl;
	cout << "�����������  �������� �� ������� char: " << minValueIn(TwoArrCh, n) << endl;
	cout << "������������  �������� �� ������� char: " << maxValueIn(TwoArrCh, n) << endl;
	
	
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand-minRand);

	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = (rand() % (maxRand-(-minRand)) - minRand) * 1.001;
		arr[i] = (minRand + rand() % (maxRand - minRand))*1.001;
	}
}

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] =  rand() %256;

	}
}

void FillRand(int arr[][n], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = minRand + rand() % (maxRand - minRand);
		}
	}

}

void FillRand(double arr[][n], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = (minRand + rand() % (maxRand - minRand)) * 1.001;
		}
	}
}

void FillRand(char arr[][n], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 256;
		}
	}
}

void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}

void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}

void Print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}

void Print(const int arr[][n], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
}

void Print(const double arr[][n], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
}

void Print(const char arr[][n], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
}

int Sum(const int arr[], const int n)
{
	int Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	return Summa;
}

double Sum(const double arr[], const int n)
{
	double Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	return Summa;
}

char Sum(const char arr[], const int n)
{
	char Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	return Summa;
}

int Sum(const int arr[][n], const int n)
{
	int Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Summa += arr[i][j];
		}
	}
	return Summa;
}

double Sum(const double arr[][n], const int n)
{
	double Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Summa += arr[i][j];
		}
	}
	return Summa;
}

char Sum(const char arr[][n], const int n)
{
	char Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Summa += arr[i][j];
		}
	}
	return Summa;
}

int Avg(const int arr[], const int n)
{
	return Sum(arr, n) /n;
}

double Avg(const double arr[], const int n)
{
	return Sum(arr, n) / n;
}

char Avg(const char arr[], const int n)
{
	return Sum(arr, n) / n;
}

int Avg(const int arr[][n], const int n)
{
	return Sum(arr, n)/n;
}

double Avg(const double arr[][n], const int n)
{
	return Sum(arr, n) / n;
}

char Avg(const char arr[][n], const int n)
{
	return Sum(arr, n) / n;
}

int minValueIn(const int arr[], const int n)
{
	int Min = arr[0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		
		if (arr[i] < Min)Min = arr[i];
	}
	return Min;
}

double minValueIn(const double arr[], const int n)
{
	double Min = arr[0]; //������� ���
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < Min)Min = arr[i];
	}
	return Min;
}

char minValueIn(const char arr[], const int n)
{
	char Min = arr[0]; //������� ���
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < Min)Min = arr[i];
	}
	return Min;
}

int minValueIn(const int arr[][n], const int n)
{
	int Min = arr[0][0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < Min)Min = arr[i][j];
		}
	}
	return Min;
}

double minValueIn(const double arr[][n], const int n)
{
	double Min = arr[0][0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < Min)Min = arr[i][j];
		}
	}
	return Min;
}

char minValueIn(const char arr[][n], const int n)
{
	char Min = arr[0][0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < Min)Min = arr[i][j];
		}
	}
	return Min;
}

int maxValueIn(const int arr[], const int n)
{
	int Max = arr[0]; //������� ���
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > Max)Max = arr[i];
	}
	return Max;
}

double maxValueIn(const double arr[], const int n)
{
	double Max = arr[0]; //������� ���
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > Max)Max = arr[i];
	}
	return Max;
}

char maxValueIn(const char arr[], const int n)
{
	char Max = arr[0]; //������� ���
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > Max)Max = arr[i];
	}
	return Max;
}

int maxValueIn(const int arr[][n], const int n)
{
	int Max = arr[0][0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > Max)Max = arr[i][j];
		}
	}
	return Max;
}

double maxValueIn(const double arr[][n], const int n)
{
	double Max = arr[0][0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > Max)Max = arr[i][j];
		}
	}
	return Max;
}

char maxValueIn(const char arr[][n], const int n)
{
	char Max = arr[0][0]; //������� ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > Max)Max = arr[i][j];
		}
	}
	return Max;
}



template<typename T>void ShiftLeft(T Arr[], const int n,const int Shift)
{
	for(int i=0;i<Shift;i++)
	{
		T FirstElement = Arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			Arr[j] = Arr[j + 1];
		}
		Arr[n - 1] = FirstElement;//������ ������ ������� � ����� �����
		
	}
	//return 0;
}

template<typename T>
void ShiftRight(T Arr[], const int n,const int Shift)
{
	for (int i = 0; i < Shift; i++)
	{
		T FirstElement = Arr[n-1];
		for (int j = n-1; j > 0; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[0] = FirstElement;//������ ������ ������� � ����� �����

	}
}

template<typename T>
void ShiftLeft(T Arr[][n], const int n,const int Shift)
{
	for (int k = 0; k < Shift; k++)
	{
	T FirstElement = Arr[0][0];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{   
				Arr[i][j] = Arr[i][j + 1];
			}
		}
	Arr[n - 1][n - 1] = FirstElement;
	}
}

template<typename T>
void ShiftRight(T Arr[][n], const int n,const int Shift)
{
	for (int k = 0; k < Shift; k++)
	{
		T FirstElement = Arr[n-1][n-1];
		for (int i = n-1; i >=0; i--)
		{
			for (int j = n-1; j >= 0; j--)
			{
				Arr[i][j] = Arr[i][j - 1];
			}
		}
		Arr[0][0] = FirstElement;
	}


}

template<typename T>
void ShiftLeftLine(T Arr[][n], const int n, const int Shift)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < Shift; k++)
		{
		T FirstElement = Arr[i][0];
			for (int j = 0; j < n-1; j++)
			{
			Arr[i][j] = Arr[i][j + 1];
			}
			Arr[i][n - 1] = FirstElement;
		}
		
	}
}

template<typename T>
void ShiftRightLine(T Arr[][n], const int n, const int Shift)
{
for (int i = n - 1; i >= 0; i--)
	{
		for (int k = 0; k < Shift; k++)
		{
			T FirstElement = Arr[i][n-1];
			for (int j = n - 1; j >= 0; j--)
			{
				Arr[i][j] = Arr[i][j - 1];
			}
			Arr[i][0] = FirstElement;
		}
	}
}

template<typename T>
void SortSample(T arr[], const int n)
{
	for (int i = 0; i < n - 1; i++)//������ �������� 
	{
		int IndexMin = i;
		for (int j = i + 1; j < n; j++)//����� ������������ �������� 
		{
			if (arr[j] < arr[IndexMin])IndexMin = j;
		}
		if (IndexMin != i)
		{
			int temp = arr[i];
			arr[i] = arr[IndexMin];
			arr[IndexMin] = temp;
		}
	}
}

template<typename T>
void SortSample(T arr[][n], const int n)
{

}
