#include <iostream>

//
// Created by root on 1/26/18.
//
template <typename T>

#include "Cleanup.hh"


Cleanup::Cleanup(T f_)
	: f_(f_) {}

Cleanup::~Cleanup()
{
	delete f_;
}

int main()
{
	int a = 5;
	std::cout<<"..."<<a<<"\n";
	auto obj = Cleanup([&a]{a	= 0});
	std::cout<<"..after.."<<a<<"\n";

}
