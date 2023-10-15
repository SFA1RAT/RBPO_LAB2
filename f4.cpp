module;
#include <cmath>
module Limonov1bib21004;

namespace RBPO {
	namespace Lab2 {
		namespace Variant10 {
			namespace Task3 {
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant10::Task3::f4(double eps) {
	double sum = 0, temp = a(0), temp1 = a(1); unsigned long long i = 1;
	do {
		sum += temp, temp = temp1, temp1 = a(++i);
	} while (eps < std::abs(temp - temp1));
	return sum;
};
