module;
#include <cmath>
module Limonov1bib21004;

namespace RBPO {
	namespace Lab2 {
		namespace Variant10 {
			namespace Task3 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant10::Task3::f2(double x) {
	if (x > 3) {
		return -3 * x + 9;
	}
	else {
		return x * x * x / (x * x + 8);
	}
}
