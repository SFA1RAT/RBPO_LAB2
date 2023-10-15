module;
#include <cmath>

module Limonov1bib21004;

namespace RBPO {
	namespace Lab2 {
		namespace Variant10 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant10::Task2::f1(double x) {
	return sin(2 * asin(1) / 2 + 3 * x) / (1 - sin(3 * x - 2 * asin(1)));
};

double RBPO::Lab2::Variant10::Task2::f2(double x) {
	if (x > 3) {
		return -3 * x + 9;
	}
	else {
		return x * x * x / (x * x + 8);
	}
};


double RBPO::Lab2::Variant10::Task2::f3(unsigned long long n) {
	double sum = a(0); unsigned long long i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant10::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long long i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
};


double RBPO::Lab2::Variant10::Task2::a(long long i) {
	double numerator = pow(-1, i) * (i + 1);
	double denominator = i * i * i - i * i + 1;
	return numerator / denominator;
};