

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//string s, t;
//int main()
//{
//	//while (1)
//	//{
//		cin >> s >> t;
//		int sr = s[0] - 96;
//		int sl = s[1] - '0';
//		int tr = t[0] - 96;
//		int tl = t[1] - '0';
//		int _max = max(abs(sr - tr), abs(sl - tl));
//		int gapr = abs(sr - tr);
//		int gapl = abs(sl - tl);
//		int i;
//		cout << _max << "\n";
//		if (sr == tr)
//		{
//			if (sl - tl < 0)
//			{
//				for (i = 0; i < tl - sl; ++i)
//				{
//					cout << "U\n";
//				}
//			}
//			else
//			{
//				for (i = 0; i < sl - tl; ++i)
//				{
//					cout << "D\n";
//				}
//			}
//		}
//		else if (sl == tl)
//		{
//			if (sr - tr < 0)
//			{
//				for (i = 0; i < tr - sr; ++i)
//				{
//					cout << "R\n";
//				}
//			}
//			else
//			{
//				for (i = 0; i < sr - tr; ++i)
//				{
//					cout << "L\n";
//				}
//			}
//		}
//		else
//		{
//			if (sr - tr < 0)
//			{
//				if (sl - tl < 0)
//				{
//					if (gapr == gapl)
//					{
//						for (i = 0; i < gapl; ++i)
//						{
//							cout << "RU\n";
//						}
//					}
//					else
//					{
//						for (i = 0; i < min(gapl, gapr); ++i)
//						{
//							cout << "RU\n";
//							sr++;
//							sl++;
//						}
//						if (sr == tr)
//						{
//							for (i = 0; i < tl - sl; ++i)
//							{
//								cout << "U\n";
//							}
//						}
//						else
//						{
//							for (i = 0; i < tr - sr; ++i)
//							{
//								cout << "R\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					if (gapr == gapl)
//					{
//						for (i = 0; i < gapl; ++i)
//						{
//							cout << "RD\n";
//						}
//					}
//					else
//					{
//						for (i = 0; i < min(gapl, gapr); ++i)
//						{
//							cout << "RD\n";
//							sr++;
//							sl--;
//						}
//						if (sr == tr)
//						{
//							for (i = 0; i < sl - tl; ++i)
//							{
//								cout << "D\n";
//							}
//						}
//						else
//						{
//							for (i = 0; i < tr - sr; ++i)
//							{
//								cout << "R\n";
//							}
//						}
//					}
//				}
//			}
//			else if (sr - tr > 0)
//			{
//				if (sl - tl < 0)
//				{
//					if (gapr == gapl)
//					{
//						for (i = 0; i < gapl; ++i)
//						{
//							cout << "LU\n";
//						}
//					}
//					else
//					{
//						for (i = 0; i < min(gapl, gapr); ++i)
//						{
//							cout << "LU\n";
//							sr--;
//							sl++;
//						}
//						if (sr == tr)
//						{
//							for (i = 0; i < tl - sl; ++i)
//							{
//								cout << "U\n";
//							}
//						}
//						else
//						{
//							for (i = 0; i < sr - tr; ++i)
//							{
//								cout << "L\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					if (gapr == gapl)
//					{
//						for (i = 0; i < gapl; ++i)
//						{
//							cout << "LD\n";
//						}
//					}
//					else
//					{
//						for (i = 0; i < min(gapl, gapr); ++i)
//						{
//							cout << "LD\n";
//							sr--;
//							sl--;
//						}
//						if (sr == tr)
//						{
//							for (i = 0; i < sl - tl; ++i)
//							{
//								cout << "D\n";
//							}
//						}
//						else
//						{
//							for (i = 0; i < sr - tr; ++i)
//							{
//								cout << "L\n";
//							}
//						}
//					}
//				}
//			}
//		}
//	//}
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//string temp;
//int num[3];
//int main() 
//{
//    int min, mid, max;
//    for (int i = 0; i < 3; i++) 
//    {
//        cin >> temp;
//        if (temp[1] == '>') 
//        {
//            num[temp[0] - 'A']++;
//        }
//        if (temp[1] == '<') {
//            num[temp[2] - 'A']++;
//        }
//    }
//    if (num[0] == num[1] || num[1] == num[2] || num[2] == num[0]) 
//    {
//        cout << "Impossible" << endl;
//    }
//    else 
//    {
//        for (int i = 0; i < 3; i++) 
//        {
//            if (num[i] == 2) 
//            {
//                max = i;
//            }
//            if (num[i] == 1) 
//            {
//                mid = i;
//            }
//            if (num[i] == 0) 
//            {
//                min = i;
//            }
//        }
//        printf("%c%c%c", min + 'A', mid + 'A', max + 'A');
//    }
//    return 0;
//}

//C-3


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, t;
ll num[100005];
ll sum[100005];
int main()
{
	cin >> n >> t;
	ll i;
	for (i = 1; i <= n; i++)
	{
		cin >> num[i];
		sum[i] = num[i] + sum[i - 1];
	}
	ll l = 0, r = n;
	while (sum[r] - sum[l] > t)
	{
		if (num[l] < num[r])
		{
			l++;
		}
		else
		{
			r--;
		}
	}
	cout << r - l;
	return 0;
}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int t, m;
//int times[1005], value[1005];
//int dp[105][1005];
//int main()
//{
//	cin >> t >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> times[i] >> value[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= t; j++)
//		{
//			if (j < times[i])
//			{
//				dp[i][j] = dp[i - 1][j];
//			}
//			else
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - times[i]] + value[i]);
//			}
//		}
//	}
//	cout << dp[m][t];
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n;
//ll x, y, ans;
//ll _max = 0;
//vector<ll> v[3000010];
//ll dp[3000010];
//int main()
//{
//	cin >> n;
//	ll i;
//	for (i = 0; i < n; ++i)
//	{
//		cin >> x >> y;
//		v[y].push_back(x - 1);
//		_max = max(_max, y);
//	}
//	for (i = 1; i <= _max; ++i)
//	{
//		dp[i] = dp[i - 1];
//		for (ll j = 0; j < v[i].size(); ++j)
//		{
//			ll beg = v[i][j];
//			dp[i] = max(dp[i], dp[beg] + i - beg);
//			ans = max(dp[i], ans);
//		}
//	}
//	cout << dp[_max];
//	return 0;
//}