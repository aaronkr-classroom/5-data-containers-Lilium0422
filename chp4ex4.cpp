// chp4ex3.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	for (double i = 1; i <= 100; i += 0.1) {
		cout << setw(3) << i << setw(10) << i * i << endl;
	}

	return 0;
}
