#include <iostream>
#include <cmath>
#include <math.h>

double SQRTdeal();

int main() {
	SQRTdeal();
	return 0;
}

double SQRTdeal() {
	int N;
	int xn;
	std::cout << "Enter N for SQRT";
	std::cin >> N; 
	std::cout << "Enter xn, to start"; 
	std::cin >> xn; 
	double X = 1/2 * (xn + (N / xn));
	while (X % 10 != 0) {
		float xm = X;
		X = 1/2 * (xm + (N / xm));
	}
	return X;
}