#include <iostream>
#include "06_namespaces_01.h"

//Without implementing "using"
New_namespace::Namespace_class::Namespace_class(int i = 0, int j = 0) : x(i), y(j)
{}

int New_namespace::Namespace_class::Namespace_func_add(){
	return x + y;
}

int New_namespace::Namespace_class::get_x(){
	return x;
}

int New_namespace::Namespace_class::get_y(){
	return y;
}

New_namespace::Namespace_class New_namespace::add(Namespace_class i, Namespace_class j){
	Namespace_class sum_obj(i.get_x()+ j.get_x(), i.get_y()+j.get_y());
	return sum_obj;
}

int add(int i, int j){
	return i + j;
}

int main(){
	New_namespace::Namespace_class obj1(5,5);
	New_namespace::Namespace_class obj2(11,11);
	auto obj3 = New_namespace::add(obj1, obj2);

	std::cout<<"The values of obj1 are :\n\tx : "<<obj1.get_x()<<"\n\ty : "<<obj1.get_y()<<"\n\tSum : "<<obj1.Namespace_func_add()<<std::endl;
	std::cout<<"The values of obj2 are :\n\tx : "<<obj2.get_x()<<"\n\ty : "<<obj2.get_y()<<"\n\tSum : "<<obj2.Namespace_func_add()<<std::endl;
	std::cout<<"The values of obj3 are :\n\tx : "<<obj3.get_x()<<"\n\ty : "<<obj3.get_y()<<"\n\tSum : "<<obj3.Namespace_func_add()<<std::endl;
}