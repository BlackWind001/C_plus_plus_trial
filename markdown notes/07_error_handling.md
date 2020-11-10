# Error Handling

There are quite a few concepts to look into in error handling each of which is explained below. Note that the following explanations are nowhere close to detailed, but are intended to give you a basic idea of them.

## Exceptions

Exceptions much like in any other language like JAVA or C are *thrown* in C++. However, C++ implements *catching* a bit differently.

To summarise, to *throw* an exception which you want handled, the code needs to be enclosed in a `try-catch` block. Here is the syntax of a `try-catch` block:

```cpp
try
{
    //Statements to execute
}
catch(<exception_type>)
{
    //Exception handling statements
}
```

In the above syntax, `exception_type` refers to the type of the exception as the name suggests. To give more context, an exception can be of any type. It could be an int or a float, a string or even a user-defined type. Thus, when an exception is thrown from within the try block, the catch statement that matches its the type of the execution thrown is executed.

You can also give a default catch statement for all types of exceptions by inserting `...` (3 dots) in the catch parenthesis as is shown in the below example of implementing exceptions.

```cpp
double quotient(double a, double b){
    
        //We want to return the quotient of a/b
        //With the condition that a needs to be positive
        if(b==0)
        {
            throw 0;
        }
        if(a<0)
        {
            throw "a is not valid";
        }
        return a/b;
    
}


int main()
{
    int a, b;
    //Accept a and b values from the user
    //Not going to type out everything    
    try{
        quotient(a,b);
    }
    catch(int a)
    {
    //Handle for division by zero
    }
    catch(...)
    {
    //Handle for a being negative
    }
}
```

Now, in the above example, if the user were to assign `a=1` and `b=0`, then the catch block with `int` type would execute i.e the catch block for division by zero.

On the other hand, if the user were to assign say, `a=-1` and `b=1`, then the default catch block would execute.

If the user were to give valid `a` and `b` values, then the handlers would be ignored and the code would execute accordingly.

Most of the information here is from [Exceptions - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/exceptions/). To define new exceptions, read from the aforementioned link.


