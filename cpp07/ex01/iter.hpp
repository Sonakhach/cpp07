#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T* arr , size_t len, void (*f) (const T &a))
{
    for (size_t i = 0; i < len; i++)
    {
        f(arr[i]);

    }

}

template <typename T>
void foo( const T &a)
{
    std::cout << a << std::endl;
}
#endif