#pragma once
#include <algorithm>
#include <iostream>
#include <deque>
#include <time.h>

class MedianCalculator
{
public:
	explicit MedianCalculator();
	~MedianCalculator();
	int prevOddMedian = 0;
	std::deque<int> arr;

	int partition(std::deque<int> &arr, int low, int high);
	void quickSort(std::deque<int> &arr, int low, int high);
	float findMedian(std::deque<int> &a, int left, int &prevMed);
};