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
