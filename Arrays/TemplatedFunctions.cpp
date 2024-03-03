#include"Functions.h"

template<typename T>void ShiftLeft(T Arr[], const int n, const int Shift)
{
	for (int i = 0; i < Shift; i++)
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
void ShiftRight(T Arr[], const int n, const int Shift)
{
	for (int i = 0; i < Shift; i++)
	{
		T FirstElement = Arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			Arr[j] = Arr[j - 1];
		}
		Arr[0] = FirstElement;//������ ������ ������� � ����� �����

	}
}

template<typename T>
void ShiftLeft(T Arr[][n], const int n, const int Shift)
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
void ShiftRight(T Arr[][n], const int n, const int Shift)
{
	for (int k = 0; k < Shift; k++)
	{
		T FirstElement = Arr[n - 1][n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			for (int j = n - 1; j >= 0; j--)
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
			for (int j = 0; j < n - 1; j++)
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
			T FirstElement = Arr[i][n - 1];
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
	for (int i = 0; i < n; i++)//������ �������� 
	{
		for (int j = 0; j < n - 1; j++)//����� ������������ �������� 
		{
			int IndexMin = j;
			for (int k = j + 1; k < n; k++)
			{
				if (arr[i][k] < arr[i][IndexMin])IndexMin = k;
			}
			T temp = arr[i][j];
			arr[i][j] = arr[i][IndexMin];
			arr[i][IndexMin] = temp;
		}

	}

}