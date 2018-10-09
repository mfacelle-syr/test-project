// basic hello world program

#include "TestClass.hpp"

#include <iostream>

int main(int argc, char** argv)
{
	TestClass lcTestClass{};
	lcTestClass.run();

	// wait for input before killing
	std::cin.get();
}


void TestClass::run(void)
{
	std::cout << "Hello world!" << std::endl;
}
