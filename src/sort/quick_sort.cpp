#include "sorts.hpp"

static int partition(std::vector<int> &arr, int p, int r)
{
	int x = arr[p];
	int i = p - 1;
	int j = r + 1;

	while (true)
	{
		do 
		{
			--j;
		} while (arr[j] > x);

		do
		{
			++i;
		} while (arr[i] < x);

		if (i < j)
			std::swap(arr[i], arr[j]);
		else return j;
	}
}

void Sorts::quickSort(std::vector<int> &arr, int p, int r)
{
	if (p < r)
	{
		int q = partition(arr, p, r);

		quickSort(arr, p, q);
		quickSort(arr, q + 1, r);
	}
}