

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, w;
//int times[10005], values[10005];
//int dp[10005];
//int ufs[10005];
//int find(int x)
//{
//	if (ufs[x] == x)
//	{
//		return x;
//	}
//	return find(ufs[x]);
//}
//void Union(int u,int v)
//{
//	int ux = find(u);
//	int vx = find(v);
//	if (ux != vx)
//	{
//		ufs[ux] = vx;
//		times[vx] += times[ux];
//		values[vx] += values[ux];
//	}
//}
//int main()
//{
//	cin >> n >> m >> w;
//	int i;
//	for (i = 1; i <= n; ++i)
//	{
//		cin >> times[i] >> values[i];
//		ufs[i] = i;
//	}
//	for (i = 1; i <= m; ++i)
//	{
//		int u, v;
//		cin >> u >> v;
//		Union(u, v);
//	}
//	for (i = 1; i <= n; ++i)
//	{
//		if (ufs[i] == i)
//		{
//			for (int j = w; j >= times[i]; j--)
//			{
//				dp[j] = max(dp[j], dp[j - times[i]] + values[i]);
//			}
//		}
//	}
//	cout << dp[w];
//	return 0;
//}

//C-3
//#include<bits/stdc++.h>
//using namespace std;
//typedef  long long LL;
//int main() 
//{
//    int c, m, x, t;
//    cin >> t;
//    while (t--) 
//    {
//        cin >> c >> m >> x;
//        cout << min(c, min(m, (c + m + x) / 3)) << endl;
//    }
//    return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, k, t;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> k;
//		ll ans = k;
//		ll gap = k / (n - 1);
//		ans += gap;
//		if (ans % n == 0)
//		{
//			cout << ans - 1 << endl;
//		}
//		else
//		{
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, p, q;
//class UnionFindSet
//{
//public:
//	UnionFindSet(int size)
//		:_set(size, -1)
//	{}
//
//	size_t FindRoot(int x)
//	{
//		while (_set[x] >= 0)
//		{
//			x = _set[x];
//		}
//		return x;
//	}
//
//	void Union(int x1, int x2)
//	{
//		int root1 = FindRoot(x1);
//		int root2 = FindRoot(x2);
//		if (root1 != root2)
//		{
//			_set[root2] += _set[root1];
//			_set[root1] = root2;
//		}
//	}
//	
//	int getanssize()
//	{
//		int ans = abs(_set[FindRoot(1)]);
//		return ans;
//	}
//private:
//	std::vector<int> _set;
//};
//int main()
//{
//	UnionFindSet ufs1(10005), ufs2(10005);
//	cin >> n >> m >> p >> q;
//	int i;
//	int u, v;
//	for (i = 0; i < p; ++i)
//	{
//		cin >> u >> v;
//		ufs1.Union(u, v);
//	}
//	for (i = 0; i < q; ++i)
//	{
//		cin >> u >> v;
//		ufs2.Union(abs(u), abs(v));
//	}
//	cout << min(ufs1.getanssize(), ufs2.getanssize()) << endl;
//	return 0;
//}



//F-6
//#include<bits/stdc++.h>
//using namespace std;
//int t, n;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		map<int, int> mymap;
//		int i;
//		int _min = INT_MAX;
//		for (i = 0; i < n; ++i)
//		{
//			int m;
//			cin >> m;
//			_min = min(_min, m);
//			mymap[m]++;
//		}
//		int p = mymap[_min];
//		if (p == n && _min != 0)
//		{
//			cout << "-1\n";
//		}
//		else
//		{
//			int gap = n - p;
//			cout << gap << endl;
//		}
//	}
//	return 0;
//}