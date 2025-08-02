#include "sorts.hpp"

#include <iostream>
#include <vector>


int main()
{
	std::vector<int> input = {2, -3, 4, 11, -100, 20, -10, 652};



	Sorts::quickSort(input, 0, input.size() - 1);

	Sorts::printInput(input);
}