//There are 2 different types of enum:
// -> Strongly typed (enum classes) that can't be assigned ints
// -> Plain enums that can be assigned to ints
//We will be dealing with enum classes in this program.
#include <iostream>
enum class Fruit {APPLE, BANANA, TOMATO};
enum class Vegetable {BEANS, BRINJAL, CAPSICUM, TOMATO};
//An interesting situation here. If I didn't say "return operand = " in the below case lines, VS-Code was throwing me an error:
//'Initial value of reference to non-const must be an lvalue'
Fruit& operator++(Fruit& operand)
{
    switch(operand){
        case Fruit::APPLE: return operand = Fruit::BANANA;
        case Fruit::BANANA: return operand = Fruit::TOMATO;
        case Fruit::TOMATO: return operand = Fruit::APPLE;
        default: return operand = Fruit::APPLE;
    }
}
int main(){
    Fruit a = Fruit::APPLE;
    Vegetable b = Vegetable::CAPSICUM;
    ++a;
}