#include <math.h>
#include <iostream>

void main()
{
	for (size_t i = 1; i <  10000000; i++)
	{
		double powNumber = pow(i, 3);
		std::cout << std::dec << i << ", ";
		std::cout << std::dec << powNumber << ", ";
		std::cout << std::hex << powNumber << std::endl;
	}
}