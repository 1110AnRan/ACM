
//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int t, n;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		if (n % 2 == 0)
//		{
//			cout << "NO\n";
//			continue;
//		}
//		cout << "YES\n";
//		int a = 1, b = 2 * n;
//		for (a = 1; a <= n; a += 2,b--)
//		{
//			cout << a << " " << b << endl;
//		}
//		for (a = 2; a <= n; a += 2,b--)
//		{
//			if (a % 2 == 0)
//			{
//				cout << a << " " << b << endl;
//			}
//		}
//	}
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll t, x;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> x;
//		if (x % 2 == 1)
//		{
//			cout << "-1\n";
//			continue;
//		}
//		if (((x / 2) & x) != 0)
//		{
//			cout << "-1\n";
//			continue;
//		}
//		cout << x / 2 << " " << x / 2 + x << endl;
//	}
//	return 0;
//}


//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int t, n, m;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		if (n == 1 || m == 1)
//		{
//			cout << "YES\n";
//			continue;
//		}
//		if (m >= n)
//		{
//			cout << "NO\n";
//			continue;
//		}
//		int i = 0;
//		int flag = 0;
//		for (i = 2; i * i <= n && i <= m; i++)
//		{
//			if (n % i == 0)
//			{
//				flag = 1;
//				cout << "NO\n";
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << "YES\n";
//		}
//	}
//	return 0;
//}

//H-8
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 200005;
//ll t, n, nums[MAXN];
//vector<ll> v;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			cin >> nums[i];
//			v.push_back(i - nums[i]);
//		}
//		ll sum = 0, cnt = 0;
//		for (auto j : v)
//		{
//			if (j > 0)
//			{
//				sum += j;
//				cnt++;
//			}
//		}
//		if (cnt != 0)
//		{
//			cout << sum / cnt << endl;
//		}
//		else
//		{
//			cout << 0 << endl;
//		}
//		v.clear();
//	}
//	return 0;
//}