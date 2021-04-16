#include <iostream>

int main()
{
	int i = 0, &r = i;
	const int ci = i, &cr = ci;

	auto a = r; //int
	auto b = cr; //int 
	auto c = cr; //int
	auto d = &i; //int* (references of int end up as int*)
	auto e = &ci; //const int* (-//-)
	auto &g = ci; //const int& bound to ci

	//Exercise assignments

	a = 42;
	b = 42;
	c = 42;
	//d = 42; is not legal because we cannot assign a value of int to type int*, we either initialize it with another int* or reference another int.
	*d = 42;
	//e = 42; is not legal because again we cannot assign a value of type int to type const int*,either init with a const int* or reference an int.
	e = &c;
	//g = 42; is not legal because g is a const int reference bound to ci.

	return 0;
}