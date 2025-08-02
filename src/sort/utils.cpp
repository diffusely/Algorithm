#include "sorts.hpp"

void Sorts::isSorted(const std::vector<int> &arr)
{
	for (size_t i = 0; i < arr.size() - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			std::cout << "error\n";
			return ;
		}
	}
	std::cout << "is sorted!\n";
}

void Sorts::printInput(const std::vector<int> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
}
