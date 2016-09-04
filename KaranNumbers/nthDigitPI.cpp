#include "nthDigitPI.h"

namespace nthDigitPI {
	std::string nthDigitPI::getPI(int n)
	{
		if (n <= 0 || n > MAX_N) {
			return "Bad N input";
		}
		if (n == 1) {
			return PI.substr(0, n);
		}
		return PI.substr(0, n + 1);
	}
}
