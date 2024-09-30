#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	srand(time(NULL));
	
	//A
	Base *ptr = A::generate();
	std::cout << "--------------------" << std::endl;
    std::cout << ptr << std::endl;

    std::cout << "identify that take pointer" << std::endl;
	A::identify(ptr);
    std::cout << "identify that take reference" << std::endl;
	A::identify(*ptr);
	std::cout << "--------------------" << std::endl;
     
	// B
	Base *ptr1 = B::generate();
	std::cout << "--------------------" << std::endl;
    std::cout << ptr1 << std::endl;

    std::cout << "identify that take pointer" << std::endl;
	B::identify(ptr1);
    std::cout << "identify that take reference" << std::endl;
	B::identify(*ptr1);
	std::cout << "--------------------" << std::endl;
	// C
	Base *ptr2 = C::generate();
	std::cout << "--------------------" << std::endl;
    std::cout << ptr2 << std::endl;

    std::cout << "identify that take pointer" << std::endl;
	C::identify(ptr2);
    std::cout << "identify that take reference" << std::endl;
	C::identify(*ptr2);
	std::cout << "--------------------" << std::endl;


	delete ptr;
	return (0);
}
