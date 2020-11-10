#include <iostream>
#include "07_exceptions_01.h"

int main()
{
	int n;
	std::cout<<"Enter size : ";
	std::cin>>n;

	Vector obj(n);

	try
	{
		int index;
		while(1){
			std::cout<<"Index : ";
			std::cin>>index;
			std::cout<<"obj["<<index<<"] : "<<obj[index]<<std::endl;
		}
	}
	catch(int)
	{
		std::cout<<"Index requested lesser than the minimum value.";
	}
	catch(...)
	{
		std::cout<<"Index requested greater than the maximum value.";
	}
}