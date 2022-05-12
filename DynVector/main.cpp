#include <iostream>
#include "vector.h"
#include <string>

int main() {
	sec::vector<std::string> a(3);
	sec::vector<std::string> b(3);
	for (int i = 0; i < 3; i++) {
		a[i] = "ab";
		b[i] = "ba";
	}
	a.push_back("fa");
	a.insert(1, "you");
	sec::vector<std::string> c;
	c = a + b;
	sec::vector<std::string> p = a;
	c += a += b += p += c;
	std::cout<< b <<"\n"<<a <<"\n"<< c << "\n" << p<<std::endl;
	return 0;
}