#include <iostream>

int main() {
	std::cout << "Hello, World!" << std::endl;
	int a = 4;
	auto l_ro = [&a](){
		++a;
		return a;
	};
	std::cerr << l_ro() <<"\n";

	return 0;
}