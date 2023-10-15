module Limonov1bib21004:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant10 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant10::Task4::f2(double x) {
	if (x > 3) {
		return -3 * x + 9;
	}
	else {
		return x * x * x / (x * x + 8);
	}
}
