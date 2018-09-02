#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << " Enter the value of a and b ";
	cin >> a >> b;
	int x = (a - b);

	try {
		if(x != 0)
			cout << a / (a - b) << endl;
		else
			throw(x);
	}

	catch(int i) {
		cout << "Exception caught" << endl;
	//	int y = 10 + 20;
	//	cout << y << endl;
	}
	
	cout << "Next statement "  << endl;

	//cout << "\n\tX = " << x;
	return 0;
}
