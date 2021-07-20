#include "Convertor.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
      std::cout << "Wrong number of arguments" << std::endl;
      return 0;
    }
    Convertor	convertor(argv[1]);
    convertor.convert();
    return 0;
}
