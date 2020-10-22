#include <iostream>
int counter = 0;
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
bool check_if_yes(char choice){
    if(choice=='y'||choice=='Y'){
        return true;
    }
    return false;
}
int main(){    
    char c;
    bool loop_reply;
    std::cout<<"Testing with loops and conditionals\n";
    std::cout<<"Enter your choice (y/n) : ";
    std::cin>>c;
    std::cout<<check_with_message(c)<<"\n";
    std::cout<<"Enter your loop choice : ";
    std::cin>>c;
    while(loop_reply = check_if_yes(c)){
        counter++;
        std::cout<<"You said yes : "<<counter<<" times";
        std::cout<<"\nEnter your loop choice : ";
        std::cin>>c;
    }
    if(!loop_reply){
        std::cout<<"I can understand\n";
    }
    return 0;
}