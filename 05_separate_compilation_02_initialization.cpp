#include <iostream>
#include "05_separate_compilation_01_declaration.h"

//For more information about the following constructor syntax check the following link.
//https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
Vector::Vector(int size = 0) : sz(size)
{
	elem = new double[sz];
	std::cout<<"Enter values for the vector : \n";
	for(int i = 0; i<sz;i++){
		std::cout<<"Value "<<i<<" : ";
		std::cin>>*(elem + i);
	}
}

int Vector::get_sz()
{
	return sz;
}

double Vector::get_value_at(int i){
	return *(elem + i);
}

double Vector::get_square_of(int i){
	double value_at_i = get_value_at(i);
	return (value_at_i * value_at_i);
}

double Vector::get_sum_of_squares()
{
	double sum = 0.0;
	for(int i = 0;i < sz;i++){
		sum += get_square_of(i);
	}
	return sum;
}