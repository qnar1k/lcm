#include <iostream>
using namespace std;

int lcm(int a, int b) {
    a = abs(a);
    b - abs(b);
	int result = max(a, b);
	while (true) {
		if (result % a == 0 && result % b == 0) {
			break;
		}
		result++;
	}
	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << endl << lcm(a, b);
}
