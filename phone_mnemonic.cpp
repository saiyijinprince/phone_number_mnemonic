#include <iostream>
#include <string>
#include <array>

using namespace std;

/* elements of programming interviews problem 6.2 */

namespace {
	const array<string, 10> M = {"0", "1", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

	void phone_mnemonic_helper(const string& num, int d, string& ans) {
		if (d == num.size()) {
			std::cout << ans << endl;
			return;
		}

		for (const char &c : M[num[d] - '0']){
			ans[d] = c;
			phone_mnemonic_helper(num, d+1, ans);
		}
	}

	void phone_mnemonic(const string& num) {
		string ans(num.size(), 0);
		phone_mnemonic_helper(num, 0, ans);
	}
}

int main () {
	
	string num = "718";
	phone_mnemonic(num);

	char y; 
	cin >> y;
}