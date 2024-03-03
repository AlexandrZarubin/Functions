#include"Functions.h"
#include"TemplatedFunctions.cpp"


void main()
{
	//srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int arr[n];
	double arrD[n]{};
	char arrCh[n]{};
	FillRand(arr, n);//Заполнение int
	FillRand(arrD, n);//Заполнение double
	FillRand(arrCh, n);//Заполнение char
	Print(arr, n);
	cout <<"Сумма массива int: "<< Sum(arr, n) << endl;
	cout << "среднее-арифметическое int: " << Avg(arr, n) << endl;
	cout << "минимальное  значение из массива int: " << minValueIn(arr, n) << endl;
	cout << "максимальное  значение из массива int: " << maxValueIn(arr, n) << endl;
	cout << "Сдвиг в влево "; ShiftLeft(arr, n);
	Print(arr, n);
	cout << "Сдвиг в право "; ShiftRight(arr, n);
	Print(arr, n);
	SortSample(arr, n);
	cout << "Sort\t\t"; Print(arr, n);
	cout << endl;
	Print(arrD, n);
	cout << "Сумма массива double: " << Sum(arrD, n) << endl;
	cout << "среднее-арифметическое double: " << Avg(arrD, n) << endl;
	cout << "минимальное  значение из массива double: " << minValueIn(arrD, n) << endl;
	cout << "максимальное  значение из массива double: " << maxValueIn(arrD, n) << endl;
	cout << "Сдвиг в влево "; ShiftLeft(arrD, n);
	Print(arrD, n);
	cout << "Сдвиг в право "; ShiftRight(arrD, n);
	Print(arrD, n);
	cout << endl;
	Print(arrCh, n);
	cout << "Сумма массива char: " << Sum(arrCh, n) << endl;
	cout << "среднее-арифметическое char: " << Avg(arrCh, n) << endl;
	cout << "минимальное  значение из массива char: " << minValueIn(arrCh, n) << endl;
	cout << "максимальное  значение из массива char: " << maxValueIn(arrCh, n) << endl;
	cout << "Сдвиг в влево "; ShiftLeft(arrCh, n);
	Print(arrCh, n);
	cout << "Сдвиг в право "; ShiftRight(arrCh, n);
	Print(arrCh, n);
	cout << endl<<endl;
	cout << "--------------------------------------------------\n";
	cout << "Двумерный массив\n";
	//2dArray
	int TwoArr[n][n]{};
	double TwoArrD[n][n]{};
	char TwoArrCh[n][n]{};

	FillRand(TwoArr, n);
	FillRand(TwoArrD, n);
	FillRand(TwoArrCh, n);

	Print(TwoArr, n);
	cout << "Сдвиг в влево\n"; ShiftLeft(TwoArr, n);
	Print(TwoArr, n);
	cout << "Сдвиг в право\n"; ShiftRight(TwoArr, n);
	Print(TwoArr, n);
	cout << "Построчно\n";
	//Print(TwoArr, n);
	cout << "Сдвиг в влево\n"; ShiftLeftLine(TwoArr, n);
	Print(TwoArr, n);
	cout << "Сдвиг в право\n"; ShiftRightLine(TwoArr, n);
	Print(TwoArr, n);
	cout << "сортировка\n"; SortSample(TwoArr, n);
	Print(TwoArr, n);
	cout << "Сумма массива int: " << Sum(TwoArr, n) << endl;
	cout << "среднее-арифметическое int: " << Avg(TwoArr, n) << endl;
	cout << "минимальное  значение из массива int: " << minValueIn(TwoArr, n) << endl;
	cout << "максимальное  значение из массива int: " << maxValueIn(TwoArr, n) << endl;
	cout << endl;
	Print(TwoArrD, n);
	cout << "Сумма массива double: " << Sum(TwoArrD, n) << endl;
	cout << "среднее-арифметическое double: " << Avg(TwoArrD, n) << endl;
	cout << "минимальное  значение из массива double: " << minValueIn(TwoArrD, n) << endl;
	cout << "максимальное  значение из массива double: " << maxValueIn(TwoArrD, n) << endl;
	cout << endl;
	Print(TwoArrCh, n);
	cout << "Сумма массива char: " << Sum(TwoArrCh, n) << endl;
	cout << "среднее-арифметическое char: " << Avg(TwoArrCh, n) << endl;
	cout << "минимальное  значение из массива char: " << minValueIn(TwoArrCh, n) << endl;
	cout << "максимальное  значение из массива char: " << maxValueIn(TwoArrCh, n) << endl;
	
	
}






