#include <iostream>
#include "05_separate_compilation_01_declaration.h"

int main(){
	int size;

	std::cout<<"Enter the size for the vector : ";
	std::cin>>size;

	Vector vector_obj(size);

	std::cout<<"get_sz : "<<vector_obj.get_sz()<<std::endl;
	std::cout<<"get_value_at(0) : "<<vector_obj.get_value_at(0)<<std::endl;
	std::cout<<"get_square_of(1) : "<<vector_obj.get_square_of(1)<<std::endl;
	std::cout<<"get_sum_of_squares : "<<vector_obj.get_sum_of_squares()<<std::endl;
}