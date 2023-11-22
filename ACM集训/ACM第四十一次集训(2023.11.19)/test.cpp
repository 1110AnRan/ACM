
//C
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int l, r;
//int main()
//{
//	cin >> l >> r;
//	int cnt = 0;
//	if (l <= 2)
//	{
//		++cnt;
//	}
//	if (l % 2 == 0)
//	{
//		++l;
//	}
//	for (int i = l; i <= r; i+=2)
//	{
//		bool flag = true;
//		for (int j = 2; j <= sqrt(i); ++j)
//		{
//			if (i % j == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag == true)
//		{
//			++cnt;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}


//A
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, m;
//int a[150000][150000];
//bool visited[150000][150000];
////ll findroot(ll x)
////{
////	while (a[x] >= 0)
////	{
////		x = a[x];
////	}
////	return x;
////}
////void Set(ll x, ll y)
////{
////	ll x1 = findroot(x);
////	ll y1 = findroot(y);
////
////	if (x1 != y1)
////	{
////		a[x1] += a[y1];
////		a[y1] = x1;
////	}
////}
//int main()
//{
//	cin >> n >> m;
//	int i;
//	//memset(a, -1, sizeof(a));
//	for (i = 0; i < m; ++i)
//	{
//		int x1, y1;
//		cin >> x1 >> y1;
//		//Set(x1, y1);
//		a[x1][y1] = a[y1][x1] = 1;
//	}
//	if (m <= 2)
//	{
//		cout << "NO\n";
//		return 0;
//	}
//	for (i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			if (i < j && a[i][j] == 1 && visited[i][j] == false)
//			{
//				visited[i][j] = visited[j][i] = true;
//				for (int k = 1; k <= n; ++k)
//				{
//					if (k != i && k != j && a[j][k] == 1)
//					{
//						if (a[i][k] != 1)
//						{
//							cout << "NO\n";
//							return 0;
//						}
//					}
//				}
//			}
//		}
//	}
//	cout << "YES\n";
//	return 0;
//}


//D
//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 30000;
//int t, n, a;
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> n >> a;
//        int f[MAXN];
//        memset(f, 0, sizeof(f));
//        f[0] = 1;
//        int i;
//        for (i = 2; i <= n; i++)
//        {
//            int c = 0;
//            for (int j = 0; j < MAXN; j++)
//            {
//                int s = f[j] * i + c;
//                f[j] = s % 10;
//                c = s / 10;
//            }
//        }
//        int k;
//        for (i = MAXN - 1; i >= 0; i--)
//        {
//            if (f[i])
//            {
//                k = i;
//                break;
//            }
//        }
//        int ans = 0;
//        for (i = k; i >= 0; i--) 
//        {
//            if (f[i] == a) 
//{
//                ans++;
//            }
//        }
//        cout << ans << endl;
//    }
//}


//E
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, r;
//int f[15][15];
//int fun(int r)
//{
//    if (r == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return r * fun(r - 1);
//    }
//}
//int main()
//{
//    cin >> n >> r;
//    if (r == 0 || n == 0 || n < r)
//    {
//        cout << 0;
//        return 0;
//    }
//    f[0][0] = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= min(r,i); j++)
//        {
//            f[i][j] = f[i - 1][j - 1] + j * f[i - 1][j];
//        }
//    }
//    cout << f[n][r] * fun(r);
//    return 0;
//}

