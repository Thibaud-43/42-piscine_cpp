#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include<string>
#include<iostream>


template<typename T>
void        swap(T & rhs, T & lhs)
{
    T   tmp;

    tmp = rhs;
    rhs = lhs;
    lhs = tmp;
}

template<typename T>
T   const   &   min(T & rhs, T & lhs)
{
    return ((rhs > lhs) ? lhs : rhs);
}

template<typename T>
T   const   &   max(T & rhs, T & lhs)
{
    return ((rhs > lhs) ? rhs : lhs);
}

#endif