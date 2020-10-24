#include <iostream>
int main(){
    char character_variable = '\0';
    char character_array[] = {'a','1','f','6','c','5'};
    char *character_pointer = &character_variable;
    std::cout<<"The character variable is : "<<*character_pointer<<std::endl;
    std::cout<<"The characters in the array character_array are :"<<std::endl;
    for(auto c : character_array){
        std::cout<<""<<c<<std::endl;
    }
    std::cout<<"The character array will now be changed"<<std::endl;
    char character_array_2[] = {'a','b','c'};
    character_pointer = character_array_2;
    character_pointer++;
    std::cout<<"The 2nd character in the array is : "<<*character_pointer<<std::endl;
    return 0;
}