#include <iostream>
int main(){
    int i;
    std::cout<<"Testing with loops\n";
    for(i=0;i<10;i++){
        std::cout<<"i : "<<i<<std::endl;
    }
    std::cout<<"\n\nNow lets go down\n";
    while(i>5){
        std::cout<<"i : "<<i--<<std::endl;
    }
    std::cout<<"\n\nWe're going down for real";
    do{
        std::cout<<"i : "<<i--<<std::endl;
    }while(i>0);
    std::cout<<"You have now been dropped off at CrazyTown!!!!\n";
    std::cout<<"Do try to enjoy your visit\n";
    for(auto j : {0,1,1,2,3,5,8,13,21,34,55}){
        std::cout<<"\n"<<j;
    }
}