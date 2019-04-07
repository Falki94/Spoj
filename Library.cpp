#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, int> mapa;
	string linia;
	string kod;
	int n, k;
	cin >> n >> k;
	int licznik = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> kod;
		mapa[kod]++;
	}
	for (int i = 0; i < k; i++)
	{
		string sprawdzam;
		cin >> sprawdzam;
		licznik = mapa[sprawdzam];
		if (licznik == 0) {
			cout << "BRAK\n";
		}
		else
		{
			cout << licznik << '\n';
		}
	}
	return 0;
}