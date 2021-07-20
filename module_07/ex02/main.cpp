#include "Array.hpp"

int main(void)
{
    Array      <int>array(5);
    Array      <int>array2(10);

    for (int i = 0; i < 5; i++)
        array[i] = i;
    for (int i = 0; i < 10; i++)
        array2[i] = i + 10;
    std::cout << array << " size :" << array.size() << std::endl;
    std::cout << array2 << " size :" << array2.size() << std::endl;
    array = array2;
    std::cout << array << " size :" << array.size() << std::endl;


    Array      <char>array3(5);
    Array      <char>array4(10);

    for (int i = 0; i < 5; i++)
        array3[i] = i + 97;
    for (int i = 0; i < 10; i++)
        array4[i] = i + 107;
    std::cout << array3 << " size :" << array3.size() << std::endl;
    std::cout << array4 << " size :" << array4.size() << std::endl;
    array3 = array4;
    std::cout << array3 << " size :" << array3.size() << std::endl;
    return 0;
}
