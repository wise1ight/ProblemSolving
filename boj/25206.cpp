#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	double credit = 0, sum = 0;
	map<string, double> g2s;
	g2s["A+"] = 4.5;
	g2s["A0"] = 4.0;
	g2s["B+"] = 3.5;
	g2s["B0"] = 3.0;
	g2s["C+"] = 2.5;
	g2s["C0"] = 2.0;
	g2s["D+"] = 1.5;
	g2s["D0"] = 1.0;
	g2s["F"] = 0.0;
	
	for(int i = 0; i < 20; i++) {
		vector<string> subject;
		for(int j = 0; j < 3; j++) {
			string str;
			cin >> str;
			subject.push_back(str);
		}
		
		if(subject[2].compare("P") != 0) {
			credit += stod(subject[1]);
			sum += stod(subject[1]) * g2s[subject[2]];
		}
	}
	
	cout << fixed;
    cout.precision(6);
	cout << sum / credit;
	
	return 0;
}
