

//C
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//vector<string> v;
//string s;
//int n;
//bool cmp(string a, string b)
//{
//	return a + b > b + a;
//}
//int main()
//{
//	cin >> n;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		cin >> s;
//		v.push_back(s);
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (i = 0; i < v.size(); ++i)
//	{
//		cout << v[i];
//	}
//	return 0;
//}


//D
//#include<bits/stdc++.h>
//using namespace std;
//int IsPrime(int a)
//{
//	int i;
//	if (a == 1)
//	{
//		return 0;
//	}
//	if (a % 2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		for (i = 2; i * i <= a; i++)
//		{
//			if (a % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//int reverse(int n)
//{
//	int sum = 0;
//	int k = n;
//	while (n != 0)
//	{
//		sum = sum * 10 + n % 10;
//		n /= 10;
//	}
//	if (sum == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int digit(int x)
//{
//	if ((x >= 1000 && x <= 10000) || (x >= 100000 && x <= 1000000))
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int l, r, i;
//	cin >> l >> r;
//	if (l <= 2)
//	{
//		cout << 2 << endl;
//	}
//	if (l % 2 == 0)
//	{
//		l++;
//	}
//	for (i = l; i <= r; i += 2)
//	{
//		if (i == 9999989)
//		{
//			break;
//		}
//		if (digit(i) && reverse(i) && IsPrime(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//A
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int q, n;
//int main()
//{
//	cin.sync_with_stdio(0);
//	cout.sync_with_stdio(0);
//	cin >> q;
//	while (q--)
//	{
//		cin >> n;
//		unordered_map<int, int> mp;
//		int i;
//		for (i = 1; i <= n; ++i)
//		{
//			int m;
//			cin >> m;
//			mp[i] = m;
//		}
//		for (i = 1; i <= n; ++i)
//		{
//			int ans = 1;
//			int next = mp[i];
//			while (next != i)
//			{
//				next = mp[next];
//				++ans;
//			}
//			cout << ans << " ";
//		}
//	}
//	return 0;
//}


//E
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int a[2005], b[2005];
//int n;
//bool cmp(int x1, int x2)
//{
//    return x1 > x2;
//}
//int main()
//{
//    cin >> n;
//    int i;
//    for (i = 1; i <= n; ++i)
//    {
//        cin >> a[i];
//    }
//    for (i = 1; i <= n; ++i)
//    {
//        cin >> b[i];
//    }
//    int la = 1, ra = n, lb = 1, rb = n;
//    sort(a + 1, a + 1 + n, cmp);
//    sort(b + 1, b + 1 + n, cmp);
//    int ans = 0;
//    for (i = 1; i <= n; ++i)
//    {
//        if (a[la] > b[lb])
//        {
//            ++ans;
//            ++la;
//            ++lb;
//        }
//        else if (a[ra] > b[rb])
//        {
//            ++ans;
//            ra--;
//            rb--;
//        }
//       else
//        {
//            if (a[ra] < b[lb])
//            {
//                --ans;
//                ra--;
//                lb++;
//            }
//        }
//    }
//    cout << ans * 200;
//    return 0;
//}



//F
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int a[55][55];
//int m, n;
//int dp[55][55][55][55];
//int main()
//{
//	cin >> m >> n;
//	int i, j, k, l;
//	for (i = 1; i <= m; ++i)
//	{
//		for (j = 1; j <= n; ++j)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (i = 1; i <= m; ++i)
//	{
//		for (j = 1; j <= n; ++j)
//		{
//			for (k = 1; k <= m; ++k)
//			{
//				for (l = 1; l <= n; ++l)
//				{
//					int a1 = max(dp[i - 1][j][k - 1][l], dp[i - 1][j][k][l - 1]);
//					int a2 = max(dp[i][j - 1][k - 1][l], dp[i][j - 1][k][l - 1]);
//					dp[i][j][k][l] = max(a1, a2) + a[i][j];
//					if (i != k && j != l)
//					{
//						dp[i][j][k][l] += a[k][l];
//					}
//				}
//			}
//		}
//	}
//	cout << dp[m][n][m][n];
//	return 0;
//}
