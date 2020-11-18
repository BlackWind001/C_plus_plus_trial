#include "07_invariants_01.h"
#include <iostream>

//The 'invariants' is a topic that I did not understand completely and hence this file will later be modifed
Vector::Vector(int sz, bool should_assign = false) : size(sz), is_assigned(should_assign)
{
	if(size<0)
	{
		throw std::length_error("Lala");
	}
	elem = new double(size);
	if(is_assigned)
	{
		assign();
	}
}

void Vector::assign()
{
	std::cout<<"Enter the values of the Vector"<<std::endl;
	for(int i = 0;i<size;i++)
	{
		std::cin>>*(elem + i);
	}
	is_assigned = true;
}

double& Vector::operator[](int i){
	std::string error;
	if(is_assigned)
	{
		if(i>=size || i<0){
			error = "Array out of bounds exception";
			throw error;
		}
		return *(elem + i);
	}
	else
	{
		std::cout<<"is_assigned : "<<is_assigned<<std::endl;
		error = "Accessing unallocated memory location is forbidden.\nPlease use the assign() function to assign values to your Vector";
		throw error;
	}
}

int Vector::get_size()
{
	return size;
}