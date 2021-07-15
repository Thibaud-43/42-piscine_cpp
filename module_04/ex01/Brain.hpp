#ifndef Brain_HPP
 #define Brain_HPP

#include <iostream>
#include <string>
#include <algorithm>

class Brain
{
    private:
        std::string     m_ideas[100];
    public:
        Brain();
        Brain(Brain const & src);
        ~Brain();

        Brain &   operator=(Brain const & rhs);

        std::string*    getIdeas(void);
};

#endif