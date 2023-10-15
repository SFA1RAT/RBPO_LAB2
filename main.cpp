#include <iostream>

import Limonov1bib21004;

enum Choice {
	Task1 = '1', Task2 = '2', Task3 = '3', Task4 = '4', Task5 = '5'
};

int main() {
	char q;
	do
	{
		std::cout << "Decide what the program should to do:\
					\nTo start first task input:\t\'1\'\
					\nTo start second task input:\t\'2\'\
					\nTo start third task input:\t\'3\'\
					\nTo strat fourth task input:\t\'4\'\
					\nTo start fifth task input:\t\'5\'\
					\nTo end the session input:\t\'Q\'" << std::endl;
		std::cin >> q;
		switch ((Choice)q) {
			unsigned long long n; double x, eps;
		case Task1:
			std::cout << "You choose 1 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant10::Task1::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant10::Task1::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant10::Task1::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant10::Task1::f4(eps) << std::endl;
			break;
		case Task2:
			std::cout << "You choose 2 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant10::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant10::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant10::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant10::Task2::f4(eps) << std::endl;
			break;
		case Task3:
			std::cout << "You choose 3 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant10::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant10::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant10::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant10::Task3::f4(eps) << std::endl;
			break;
		case Task4:
			std::cout << "You choose 4 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant10::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant10::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant10::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant10::Task4::f4(eps) << std::endl;
			break;
		case Task5:
			std::cout << "You choose 5 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant10::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant10::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant10::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant10::Task5::f4(eps) << std::endl;
			break;
		case 'Q':
			break;
		default:
			std::cout << "Inputed data is incorrect!" << std::endl;
			break;
		}
	} while (q != 'Q');
	return 0;
};
/*
* Data for test
* Input:
* 1 12.34 100 0.0001 2 12.34 100 0.0001 3 12.34 100 0.0001 4 12.34 100 0.0001 5 12.34 100 0.0001 Q
* Output:
* f1(x) = 0.264074
* f2(x) = 12.501
* f3(n) = 0.698073
* f4(eps) = 0.693172
*/