#include <iostream>
#include <cmath>

using namespace std;

int dp[100001];
const int INF = 987654321;

void square_num(int N)
{
	for (int i = 2; i <= N; ++i)
	{
		for (int j = 1; j * j <= i; ++j)
		{
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
}

int main()
{ 
	int N;
	cin >> N;
	for (int i = 0; i <= N; ++i)
	{
		dp[i] = i;
	}
	square_num(N);
	cout << dp[N];
}