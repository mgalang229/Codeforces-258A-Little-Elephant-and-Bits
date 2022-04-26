#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	string s;
	cin >> s;
	int n = s.size();
	int pos = -1;
	for(int i = 0; i < n; i++) {
		if(s[i] == '0') {
			pos = i;
			break;
		}
	}
	string new_string = "";
	for(int i = 0; i < pos; i++) {
		new_string += s[i];
	}
	for(int i = pos + 1; i < n; i++) {
		new_string += s[i];
	}
	if(new_string == s) {
		new_string = new_string.substr(0, n - 1);
	}
	cout << new_string << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	//cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		perform_test();
	}
	return 0;
}
