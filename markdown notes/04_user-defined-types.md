---
title: "User-Defined types"
tags: ""
---

The built in types are deliberately _low-level_. This is why users can build upon these built-in types to create their own types with suitable _representations_ and _operations_.

Here are a few ways that C++ allows you to build your own types.

## Structures

_File name : 04_user_defined_types_01_structs.cpp_

Here, I create a struct named Custom_Vector. This user-defined type is an example that will be used to explain about structures.

The first thing about user-defined types is that you need the elements to be in a data-structure and here struct does just that.

Here's the declaration:

    struct Custom_Vector{    
    	int size;
    	double* array;
    }

The concept is that I will have a _double_ array of size _size_ whenever someone initializes a _Custom_Vector_ object. For this I created 2 functions :

-   **Custom_Vector_init** (used to initialize a Custom_Vector object)
-   **assign** (used to assign values to the array object in Custom_Vector)

In _Custom_Vector_init_, I use the following line to initialize the array :

    double* arr = new double [size];

This arr is then given as an rvalue to the Custom_Vector.array variable.

The **_new_** operator returns a pointer that points to the element in the first index of the array and hence, the return value can be stored inside _arr_.

Note: You can assign values to arrays using pointers in 2 ways as far as I know. Here they are.

1.  You can use the conventional : 

        ptr[i] = <value>;

    or, you can use the 2nd one.
2.  The pointer way one would be familiar with from C :

        *(ptr + i) = <alue>

_where ptr is the array pointer_

After that it is simply a case of doing whatever operations you intend to in hopefully, a readble way unlike mine.

## Classes

In C++ classes, you can access variables/ functions/ elements in general that have been declared as '_public_' while creating objectd of the class while the ones that have been declared '_private_' are accessible only within the class.

One thing to note will be that class declarations in C++ will end with a semi-colon(;) after the curly braces.

For this concept, I recreate the same user-defined type as before named Custom_Vector.
The elements defined as private are:

-       double *elem
-       int size
-       void initialize()

It might be transparent why I declared elem and size as private (since I didn't want any program to be able to access them directly - they should only be accessed through the functions I provided). But `initialize()` was declared private since, I didn't want anyone to be able to access the initializer function more than once ( during the constructor call ). But I think this may be overcome by calling the constructor again - I don't know, need to try.

Update: Checked if I can re-call the constructor on an initialized object. Apparently there are ways but doing so may lead to undefined behaviour.

I added a couple more functions in this case to give more functionality to the bare-bone vector component I'm creating.

While creating an object, you do it as follows:

    Custom_Vector obj;

if you have a default constructor. Or as it is in my case , you go

    Custom_Vector obj(size);

You can access the public elements of the class using the object's `.` operator.

Eg:	`obj.assign()` or `obj.valueAt(index)`

## Class Enums (*Strongly typed*)

Enums are a simple form of user-defined values using which we can enumerate values.

We will currently discuss strongly typed class enums. The plain enums to which we can directly assign `int`s without explicit conversion will be discussed later.

The following is an example of how to declare a class enum:

	enum class Fruit {APPLE, BANANA, TOMATO};
    
And the following is an example of how we create an object of the enum:

	Fruit a = Fruit::APPLE;
    
It is advised that you declare an `enum` outside a function since I faced an error when I tried to declare an operator function for the `enum`. Too tired to reproduce it and paste it here.

One thing to keep in mind. This `enum class` that has been created has no operators except the assignment operator as far as I understand.

Which is why operations like

	std::cout<<a;

will fail or throw an error. You need to explicitly define operators for them.

For now, I was unable to declare a `put to` operator (<<) for these `enum`s. Apparently they are different from operators like say, the pre-increment operator.

Using current knowledge, it is possible to declare a pre-increment operator though.