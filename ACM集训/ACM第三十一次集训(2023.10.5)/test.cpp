

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int dp[1005][1005];
//int cnt= 1;
//void add(int x)
//{
//	for (int i = 1; i <= cnt; i++)
//	{
//		dp[x][i] = dp[x - 1][i] + dp[x - 2][i];
//	}
//	for (int i = 1; i <= cnt; i++)
//	{
//		if (dp[x][i] > 9)
//		{
//			dp[x][i + 1] += dp[x][i] / 10;
//			dp[x][i] %= 10;
//		}
//	}
//	if (dp[x][cnt + 1])
//	{
//		cnt++;
//	}
//}
//int main()
//{
//	cin >> m >> n;
//	dp[1][1] = 1;
//	dp[2][1] = 2;
//	int i;
//	for (i = 3; i <= n - m; i++)
//	{
//		add(i);
//	}
//	for (i = cnt; i; i--)
//	{
//		cout << dp[n - m][i];
//	}
//	return 0;
//}


//C-3
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//map<char, ll> m;
//string s;
//int main()
//{
//	cin >> s;
//	ll i;
//	ll cnt = 0;
//	for (i = 0; i < s.size(); i++)
//	{
//		m[s[i]]++;
//	}
//	for (i = 0; i < s.size(); i++)
//	{
//		cnt += m[s[i]];
//	}
//	cout << cnt;
//	return 0;
//}

//E-5
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, x;
//ll ans;
//int arr[100005];
//int main()
//{
//	cin >> n >> x;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] + arr[i + 1] > x)
//		{
//			ans += arr[i] + arr[i + 1] - x;
//			arr[i + 1] -= arr[i] + arr[i + 1] - x;
//		}
//	}
//	cout << ans;
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//int L, N, M;
//int l, r;
//int arr[50005];
//bool check(int x)
//{
//	int dis = 0;
//	int ret = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] - dis < x)
//		{
//			ret++;
//		}
//		else
//		{
//			dis = arr[i];
//		}
//	}
//	if (ret > M)
//	{
//		return false;
//	}
//	return true;
//}
//int main()
//{
//	int ans;
//	cin >> L >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//	arr[N] = L;
//	l = 0; r = L;
//	while (l <= r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid))
//		{
//			ans = mid;
//			l = mid + 1;
//		}
//		else
//		{
//			r = mid - 1;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}
