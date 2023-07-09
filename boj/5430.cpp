#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		deque<int> dq;
		string p, arr, token;
		int n;
		cin >> p >> n >> arr;
		if(arr.length() > 2) {
			arr = arr.substr(1, arr.length() - 2);
			istringstream iss(arr);
			while(getline(iss, token, ','))
				dq.push_back(stoi(token));
		}
    	
    	bool isFail = false;
    	int rCount = 0;
    	for(int j = 0; j < p.length(); j++) {
    		char opr = p.at(j);
    		
    		if(opr == 'R')
    			rCount++;
    		else if(opr == 'D') {
    			if(dq.empty()) {
    				isFail = true;
    				break;
    			}
    			
    			if(rCount % 2 == 0) {
    				dq.pop_front();
    			} else {
    				dq.pop_back();
    			}
    		}
    	}
    	
    	if(!isFail) {
    		if(dq.empty()) {
    			cout << "[]\n";
    		} else {
    			cout << "[";
	    		if(rCount % 2 == 0) {
	    			cout << *dq.begin();
	    			for(auto iter = dq.begin() + 1; iter != dq.end(); iter++) {
	    				cout << "," << *iter;
	    			}
	    		} else {
	    			cout << *dq.rbegin();
	    			for(auto iter = dq.rbegin() + 1; iter != dq.rend(); iter++) {
	    				cout << "," << *iter;
	    			}
	    		}
    			cout << "]\n";
    		}
    	} else {
    		cout << "error\n";
    	}
	}
	
	return 0;
}
