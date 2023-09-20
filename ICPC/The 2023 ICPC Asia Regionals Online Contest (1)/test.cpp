

//A Qualifiers Ranking Rules
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//string s;
//set<string> _myset1, _myset2, _myset3;
//vector<string> v1, v2, v3;
//int main()
//{
//	cin >> n >> m;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		if (_myset1.find(s) == _myset1.end())
//		{
//			v1.push_back(s);
//			_myset1.insert(s);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		cin >> s;
//		if (_myset2.find(s) == _myset2.end())
//		{
//			v2.push_back(s);
//			_myset2.insert(s);
//		}
//	}
//	
//	for (i = 0; i < min(v1.size(), v2.size()); i++)
//	{
//		if (v1[i] == v2[i])
//		{
//			_myset3.insert(v1[i]);
//			cout << v1[i] << endl;
//		}
//		else
//		{
//			if (_myset3.find(v1[i]) == _myset3.end())
//			{
//				_myset3.insert(v1[i]);
//				cout << v1[i] << endl;
//			}
//			if (_myset3.find(v2[i]) ==  _myset3.end())
//			{
//				_myset3.insert(v2[i]);
//				cout << v2[i] << endl;
//			}
//		}
//	}
//	for (i = min(v1.size(), v2.size()); i < max(v1.size(), v2.size()); i++)
//	{
//		if (v1.size() > v2.size())
//		{
//			if (_myset3.find(v1[i]) == _myset3.end())
//			{
//				_myset3.insert(v1[i]);
//				cout << v1[i] << endl;
//			}
//		}
//		else
//		{
//			if (_myset3.find(v2[i]) == _myset3.end())
//			{
//				_myset3.insert(v2[i]);
//				cout << v2[i] << endl;
//			}
//		}
//	}
//	return 0;
//}

//C Multiply Then Plus
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, q, choice, k, a, b, l, r;
//ll arr1[500005], arr2[500005], x;
//int main()
//{
//	cin >> n >> q;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> arr1[i] >> arr2[i];
//	}
//	while (q--)
//	{
//		cin >> choice;
//		if (choice == 1)
//		{
//			cin >> k >> a >> b;
//			arr1[k] = a;
//			arr2[k] = b;
//		}
//		else
//		{
//			ll _max = 0;
//			cin >> x >> l >> r;
//			for (int j = l; j <= r; j++)
//			{
//				_max = max(arr1[j] * x + arr2[j], _max);
//			}
//			cout << _max << endl;
//		}
//	}
//	return 0;
//}

//D Transitivity
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, srci, dsti;
//vector<vector<char>> matrix;
//void init()
//{
//	matrix.resize(n + 1);
//	for (auto& i : matrix)
//	{
//		i.resize(n + 1, '0');
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	init();
//	while (m--)
//	{
//		cin >> srci >> dsti;
//		matrix[srci][dsti] = matrix[dsti][srci] = '1';
//	}
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i != j && matrix[i][j] == '0')
//			{
//				matrix[i][j] = matrix[j][i] = '1';
//				cnt++;
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}



//L KaChang!
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll N = 1e5 + 5;
//ll n, m, t;
//int main()
//{
//	cin >> n >> t;
//	ll _max = 0;
//	while (n--)
//	{
//		cin >> m;
//		_max = max(m, _max);
//	}
//	ll ret = _max / t;
//	if (_max % t)
//	{
//		ret++;
//	}
//	if (ret < 2)
//	{
//		cout << 2;
//	}
//	else
//	{
//		cout << ret;
//	}
//	return 0;
//}

