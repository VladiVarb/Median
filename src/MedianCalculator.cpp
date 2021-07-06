#include "MedianCalculator.h"
#include  <time.h>
MedianCalculator::MedianCalculator() { srand(time(0)); };
MedianCalculator::~MedianCalculator() {};

int MedianCalculator::partition(std::deque<int> &arr, int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1);  

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;    
			std::swap(arr[i], arr[j]);
		}
	}
	std::swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void MedianCalculator::quickSort(std::deque<int> &arr, int low, int high)
{
	if (low < high)
	{
		int pivot = partition(arr, low, high);
		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}
}

float MedianCalculator::findMedian(std::deque<int> &a, int left, int &prevMed)
{
	bool aIsEven = a.size() % 2 == 0 ? true : false;
	int k = a.size() / 2;
	int right = a.size() - 1;
	while (left <= right) 
	{
		int pivotIndex = partition(a, left, right);
		if (pivotIndex == k)
		{
			float median;
			if (aIsEven)
			{
				median = (float)(a[pivotIndex] + prevMed) / 2.f;
			}
			else
			{
				median = a[pivotIndex];
				prevMed = median;
			}

			return median;
		}

		else if (pivotIndex > k - 1)
			right = pivotIndex - 1;

		else
			left = pivotIndex + 1;
	}
	return -1;
}
