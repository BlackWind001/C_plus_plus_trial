#include "07_invariants_01.h"
#include <iostream>

//The 'invariants' is a topic that I did not understand completely and hence this file will later be modifed
void assigning_decision(bool& should_assign, Vector obj)
{
	char choice;
	std::cout<<"Should values be assigned (y/n) :  ";
	std::cin>>choice;

	if(choice=='y' || choice=='Y')
	{
		should_assign = true;
		obj.assign();
	}
	else
	{
		should_assign = false;
	}
}

int main()
{
	int size;
	bool should_assign = false;

	std::cout<<"Enter the size of the Vector : ";
	std::cin>>size;

	try
	{
		Vector obj(size, false);
		int temp_index;
		double temp_value;

		//Making a separate function over here so as to not clutter the main function with even more code.
		assigning_decision(should_assign, obj);

		while(true)
		{
			try
			{
				std::cout<<"Enter a Vector index to access its value : ";
				std::cin>>temp_index;
				temp_value = obj[temp_index];
				std::cout<<"The value is : "<<temp_value<<std::endl;
			}
			catch(std::string error)
			{
				std::cout<<error<<std::endl;
			}
			catch(...)
			{
				std::cout<<"An unexpected error occured.";
				break;
			}
		}
	}
	catch(std::length_error)
	{
		std::cout<<"Please provide valid value for the size parameter.";
	}

	return 0;
}