#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;


struct Names {
	string imie;
	int wystapienia;
};

bool sortByWystapienia(Names a, Names b) {
	if (a.wystapienia == b.wystapienia) {
		return a.imie < b.imie;
	}
	else {
		return a.wystapienia > b.wystapienia;
	}
}

int main()
{
	string imie, nazwisko;
	int lp, ile = 0;
	char kropka;
	map<string, int> duplicates_names;
	vector<Names> unique_names;

	while (cin >> lp >> kropka >> nazwisko >> imie) {
		string upper = "";
		for (auto c : imie) {
			upper += toupper(c);
		}
		duplicates_names[upper]++;
	}


	for (auto m : duplicates_names) {
		Names n;
		n.imie = m.first;
		n.wystapienia = m.second;
		unique_names.push_back(n);
	}

	sort(unique_names.begin(), unique_names.end(), sortByWystapienia);

	for (auto s : unique_names) {
		cout << s.imie << " " << s.wystapienia << endl;
	}

	return 0;
}
