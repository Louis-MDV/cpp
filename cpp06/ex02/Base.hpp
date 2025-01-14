#pragma once
#include <string>
#include <iostream>
#include "../Colors.hpp"

class Base {
	public:
		Base();
		virtual ~Base();
		static  Base* generate(void);
		void    identify(Base* p);
		void    identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};