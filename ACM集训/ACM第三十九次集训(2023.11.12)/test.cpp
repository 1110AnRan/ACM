


//A
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, x;
//ll loses[1005], wins[1005], uses[1005];
//ll dp[1005][1005];
//int main()
//{
//	cin >> n >> x;
//	int i;
//	for (i = 1; i <= n; ++i)
//	{
//		cin >> loses[i] >> wins[i] >> uses[i];
//	}
//	dp[0][0] = 0;
//	dp[0][1] = 0;
//	for (i = 1; i <= n; ++i)
//	{
//		for (int j = x; j >= 0; --j)
//		{
//			if (j >= uses[i])
//			{
//				dp[i][j] = max(dp[i - 1][j]+loses[i], dp[i - 1][j - uses[i]] + wins[i]);
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j] + loses[i];
//			}
//		}
//	}
//	cout << dp[n][x] * 5;
//	return 0;
//}

//F
//#include<bits/stdc++.h>
//using namespace std;
//int a[1005], b[1005];
//int main() 
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) 
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i < n; i++) 
//	{
//		b[i] = abs(a[i] - a[i + 1]);
//	}
//	sort(b + 1, b + n);
//	for (int i = 1; i < n; i++) 
//	{
//		if (b[i] != i)
//		{ 
//			cout << "Not jolly\n";
//			return 0;
//		}
//	}
//	cout<<"Jolly\n";
//	return 0;
//}

//E
//#include<bits/stdc++.h>
//using namespace std;
//int w0, w, m;
//bool check(double x)
//{
//	double sum = w0;
//	for (int i = 0; i < m; ++i)
//	{
//		sum += sum * x;
//		sum -= w;
//	}
//	if (sum <= 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	cin >> w0 >> w >> m;
//	double l = 0, r = 500;
//	for(int i=0; i < 100; ++i)
//	{
//		double mid = (l + r) / 2;
//		if (check(mid/100))
//		{
//			l = mid;
//		}
//		else
//		{
//			r = mid;
//		}
//	}
//	cout << fixed << setprecision(1) << l << endl;
//	return 0;
//}

//B
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	if (n > m)
//	{
//		cout << n - m << endl;
//	}
//	else if (n == m)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		int ans = 0;
//		while (n != m)
//		{
//			if (m / n > 1)
//			{
//				n *= 2;
//				++ans;
//			}
//			else
//			{
//				if (n > m)
//				{
//					ans += (n - m);
//					n -= (n - m);
//				}
//				else
//				{
//					if ((n - 1) * 2 == m)
//					{
//						ans += 2;
//						n = (n - 1) * 2;
//						break;
//					}
//					else if ((n * 2) - 1 == m)
//					{
//						ans += 2;
//						n = (n * 2) - 1;
//						break;
//					}
//					n = (n - 1) * 2;
//					ans += 2;
//				}
//			}
//		}
//		cout << ans;
//	}
//	return 0;
//}

//A
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, k;
//int main()
//{
//	cin >> n >> m >> k;
//	bool flag = 1;
//	for (int i = 0; i <= 9; i++)
//	{
//		if ((n * 10 + i) % m == 0)
//		{
//			flag = 0;
//			cout << n << i;
//			for (int i = 1; i < k; i++)
//			{
//				cout << 0;
//			}
//			cout << endl;
//			break;
//		}
//	}
//	if (flag)
//	{
//		cout << "-1" << endl;
//	}
//	return 0;
//}