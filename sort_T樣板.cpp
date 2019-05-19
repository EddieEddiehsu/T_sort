#include <iostream>
using namespace std;
template<typename T>
void notsort( T list[], int listSize)
{
	cout << "From: ";
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i];
		if (i != listSize - 1)
			cout << ",";
		if (i == listSize - 1)
			cout << " ";
	}
	cout << endl;
}
template<typename T>
void InsertionSort(T list[], int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		T currentMin=list[i];
		int currentMinIndex = i;
		for (int j = i + 1; j < listSize; j++)
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
	}
}
template<typename T>
void BinarySearch(T list[], int listSize, T n)
{
	cout << n << " at ";
	int j=0;
	for (int i = 0; i < listSize; i++)
	{
		if (list[i] == n)
		{
			cout << i << endl;
			j = 1;
		}
	}
	if (j == 0)
		cout << -1 << endl;
}
template<typename T>
void printArray( T list[], int listSize)
{
	cout << "To: ";
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i];
		if(i!=listSize-1)
			cout << ",";
		if (i == listSize - 1)
			cout << " ";
	}
	cout << endl;
}
int main()
{
	int x, y, z;
	double a, b, c;
	cin >> x >> y >> z >> a >> b >> c;
	int list1[] = { 1,5,6,2,3,7,9,8,4 };
	notsort(list1, 9);
	InsertionSort(list1, 9);
	printArray(list1, 9);
	BinarySearch(list1,9,x);
	BinarySearch(list1,9,y);
	BinarySearch(list1,9,z);
	cout << endl;
	double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
	notsort(list2, 9);
	InsertionSort(list2, 9);
	printArray(list2, 9);
	BinarySearch(list2, 9, a);
	BinarySearch(list2, 9, b);
	BinarySearch(list2, 9, c);
	system("pause");
	return 0;
}