#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	long long n;
	cin >> n;
	string s = "";
	while(n--) {
		s += (char)('a' + (n % 26));
		n /= 26;
	}
	reverse(s.begin(), s.end());
	cout << s << "\n";
}	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
