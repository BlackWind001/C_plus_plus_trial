#include <iostream>
std::string check_with_message(char x){
    switch(x){
        case 'y' : return "If I knew you would say yes, I would have proposed";
        case 'n' : return "Glad I didn't propose to you like I planned";
        default : {
            char new_x;
            std::cout<<"Wanna try again? (y/n/q)? (The q stands for quit) : ";
            std::cin>>new_x;
            if(new_x == 'q')
                //The file name says loops but I used recursion
                return "Isme tera ghata, mera kuch nahi jaata";            
            return check_with_message(new_x);
        }
    }
}
int main(){
    int x;
    char c;
    std::cout<<"Enter your choice (y/n) : ";
    std::cin>>c;
    std::cout<<check_with_message(c)<<"\n";
    return 0;
}