


//#include<bits/stdc++.h>
//using namespace std;
//int t;
//string s;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		set<char> st;
//		map<char, int> mp;
//		cin >> s;
//		int i;
//		int first = 0, second = 0;
//		for (i = 0; i < s.size(); i++)
//		{
//			st.insert(s[i]);
//			mp[s[i]]++;
//		}
//		if (st.size() != 2)
//		{
//			cout << "No\n";
//		}
//		else
//		{
//			auto it1 = st.begin();
//			auto it2 = st.end();
//			it2--;
//			first = mp[*it1];
//			second = mp[*it2];
//			int _min = min(first, second);
//			int _max = max(first, second);
//			if (_min == 1 && _max == 3)
//			{
//				cout << "Yes\n";
//			}
//			else
//			{
//				cout << "No\n";
//			}
//		}
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int n, q;
//string s;
//int main()
//{
//	cin >> n >> q;
//	while (q--)
//	{
//		int cur = 1;
//		cin >> s;
//		int i;
//		for (i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'R')
//			{
//				cur *= 2;
//			}
//			else
//			{
//				cur = cur * 2 - 1;
//			}
//		}
//		cout << cur << "\n";
//	}
//	return 0;
//}
//

//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, m, q, k, s, t;
//vector<ll> date;
//vector<pair<ll,ll>> gap;
//map<ll, ll> mp1;
//int main()
//{
//	cin >> n >> m >> q;
//	ll i;
//	for (i = 0; i < q; i++)
//	{
//		cin >> t;
//		date.push_back(t);
//	}
//	for (i = 0; i < date.size() - 1; i++)
//	{
//		mp1[date[i + 1] - date[i] - 1]++;
//	}
//	if (date[date.size() - 1] != n)
//	{
//		mp1[n - date[date.size() - 1]]++;
//	}
//	for (i = 0; i < m; i++)
//	{
//		cin >> k >> s;
//		gap.push_back(make_pair(pow(2, k), s));
//	}
//	for (i = 0; i < gap.size(); i++)
//	{
//
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;
	string temp1 = s1 + s1 + s1;
	string temp2;
	int i;
	for (i = 0; i < s2.size(); i++)
	{
		if (isupper(s2[i]))
		{
			temp2 += tolower(s2[i]);
		}
		else
		{
			temp2 += toupper(s2[i]);
		}
	}
	int pos1 = temp1.find(temp2);
	int pos2 = temp1.rfind(temp2);
	if (pos1 != -1 && pos2 != -1)
	{
		cout << "Yes\n";
		cout << min(pos1, pos2 - n) << endl;
	}
	else
	{
		cout << "No\n";
	}
	return 0;
}