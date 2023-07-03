#define _CRT_SECURE_NO_WARNINGS 1

//5月个人训练赛5

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m, s1, s2, d;
//		cin >> n >> m >> s1 >> s2 >> d;
//		if (fabs(n - s1) + fabs(m - s2) > d)
//		{
//			if (((s1 + d < n) && (s2 - d > 1)) || ((s1 - d > 1) && (s2 + d < m)))
//			{
//				cout << n - 1 + m - 1 << endl;
//			}
//			else
//			{
//				cout << -1 << endl;
//			}
//		}
//		else
//		{
//			cout << -1 << endl;
//		}
//	}
//	return 0;
//}


//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		long long  a, b, c, d;
//		cin >> a >> b >> c >> d;
//
//		long long ad = a * d;
//		long long cb = c * b;
//
//		long long  ans = 0;
//
//		if ((a == 0 && c != 0) || (a != 0 && c == 0))
//		{
//			ans = 1;
//		}
//		else if (ad != cb)
//		{
//			long long mx = max(ad, cb);
//			long long mn = min(ad, cb);
//
//			if (mx % mn == 0)
//				ans = 1;
//			else
//				ans = 2;
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//	}
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//void swap(char& x, char& y)
//{
//	char temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	string x;
//	int t;
//	cin >> x >> t;
//	while (t--)
//	{
//		int l, r, k;
//		string s = "";
//		cin >> l >> r >> k;
//		k %= (r - l + 1);
//		for (int i = l - 1; i < r; i++)
//		{
//			s += x[i];
//		}
//		x.erase(l - 1, r - l + 1);
//		int pos = s.size() - k;
//		int begin = 0, end = pos - 1;
//		while (begin <= end)
//		{
//			swap(s[begin], s[end]);
//			begin++;
//			end--;
//		}
//		begin = pos, end = s.size() - 1;
//		while (begin <= end)
//		{
//			swap(s[begin], s[end]);
//			begin++;
//			end--;
//		}
//		begin = 0, end = s.size() - 1;
//		while (begin <= end)
//		{
//			swap(s[begin], s[end]);
//			begin++;
//			end--;
//		}
//		x.insert(l - 1, s);
//	}
//	cout << x << endl;
//	return 0;
//}

//G-7
//#include <bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int t, n;
//int a[N], b[N];
//
//int main()
//{
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		int cnta = 0, cntb = 0;
//		for (int i = 1; i <= n; i++) 
//		{
//			cin >> a[i];
//			cnta += (a[i] == 1);
//		}
//		for (int i = 1; i <= n; i++) 
//		{
//			cin >> b[i];
//			cntb += (b[i] == 1);
//		}
//		bool flag = true;
//		int cnt = 0;
//		for (int i = 1; i <= n; i++) 
//		{
//			if (a[i] != b[i]) 
//			{
//				flag = false;
//				cnt++;
//			}
//		}
//		if (flag) 
//		{
//			cout << 0 << '\n';
//			continue;
//		}
//		cout << min(abs(cnta - cntb) + 1, cnt) << '\n';
//	}
//	return 0;
//}