#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string str;
	vector<string> alphabets;
	
	alphabets.push_back("c=");
	alphabets.push_back("c-");
	alphabets.push_back("dz=");
	alphabets.push_back("d-");
	alphabets.push_back("lj");
	alphabets.push_back("nj");
	alphabets.push_back("s=");
	alphabets.push_back("z=");
	
	cin >> str;
	
	int end = str.length() - 1;
	for(int pos = 0; pos < str.length(); pos++) {
		for(auto alphabet : alphabets) {
			if(pos + alphabet.length() - 1 <= end
			&& str.substr(pos, alphabet.length()).compare(alphabet) == 0) {
				pos += (alphabet.length() - 1);
				break;
			}
		}
		count++;
	}
	
	cout << count;
	
	return 0;
}
