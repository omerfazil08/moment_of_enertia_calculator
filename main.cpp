#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double r, m;
	double I;
	cout << "Enter the radius: ";
	cin >> r;
	cout << endl<<"Enter the mass: ";
	cin >> m;
	if (r < 0 ) {
		cerr << "Error: Radius must be a non-negative value." << endl;
		return 1;
	}
	if (m < 0) {
		cerr << "Error: Mass must be a non-negative value." << endl;
		return 1;
	}
	I = m * r * r * r * r * 0.25;
	cout << "Moment of enertia is: " << I;
}
