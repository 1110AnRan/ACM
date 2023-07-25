
//A-1
//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 1000005;
//int arr[MAXN];
//int n, m, k, a, b;
//set<int> s;
//int find(int x)
//{
//	if (x == arr[x])
//	{
//		return x;
//	}
//	return arr[x] = find(arr[x]);
//}
//void unite(int a, int b)
//{
//	int x = find(a);
//	int y = find(b);
//	if (x == y)
//	{
//		return;
//	}
//	arr[y] = x;
//}
//int main()
//{
//	cin >> m >> n;
//	int i = 0;
//	for (i = 1; i <= m * n; i++)
//	{
//		arr[i] = i;
//	}
//	cin >> k;
//	for (i = 1; i <= k; i++)
//	{
//		cin >> a >> b;
//		unite(a, b);
//	}
//	for (i = 1; i <= m * n; i++)
//	{
//		s.insert(find(arr[i]));
//	}
//	cout << s.size();
//	return 0;
//}

//B-2
//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 1e6 + 2;
//int n, arr[MAXN], f[MAXN];
//int find(int x) 
//{
//	if (f[x] == x)
//	{
//		return x;
//	}
//	return f[x] = find(f[x]);
//}
//void init() 
//{
//	for (int i = 1; i < MAXN; i++)
//	{
//		f[i] = i;
//	}
//}
//int main() 
//{
//	cin >> n;
//	init();
//	for (int i = 1; i <= n; i++) 
//	{
//		scanf("%d", &arr[i]);
//		arr[i] = find(arr[i]);
//		f[arr[i]] = find(arr[i] + 1);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//C-3
//#include<bits/stdc++.h>
//using namespace std;
//map<string, int> mp;
//int n, m;
//int main()
//{
//	cin >> n;
//	int i = 0;
//	string s;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		mp[s] = 1;
//	}
//	cin >> m;
//	for (i = 0; i < m; i++)
//	{
//		cin >> s;
//		if (mp[s] >= 2)
//		{
//			cout << "REPEAT\n";
//		}
//		else if (mp[s] == 1)
//		{
//			cout << "OK\n";
//			mp[s]++;
//		}
//		else if (mp[s] == 0)
//		{
//			cout << "WRONG\n";
//		}
//	}
//	return 0;
//}

//D-4
#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
ld t, n, c, s;
ld sum1 = 0, sum2 = 0;
int main()
{
	cin >> t;
	while (t--)
	{
		sum1 = sum2 = 0;
		cin >> n >> c;
		ld i = 0;
		for (i = 0; i < n; i++)
		{
			cin >> s;
			sum1 += s;
			sum2 += (s * s);
		}
		cout << ll(((sqrt(sum1 * sum1 + n * c - n * sum2) - sum1)) / (2*n)) << endl;
	}
	return 0;
}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int t;
//double a[200200];
//int main() 
//{
//	cin >> t;
//	while (t--) 
//	{
//		int n;
//		double d, h, ans = 0;
//		cin >> n >> d >> h;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 2; i <= n; i++)
//		{
//			if (a[i] - a[i - 1] > h)
//			{
//				ans += d * h / 2.0;
//			}
//			else
//			{
//				double dd = (h - (a[i] - a[i - 1])) * d / h;
//				ans += (dd + d) * (a[i] - a[i - 1]) / 2.0;
//			}
//		}
//		ans += d * h / 2.0;
//		printf("%.6lf\n", ans);
//	}
//	return 0;
//}


//G-7
//#include<bits/stdc++.h>
//using namespace std;
//char arr[100][100];
//int t, n, m;
//void dfs(int i, int j)
//{
//    if (arr[i + 1][j] == 'o' || (i + 1) == n || arr[i + 1][j] == '*')
//    {
//        return;
//    }
//    else
//    {
//        swap(arr[i][j], arr[i + 1][j]);
//        dfs(i + 1, j);
//    }
//}
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> n >> m;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                cin >> arr[i][j];
//            }
//        }
//        for (int i = n - 2; i >= 0; i--)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (arr[i][j] == '*')
//                {
//                    dfs(i, j);
//                }
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                cout << arr[i][j];
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}

