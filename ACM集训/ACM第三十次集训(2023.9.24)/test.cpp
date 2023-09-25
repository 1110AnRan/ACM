

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//string s;
//string ans;
//int main()
//{
//	cin >> s;
//	int pos = s.find('@', 0);
//	while (pos != -1 && pos != 0)
//	{
//		ans += s.substr(pos - 1, 3) + ",";
//		s.erase(pos - 1, 3);
//		pos = s.find('@', 0);
//	}
//	if (s.size() != 0)
//	{
//		cout << "No solution";
//	}
//	else
//	{
//		ans.erase(ans.size() - 1, 1);
//		cout << ans;
//	}
//	return 0;
//}

//C-3
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int t;
//ll a, b;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b;
//		if (b == 1)
//		{
//			cout << "NO\n";
//			continue;
//		}
//		cout << "YES\n";
//		ll x = a, y = a * b, z = (b + 1) * a;
//		if (x != y)
//		{
//			cout << x << " " << y << " " << z << endl;
//		}
//	}
//	return 0;
//}


//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int arr[10005];
//int n, sum = 0;
//int main()
//{
//	cin >> n;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	if (n == 1)
//	{
//		cout << arr[1] << endl;
//	}
//	else
//	{
//		for (i = 1; i < n; i++)
//		{
//			sort(arr + i, arr + n + 1);
//			arr[i + 1] = arr[i + 1] + arr[i];
//			sum += arr[i + 1];
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, m;
//ll srci, dsti;
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
//
//		if (root1 != root2)
//		{
//			_set[root2] += _set[root1];
//			_set[root1] = root2;
//		}
//	}
//
//	size_t SetCount()
//	{
//		size_t Count = 0;
//		for (auto index : _set)
//		{
//			if (index < 0)
//			{
//				Count++;
//			}
//		}
//		return Count;
//	}
//
//	int FindAns()
//	{
//		int cnt = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (_set[i] < 0)
//			{
//				cnt++;
//			}
//		}
//		return cnt;
//	}
//private:
//	std::vector<int> _set;
//};
//int main()
//{
//	while (cin >> n >> m && n != 0)
//	{		
//		UnionFindSet ufs(1001);
//		while (m--)
//		{
//			cin >> srci >> dsti;
//			ufs.Union(srci, dsti);
//		}
//		cout << ufs.FindAns() - 1 << endl;
//	}
//	return 0;
//}