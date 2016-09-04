#include <iostream>

#include "nthDigitPI.h"

int main() {
	std::cout << "Enter test number you would like to test: " << std::endl
		<< "1: Find PI to the Nth Digit" << std::endl
		<< "2: Find e to the Nth Digit" << std::endl
		<< "3: Fibonacci Sequence" << std::endl
		<< "4: Prime Factorization" << std::endl
		<< "5: Next Prime Number" << std::endl
		<< "6: Find Cost of Tile to Cover W x H Floor" << std::endl
		<< "7: Mortgage Calculator" << std::endl
		<< "8: Change Return Program" << std::endl
		<< "9: Binary to Decimal and Back Converter" << std::endl
		<< "10: Unit Converter (temp, currency, volume, mass and more)" << std::endl
		<< "11: Credit Card Validator" << std::endl
		<< "12: Factorial Finder" << std::endl
		<< "13: Happy Numbers" << std::endl
		<< "14: Number Names" << std::endl
		<< "15: Coin Flip Simulation" << std::endl
		<< "16: Limit Calculator" << std::endl
		<< "17: Fast Exponentiation" << std::endl;
	int test = 0;
	int n = 0;
	std::cin >> test;
	switch (test) {
		case 1:
			std::cout << "Enter your n (limit " << nthDigitPI::MAX_N << ")" << std::endl;
			while (std::cin >> n) {
				std::cout << nthDigitPI::getPI(n) << std::endl;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		default: 
			std::cout << "Improper input" << std::endl;
			break;


	}

	return 0;
}