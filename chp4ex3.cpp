// chp4ex3.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	for (int i = 1; i <= 1000; i++) {
		cout << setw(4) << i << setw(8) << i * i << endl;
	}

	return 0;
}
