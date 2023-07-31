#include <iostream>
using namespace std;

int main() {
	while(true) {
		int count = 0;
		string str;
	    getline(cin, str);
	    if(str.compare("#") == 0)
	    	break;
	    	
	    for(int i = 0; i < str.length(); i++) {
	    	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
	    		|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
	    		count++;
	    }
	    
	    cout << count << "\n";
	}
	return 0;
}
