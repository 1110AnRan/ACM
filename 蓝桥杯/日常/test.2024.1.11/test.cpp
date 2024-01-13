


//304
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int totalweight, n;
//int v[1005], w[1005];
//int dp[1005];
//int main()
//{
//	cin >> totalweight >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = v[i]; j <= totalweight; j++)
//		{
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//		}
//	}
//	cout << dp[totalweight];
//	return 0;
//}

//307
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, a[10005];
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	int ans = INT_MIN;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			ans = max(ans, a[j] - a[i]);
//		}
//	}
//	cout << ans;
//	return 0;
//}


