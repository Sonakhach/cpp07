#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T * m_arr;
    size_t m_n;
public:
    Array();
    Array(size_t n);
    Array(const Array &obj);
    Array &operator=(const Array &obj);
    ~Array();
    size_t  size() const;
    T &operator[](size_t i);
};


#include "Array.tpp"

#endif