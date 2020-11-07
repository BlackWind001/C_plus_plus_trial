# Separate Compilation

C++ supports a concept where the user code sees only the declarations of the types and functions used. The actual implementation of these types and functions are present in separate source files and are compiled separately.

Such separation is used to minimize compilation times and for other reasons too. For more information read 2.4.1 (Page 52).

Most libraries are a often separately compiled.

## Implementation of separate compilation

As mentioned before, in separate compilation, the user of a separately compiled code sees only the declaration of the functions, classes etc. and not the actual definition of these elements.

So, according to that logic, we will need 3 files:

1.  A library declaration file

2.  A  definition file which contains the code for all the elements defined in the 1st file

3.  A user file which implements the 1st file's elements



### Library Declaration File

This is a ".h" file that will be imported by both the *definition file* and the *user file*.

It contains the declar

The import statement to import this file will look like:

```cpp
#include "declaration_file.h";
```

An example declaration file would be as follows:

```cpp
//declaration_file.h
class Example{
private:
    int operand1, operand2;
public:
    Example(int i, int j);
    double sum();
};
```

### Library Definition File

The definition file as the name suggests contains the definitions of all the elements declared in the *declaration file*.

In order for it to define the elements in the *declaration file*, the definition file needs to **import** the *declaration file*.

The following is an example of a definition file extending the previous example.

```cpp
//definition_file.cpp
#include "declaration_file.h";
#include <iostream>

Example::Example(int i = 0, int j = 0) : operand1(i), operand2(j)
{
    std::cout<<"Initialization done";
}
double Example::sum(){
    return operand1 + operand2;
}
```

### User file

This is the file that the user who wants to implement the elements defined in the *definition file* will create. He will import the *definition file* and **not the *declaration file***.

The following is an example user file implementing the above examples.

```cpp
//user_file.cpp
#include "declaration_file.h";

int main(){
    Example obj(3,4);
    std::cout<<"Sum : "<<obj.sum()<<std::endl;
}
```

## Running Separately Compiled Files

The thing about separately compiled files is that they need to be compiled before-hand. However, I do not have much idea as of to how to do this on large scale files. But to run the above example, you just need to compile the *definition file* and the *declaration file* at once as follows:

```bash
g++ definition_file.cpp user_file.cpp
```

This information about running separately compiled files was acquired from:

[Separate Compilation](http://www.eeng.dcu.ie/~ee553/ee402notes/html/ch03s14.html)

Refer it - maybe it has more content.

Also, this is probably where I might be able to use **MAKE files**. Then, I can compile all the files at once and when the user sends his *user file* as an argument, I can compile it with the rest of the files.
