#include "MedianCalculator.h"

int main()
{
	MedianCalculator medianCalc{};

	medianCalc.arr = { 10, 4, 5, 8, 11, 26, 6 };
	

	std::cout << "median is :  "
		<< medianCalc.findMedian(medianCalc.arr, 0, medianCalc.prevOddMedian) <<std::endl;

	for(int i = 0; i < 10; ++i)
	{
		medianCalc.arr.push_back(rand()%100);
		std::cout << "median is :  "
		<< medianCalc.findMedian(medianCalc.arr, 0, medianCalc.prevOddMedian)<<std::endl;
	}
	
	std::cin.ignore();
	std::cin.get();
}