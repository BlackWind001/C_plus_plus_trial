//Reference variables and null pointers
#include <iostream>

int func(int *a){
    if(a==nullptr){
        std::cout<<"You got a compound sentence for an age my boy - get serious"<<std::endl;
        return 0;
    }
    while(a!=nullptr){
        std::cout<<"Value in a is : "<<*(a++)<<std::endl;
    }
    return 1;
}

int main(){
    int a[] = {1,2,3,4,56,6,7,8};
    int b[] = {};
    std::cout<<"The originnal array is : \n";
    for(auto& i: a){
        std::cout<<""<<i<<std::endl;
        i+=1;
    }
    std::cout<<"The new array is :\n";
    for(auto i : a){
        std::cout<<""<<i<<std::endl;
    }
    func(b);
    return 0;
}