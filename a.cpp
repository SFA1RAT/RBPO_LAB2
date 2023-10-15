module Limonov1bib21004;
#include <cmath>
namespace RBPO {
	namespace Lab2 {
		namespace Variant10 {
			namespace Task3 {
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant10::Task3::a(long long i) {
	double numerator = pow(-1, i) * (i + 1);
	double denominator = i * i * i - i * i + 1;
	return numerator / denominator;
};
