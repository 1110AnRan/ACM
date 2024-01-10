
//302
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, m;
//int a[1005], b[1005], c[1005];
//int main()
//{
//	cin >> n >> m;
//	int i;
//	for (i = 1; i <= m; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 1; i <= n - m; i++)
//	{
//		cin >> b[i];
//	}
//	int begin1 = 1, begin2 = 1;
//	int end = 1;
//	while (begin1 <= m && begin2 <= n - m)
//	{
//		while (begin1 <= m && a[begin1] <= b[begin2])
//		{
//			c[end++] = a[begin1++];
//		}
//		while (begin1 <= m && begin2 <= n - m && a[begin1] >= b[begin2])
//		{
//			c[end++] = b[begin2++];
//		}
//	}
//	while (begin1 <= m)
//	{
//		c[end++] = a[begin1++];
//	}
//	while (begin2 <= n - m)
//	{
//		c[end++] = b[begin2++];
//	}
//	for (i = 1; i < end; i++)
//	{
//		cout << c[i] << " ";
//	}
//	return 0;
//}



//303
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int totalweight, n, w[1005], v[1005];
//int dp[1005][1005];
//int main()
//{
//	cin >> totalweight >> n;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= totalweight; j++)
//		{
//			if (j >= v[i])
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j];
//			}
//		}
//	}
//	cout << dp[n][totalweight];
//	return 0;
//}
