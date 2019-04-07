#include <iostream>
#include <string>
using namespace std;
int main() {
	unsigned long long int t, p;
	cin >> t;
	while (t--) {
		string n;
		cin >> p >> n;
		unsigned long long int podst = 1, wynik = 0;
		for (int i = n.length() - 1; i >= 0; i--)
		{
			int x = n[i] - 48;
			wynik = (wynik + (x * podst)) % 1010101;
			podst = (podst * p) % 1010101;
		}
		cout << wynik << '\n';
	}

	return 0;
}
