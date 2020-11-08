# Namespaces

## Creating namespaces

In C++, there is a concept called *namespaces* that allows one to group together a few declarations such that their names do not clash with other names (probably declared by another user).

To declare a namespace, use the `namespace` keyword. Here is an example

```cpp
namespace New_namespace{
    class example_class 
    {
        /*class elements*/
    };
    int func1();
    char func2();
}
```

Notice that, in the above example, the *namespace declaration* is not followed by a `;` unlike the *class declaration*. Keep it in mind when creating namespaces.

**Note:** In the above namespace I am only ***declaring***  the entities. Not ***defining*** them. I use separate compilation here, discussed in *<mark>05_separate_compilation.md</mark>*.

## Implementing namespaces

In order to implement a `namespace` and its elements in code, the keyword `using` is used. The following is an example implementing the namespace declared above.

```cpp
#include <iostream>
int main()
{
    using namespace New_namespace;
    example_class obj1;
    std::cout<<func1()<<std::endl;
    std::cout<<func2()<<std::endl;
}
```



The statement to use a particular namespace can come inside a function or be outside of it in order to act globally. Use either way according to your needs.












