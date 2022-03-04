#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

vector<ll> memo;
ll fibo(int n) {
	if (memo[n] < 0) {
		memo[n] = fibo(n - 1) + fibo(n - 2);
	}

	return memo[n];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	memo = vector<ll>(n + 1, -1);
	memo[0] = 0;
	memo[1] = 1;

	cout << fibo(n) << ' ' << n - 2;

	return 0;
}