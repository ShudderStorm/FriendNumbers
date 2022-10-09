#include <iostream>
using namespace std;

int main()
{
	int a; cin >> a;
	int b; cin >> b;

	if (a <= 0 || b <= 0) {
		cout << "Error: number(s) is(are) not natural";
	}
	int k = 0;
	int l = 0;

	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			k += i;
		}
	}
	for (int i = 1; i < b; i++) {
		if (b % i == 0) {
			l += i;
		}
	}
	if (k == b && l == a) {
		cout << "Numbers are friends";
	}
	else {
		cout << "Numbers are not friends";
	}
	return 0;
}

