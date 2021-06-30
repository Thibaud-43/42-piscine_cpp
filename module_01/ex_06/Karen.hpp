#ifndef KAREN_HPP
# define KAREN_HPP

#include <cctype>
#include <iostream>
#include <cstring>
#include <map>
#include <functional>
#include <string>

class Karen;
typedef void (Karen:: *FnPtr)();

class Karen {
public:
	Karen(void);
	~Karen(void);
    void 							complain( std::string level );
private:
    void 							debug( void );
    void 							info( void );
    void 							warning( void );
    void 							error( void );

};



#endif 