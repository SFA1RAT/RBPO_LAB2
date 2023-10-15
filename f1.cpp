module;
#include <cmath>

module Limonov1bib21004;

namespace RBPO {
	namespace Lab2 {
		namespace Variant10 {
			namespace Task3 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant10::Task3::f1(double x) {
	return sin(2 * asin(1) / 2 + 3 * x) / (1 - sin(3 * x - 2 * asin(1)));
};
