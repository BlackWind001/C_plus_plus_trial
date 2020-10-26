#include <iostream>
struct Custom_Vector{
    int size;
    double* array;
};
void Custom_Vector_init(Custom_Vector& ref_v, int size){
    ref_v.size = size;
    double* arr = new double [size];
    ref_v.array = arr;
}
void assign(Custom_Vector& ref_v){
    int size = ref_v.size;
    auto arr_pointer = ref_v.array;
    double temp;
    while(size>0){
        std::cin>>temp;
        *(arr_pointer + (size-1) ) = temp;
        size--;
    }
}
double find_sum(Custom_Vector v){
    auto size = v.size;
    auto array = v.array;
    double sum = 0;

    while(size > 0){
        sum = sum + *(array + (size - 1) );
        size--;
    }

    return sum;
}
int main(){
    int size = 2;
    //Take size input here if necessary
    std::cout<<"Enter size value here : ";
    std::cin>>size;
    //Initializing the Custom_Vector
    Custom_Vector v;
    Custom_Vector_init(v, size);
    //Assigning values
    std::cout<<"Enter values"<<std::endl;
    assign(v);    
    //Calculating sum
    std::cout<<"The sum is : "<<find_sum(v)<<std::endl;
    return 0;
}