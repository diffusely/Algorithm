#include "sorts.hpp"

#include <iostream>
#include <vector>


int main()
{
	std::vector<int> input;

	Sorts::heapInsert(input, 5);
	Sorts::heapInsert(input, 15);
	Sorts::heapInsert(input, 125);
	Sorts::heapInsert(input, 12511);
	Sorts::heapInsert(input, 12533);
	Sorts::heapInsert(input, 1252);

	std::cout << Sorts::heapExtractMax(input) << "\n";
	std::cout << Sorts::heapExtractMax(input) << "\n";
	std::cout << Sorts::heapExtractMax(input) << "\n";
}