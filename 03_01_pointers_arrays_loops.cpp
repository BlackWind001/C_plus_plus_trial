#include <iostream>
int main(){
    std::cout<<"Testing with basic arrays\n";
    char arr[5] = {'1','2','3','4','5'};
    std::cout<<"The values in arr are: \n";
    for(auto i : arr){
        std::cout<<i<<std::endl;
    }
    char *pointer = arr;
    std::cout<<"The pointer for arr points to : "<<*pointer<<std::endl;
    std::cout<<"The value of the pointer pointing to arr is : "<<pointer<<std::endl;
}