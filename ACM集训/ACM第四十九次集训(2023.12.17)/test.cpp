

//D
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//char matrix[105][105];
//bool vis[105][105];
//int dx[] = { -1,-1,-1,0,0,1,1,1 };
//int dy[] = { -1,0,1,-1,1,-1,0,1 };
//string s = "yizhong";
//void bfs(int x, int y)
//{
//	for (int i = 0; i <= 7; ++i)
//	{
//		if (x + 6 * dx[i] > 0 && y + 6 * dy[i] > 0
//			&& x + 6 * dx[i] <= n && y + 6 * dy[i] <= n)
//		{
//			string temp;
//			for (int j = 0; j < 7; ++j)
//			{
//				temp += matrix[x + dx[i] * j][y + dy[i] * j];
//			}
//			if (s == temp)
//			{
//				for (int j = 0; j < 7; ++j)
//				{
//					vis[x + dx[i] * j][y + dy[i] * j] = true;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			if (matrix[i][j] == 'y')
//			{
//				bfs(i, j);
//			}
//		}
//	}
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			if (vis[i][j] == false)
//			{
//				cout << '*';
//			}
//			else
//			{
//				cout << matrix[i][j];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}


//C
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, w;
//int a[30010];
//int main()
//{
//	cin >> w >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> a[i];
//	}
//	sort(a + 1, a + 1 + n);
//	int l = 1, r = n;
//	int ans = 0;
//	while (l <= r)
//	{
//		if (l != r)
//		{
//			if (a[r] + a[l] <= w)
//			{
//				++ans;
//				++l;
//				--r;
//			}
//			else
//			{
//				++ans;
//				--r;
//			}
//		}
//		else
//		{
//			if (a[l] <= w)
//			{
//				++ans;
//				break;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}



//E
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int v, n;
//int a[35];
//int dp[20005];
//int main()
//{
//	cin >> v >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = v; j >= a[i]; --j)
//		{
//			dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
//		}
//	}
//	cout << v - dp[v];
//	return 0;
//}


//B
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int t, a, b;
//string s;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b >> s;
//		int l, r;
//		l = s.find('1');
//		r = s.rfind('1');
//		int ans = INT_MAX;
//		int count0 = 0;
//		for (int i = l + 1; i < r; ++i)
//		{
//			if (s[i] == '0')
//			{
//				++count0;
//			}
//		}
//		ans = min(ans, b * count0 + a);
//		int count1 = 0;
//		for (int i = l; i <= r; ++i)
//		{
//			if (s[i] == '1')
//			{
//				++count1;
//			}
//		}
//		ans = min(ans, a * count1);
//		cout << ans << endl;
//	}
//	return 0;
//}



//F
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int days[2005][2005];
//int dp[2005][2005];
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= m; ++i)
//    {
//        for (int j = 1; j <= n; ++j)
//        {
//            cin >> days[j][i];
//        }
//    }
//    for (int i = 1; i <= n; ++i)
//    {
//        for (int j = 1; j <= m; ++j)
//        {
//            if (j == 1)
//            {
//                dp[i][j] = min(dp[i - 1][j], dp[i - 1][m]) + days[i][j];
//            }
//            else
//            {
//                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + days[i][j];
//            }
//        }
//    }
//    int mindays = INT_MAX;
//    for (int i = 1; i <= m; ++i)
//    {
//        mindays = min(mindays, dp[n][i]);
//    }
//    cout << mindays;
//    return 0;
//}