#include "Pony.hpp"

void ponyOnTheStack(void)
{
	std::cout<< "Declaring pony on the stack ..." << std::endl;
    Pony    stack;
    stack.run();
}

void ponyOnTheHeap(void)
{
    std::cout<< "Declaring pony on the heap ..." << std::endl;
    Pony*   heap = new Pony;
    heap->run();
	std::cout<< "deleting pony on the heap ..." << std::endl;
    delete heap;
}

int main(void)
{
    ponyOnTheStack();
    ponyOnTheHeap();
}