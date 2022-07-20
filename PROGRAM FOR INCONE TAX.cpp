#include <iostream>
using  namespace  std;

int main() {
	int Salary, Incometax;

	cout << "Enter your yearly salary" << endl;
	cin >> Salary;

	if (Salary > 70000) {
		Incometax = Salary * 0.4;

	}
	else {
		Incometax = Salary * 0.3;
	}

	cout << "Your yearly incometax is:" << Incometax;

	return 0;

}