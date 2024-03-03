#include"Functions.h"

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);

	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = (rand() % (maxRand-(-minRand)) - minRand) * 1.001;
		arr[i] = (minRand + rand() % (maxRand - minRand)) * 1.001;
	}
}

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;

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
	int Summa = 0;//счетчик суммы
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	return Summa;
}

double Sum(const double arr[], const int n)
{
	double Summa = 0;//счетчик суммы
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	return Summa;
}

char Sum(const char arr[], const int n)
{
	char Summa = 0;//счетчик суммы
	for (int i = 0; i < n; i++)
	{
		Summa += arr[i];
	}
	return Summa;
}

int Sum(const int arr[][n], const int n)
{
	int Summa = 0;//счетчик суммы
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
	double Summa = 0;//счетчик суммы
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
	char Summa = 0;//счетчик суммы
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
	return Sum(arr, n) / n;
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
	return Sum(arr, n) / n;
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
	int Min = arr[0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < Min)Min = arr[i];
	}
	return Min;
}

double minValueIn(const double arr[], const int n)
{
	double Min = arr[0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < Min)Min = arr[i];
	}
	return Min;
}

char minValueIn(const char arr[], const int n)
{
	char Min = arr[0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < Min)Min = arr[i];
	}
	return Min;
}

int minValueIn(const int arr[][n], const int n)
{
	int Min = arr[0][0]; //счетчик мин
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
	double Min = arr[0][0]; //счетчик мин
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
	char Min = arr[0][0]; //счетчик мин
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
	int Max = arr[0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > Max)Max = arr[i];
	}
	return Max;
}

double maxValueIn(const double arr[], const int n)
{
	double Max = arr[0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > Max)Max = arr[i];
	}
	return Max;
}

char maxValueIn(const char arr[], const int n)
{
	char Max = arr[0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > Max)Max = arr[i];
	}
	return Max;
}

int maxValueIn(const int arr[][n], const int n)
{
	int Max = arr[0][0]; //счетчик мин
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
	double Max = arr[0][0]; //счетчик мин
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
	char Max = arr[0][0]; //счетчик мин
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > Max)Max = arr[i][j];
		}
	}
	return Max;
}