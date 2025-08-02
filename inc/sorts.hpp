#pragma once

#include <iostream>
#include <vector>

namespace Sorts
{

	// sorts
	void insertionSort(std::vector<int> &arr);
	void mergeSort(std::vector<int> &arr, int left, int right);
	void heapSort(std::vector<int> &arr);
	void quickSort(std::vector<int> &arr, int p, int r);
	
	// priority queue
	int heapExtractMax(std::vector<int> &arr);
	void heapInsert(std::vector<int> &arr, int val);

	// utils
	void isSorted(const std::vector<int> &arr);
	void printInput(const std::vector<int> &arr);

};