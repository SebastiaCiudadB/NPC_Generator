#include <iostream>;

using namespace std;

int exercici1() {


	int a[10];


	for (int i = 0; i < 10; i++) {
		a[i] = i;
		a[0] = a[0] + a[i];
	}


	return a[0];
}


int main() {
	int a = exercici1();

	cout << a;
	return 0;
}