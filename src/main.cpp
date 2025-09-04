#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

int main(){

	int num1, num2;
	
	
	//std::cout << "enter number a:";
	//std::cin >> a;
	//std::cout << "enter number b:";
	//std::cin >> b;
	
	int a = 3, b = 4;

	int ad = MathUtils::add(a,b);
	int mul = MathUtils::multiply(a,b);
	int sqr = AdvancedMath::square(a);
	
	std::cout << "a + b = " << ad << std::endl;
	std::cout << "a * b = " << mul << std::endl;
	std::cout << "square(a) = " << sqr << std::endl;

	return 0;


}
