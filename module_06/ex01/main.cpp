#include <iostream>
#include <string>
#include <stdint.h>

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data        *data = new Data();
    uintptr_t   data_serialized;
    Data        *data_deserialized;

    data->value = 42;
    std::cout << "Data address : " << data << std::endl;
    data_serialized = serialize(data);
    std::cout << "Data serialized uintptr_t : " << data_serialized << std::endl;
    data_deserialized = deserialize(data_serialized);
    std::cout << "Data deserialized address : " << data_deserialized << " = " << data << std::endl;
    delete data;
    return 0;
}
