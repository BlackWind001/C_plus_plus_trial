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
