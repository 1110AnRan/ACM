#define _CRT_SECURE_NO_WARNINGS 1

//5月个人训练赛3

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, k;
//		cin >> n >> k;
//		vector<int> arr(n);
//		map<int, int> l, r, mp;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			if (mp.count(arr[i]) == 0)
//			{
//				mp[arr[i]] = 1;
//				l[arr[i]] = r[arr[i]] = i;
//			}
//			else
//			{
//				l[arr[i]] = min(l[arr[i]], i);
//				r[arr[i]] = max(r[arr[i]], i);
//			}
//		}
//		while (k--)
//		{
//			int a, b;
//			cin >> a >> b;
//			if (mp.count(a) && mp.count(b) && l[a] < r[b])
//				cout << "YES" << endl;
//			else
//				cout << "NO" << endl;
//		}
//	}
//	return 0;
//}

//B-2


//D-4
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;	while (n--)
	{
		int a, b, m;
		cin >> a >> b;
		map<int, int> mp1;
		vector<int> v;
		set<int> s;
		int i = 0;
		for (i = 0; i < a; i++)
		{
			cin >> m;
			v.push_back(m);
		}
		for (i = 0; i < a; i++)
		{
			cin >> m;
			s.insert(m);
			mp1[m]++;
		}


	}
	return 0;
}



//F-6
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string str;
//		cin >> str;
//		set<char> se;
//		int i = 0;
//		int count = 0;
//		for (i = 0; i < str.size(); i++)
//		{
//			se.insert(str[i]);
//			if (se.size() > 3)
//			{
//				se.clear();
//				count++;
//				se.insert(str[i]);
//			}
//		}
//		if (se.size())
//		{
//			count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}