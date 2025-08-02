#include "sorts.hpp"

static int Parent(int i)
{
	return (i - 1) / 2;
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

int Sorts::heapExtractMax(std::vector<int> &arr)
{
	if (arr.empty())
		throw std::runtime_error("vec is empty");

	int max = arr[0];
	arr[0] = arr[arr.size() - 1];
	arr.pop_back();
	Heapify(arr, arr.size(), 0);

	return max;
}

void Sorts::heapInsert(std::vector<int> &arr, int val)
{
	arr.push_back(val);

	int i = arr.size() - 1;
	while (i > 0 && arr[Parent(i)] < val)
	{
		arr[i] = arr[Parent(i)];
		i = Parent(i);
	}

	arr[i] = val;
}