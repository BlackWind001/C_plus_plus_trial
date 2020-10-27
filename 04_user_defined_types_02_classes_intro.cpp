#include <iostream>

class Custom_Vector{
    private:
    double* elem;
    int size;
    bool isAssigned;    
    void initialize(int s){
        size = s;
        elem = new double[size];
        isAssigned = false;
    }

    public:
    Custom_Vector(int s){
        initialize(s);
    }
    Custom_Vector(int s, bool toAssign){
        initialize(s);
        if(toAssign){
            assign();
        }
    }
    void assign(){
        int i = 0;
        while(i<size){
            std::cout<<"Enter the "<<i<<"th value : ";
            std::cin>>*(elem + i++);
        }
        isAssigned = true;
    }
    double valueAt(int pos){
        if((pos > -1) && (pos < size)){
            return *(elem + pos);
        }
        return 0.000000000;
    }
    double sum(){
        int i = 0;
        double sum = 0;
        while(i<size){
            sum += *(elem + i++);
        }
        return sum;
    }
    int getSize(){
        return size;
    }
};

int main(){
    int size = 2;
    Custom_Vector obj(size);
    obj.assign();

    std::cout<<"The values in the custom vector are :"<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<obj.valueAt(i)<<std::endl;
    }
    std::cout<<"The value at unreachable position 3 is : "<<obj.valueAt(3)<<std::endl;
}