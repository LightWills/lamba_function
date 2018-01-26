#include <iostream>

int main() {
	std::cout << "Hello, World!" << std::endl;
	int a = 4;
	auto l_ro = [&a](){
		++a;
		return a;
	};
	std::cerr << l_ro() <<"\n";
/*  EXO  1 **/

	auto forward = [](int a)
	{
		return[a] (int b)
		{
			return a* b;
		};
	};

auto f = forward(2);
	std::cout<<f(2)<<std::endl;
	std::cout<<f(2)<<std::endl;
	return 0;
}