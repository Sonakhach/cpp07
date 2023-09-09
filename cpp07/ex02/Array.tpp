#include "Array.hpp"
template <typename T>
Array <T>::Array()
{
    m_arr = NULL;
    m_n = 0; 

}

template <typename T>
Array <T>::Array(size_t n)
{
    m_n = n;
    m_arr = new T[n];
    for (size_t i=0; i < n; i++)
    {
            m_arr[i]=0;  
    }
}

template <typename T>
Array <T>:: Array(const Array &obj)
{
    m_n = obj.m_n;
    m_arr = new T[m_n] ;
    for (size_t i = 0; i < m_n; i++)
    {
        m_arr[i] = obj.m_arr[i];

    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &obj)
{
    if (this != &obj)
    {
        delete[] m_arr;
        m_n = obj.m_n;
        m_arr = new T[m_n] ;
        for (size_t i = 0; i < m_n; i++)
        {
            m_arr[i] = obj.m_arr[i];

        }
    }
    return (*this);
}

template <typename T>
Array <T>::~Array()
{
    delete [] m_arr;
}

template <typename T>
size_t Array <T>::size() const
{
    return (m_n);
}

template <typename T>
T &Array <T>::operator[](size_t i)
{
    if (i < m_n)
    {
        return (m_arr[i]);

    }
    else
    {
        throw std::runtime_error(" index is out of bounds !");

    }
}