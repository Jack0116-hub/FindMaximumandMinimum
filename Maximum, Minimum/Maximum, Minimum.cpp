// Maximum, Minimum.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
	// 1. Declare variables
	int n;
	int num;
	int* numbers;

	// 2. User input
	printf("How many items? n = ");
	scanf_s("%d", &n);
	numbers = (int*)malloc(n);

	for (int i = 0; i < n; i++)
	{
		printf("num%d = ", i);
		scanf_s("%d", &num);
		numbers[i] = num;
	}

	printf("\nnumber: ");
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", numbers[i]);

		else
			printf("%d, ", numbers[i]);
	}

	printf("\n\n");

	// 3. Compare numbers(Maximum, Minimum)
	int Maximum = numbers[0];
	int Minimum = numbers[0];

	for (int i = 1; i < n; i++)
	{
		if (numbers[i] > Maximum)
			Maximum = numbers[i];

		if (numbers[i] < Minimum)
			Minimum = numbers[i];
	}

	printf("Maximum: %d\n", Maximum);
	printf("Minimum: %d\n", Minimum);
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
