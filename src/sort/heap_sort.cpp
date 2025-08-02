#include "sorts.hpp"

static int Parent(int i)
{
	return (i - 1 ) / 2;
}

static int Right(int i)
{
	return 2 * i + 2;
}

static int Left(int i)
{
	return 2 * i + 1;
}

static void Heapify(std::vector<int> &arr, int size, int i)
{
	int left = Left(i);
	int right = Right(i);
	int largest = i;

	if (left < size && arr[left] > arr[largest])
		largest = left;
	if (right < size && arr[right] > arr[largest])
		largest = right;
	
	if (largest != i)
	{
		std::swap(arr[i], arr[largest]);
		Heapify(arr, size, largest);
	}
}

static void buildHeap(std::vector<int> &arr)
{
	int n = arr.size();
	for (int i = n / 2 - 1; i >= 0; i--)
		Heapify(arr, n, i);
}

void Sorts::heapSort(std::vector<int> &arr)
{
	buildHeap(arr);
	for (int i = arr.size() - 1; i > 0; --i)
	{
		std::swap(arr[0], arr[i]);
		Heapify(arr, i, 0);
	}
}