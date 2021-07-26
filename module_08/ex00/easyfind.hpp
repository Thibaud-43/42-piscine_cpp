#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <deque>
#include <list>
#include <queue>
#include <set>
#include <stack>
#include <algorithm>
#include <iterator>
#include <vector>
#include <array>
#include <string>
#include <iostream>
#include <stdexcept>

class NotFound : public std::exception
{
    public:
        NotFound(void){return ;};
        virtual ~NotFound(void) throw(){return ;};
        virtual const char    *what() const throw(){return("Occurence not found");};
};


template<typename T>
int     &       easyfind(T & intContainer, int occurence)
{
    typename T::iterator    it;

    it = std::find(intContainer.begin(), intContainer.end(), occurence);
    if (it != intContainer.end())
        return *it;
    else
        throw NotFound();
}

#endif