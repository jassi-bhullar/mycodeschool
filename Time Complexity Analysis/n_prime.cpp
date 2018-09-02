#include <iostream>
#include <cmath>

bool m1_isPrime(int num)
{
	for(int i = 2; i < num; i++)
	{
		if(num%i == 0)
			return false;
	}
	return true;
}

bool m2_isPrime(int num)
{
	for(int i = 2; i < sqrt(num); i++)
	{
		if(num%i == 0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int num;
	std::cin >> num;

	std::cout << "Method 1: Number is " << (m1_isPrime(num) ? "prime" : "not prime") << std::endl;
	std::cout << "Method 2: Number is " << (m2_isPrime(num) ? "prime" : "not prime") << std::endl;
	return 0;
}