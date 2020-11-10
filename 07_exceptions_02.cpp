#include "07_exceptions_01.h"
#include <iostream>

Vector::Vector(int sz = 0) : size(sz)
{
	elem = new double[size];
	assign();
}

void Vector::assign(){
	double temp;
	for(int i = 0;i < size; i++)
	{
		std::cout<<"Value at index "<<i<<" : ";
		std::cin>>temp;
		elem[i] = temp;
	}
}

int Vector::get_size()
{
	return size;
}

double& Vector::operator[] (int i)
{
	if(i<0){
		throw 0;
	}
	else if(i>=size){
		std::string exc = "" + std::to_string(size);
		throw exc;
	}
	return *(elem + i);
}