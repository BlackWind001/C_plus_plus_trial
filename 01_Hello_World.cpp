#include <iostream>
void add(int x, int y){
    std::cout<<"x : "<<x<<" y : "<<y<<"\n";    
    //The put to operator is <<
    //You are basically putting the strings into cout which is the standard output stream
    std::cout<<"x + y : "<<(x+y)<<"\n";
}
int main(){
    int var1 {123}, var2 {234};
    std::cin>>var1;
    std::cin>>var2;
    //The get from operator is >>
    // YOu are basically getting the values from the default input stream cin.
    add(var1,var2);
}