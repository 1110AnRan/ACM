

//A
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, m;
//int a[100005];
//typedef struct Node
//{
//	int l;
//	int r;
//	int w;
//}tree;
//tree t[100005 * 8];
//void build(int l, int r, int index)
//{
//	t[index].l = l;
//	t[index].r = r;
//	if (l == r)
//	{
//		t[index].w = a[l];
//		return;
//	}
//	int mid = (l + r) / 2;
//	build(l, mid, index * 2);
//	build(mid + 1, r, index * 2 + 1);
//	t[index].w = min(t[index * 2].w, t[index * 2 + 1].w);
//}
//int query(int index, int l, int r)
//{
//	if (l <= t[index].l && r >= t[index].r)
//	{
//		return t[index].w;
//	}
//	if (r <= t[index * 2].r)
//	{
//		return query(2 * index, l, r);
//	}
//	else if (l >= t[2 * index + 1].l)
//	{
//		return query(2 * index + 1, l, r);
//	}
//	else
//	{
//		return min(query(2 * index, l, t[2 * index].r), query(2 * index + 1, t[2 * index + 1].l, r));
//	}
//}
//int main()
//{
//	cin >> m >> n;
//	int i;
//	for (i = 1; i <= m; ++i)
//	{
//		cin >> a[i];
//	}
//	build(1, m, 1);
//	int x, y;
//	for (i = 0; i < n; ++i)
//	{
//		cin >> x >> y;
//		cout << query(1, x, y) << " ";
//	}
//	return 0;
//}


//B
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//set<int> st;
//map<int, int>mp;
//int s1 = INT_MAX, s2 = INT_MIN;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//	{
//		int m;
//		cin >> m;
//		s1 = min(s1, m);
//		s2 = max(s2, m);
//		st.insert(m);
//		mp[m]++;
//	}
//	if (n % 2 == 1)
//	{
//		cout << "NO";
//		return 0;
//	}
//	if (st.size() != 2)
//	{
//		cout << "NO";
//	}
//	else
//	{
//		if (mp[s1] == mp[s2] && mp[s1] * 2 == n)
//		{
//			cout << "YES\n";
//			cout << s1 << " " << s2;
//		}
//		else
//		{
//			cout << "NO";
//		}
//	}
//	return 0;
//}


//C
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int a, b, x;
//string s;
//vector<string> v;
//int main()
//{
//	cin >> a >> b >> x;
//	int i;
//	for (i = 0; i < a; ++i)
//	{
//		s += "0";
//	}
//	if (x % 2 == 1)
//	{
//		int cnt1 = x / 2;
//		int cnt2 = b - x / 2;
//		for (i = 0; i < cnt1; ++i)
//		{
//			size_t pos = s.find("00", 0);
//			s.insert(pos + 1, "1");
//		}
//		for (i = 0; i < cnt2; ++i)
//		{
//			s += "1";
//		}
//	}
//	else
//	{
//		int cnt1 = x / 2;
//		for (i = 0; i < x / 2 - 1; ++i)
//		{
//			v.push_back("1");
//		}
//		string t;
//		for (i = 0; i < b - x / 2 + 1; ++i)
//		{
//			t += "1";
//		}
//		v.push_back(t);
//		int index = 0;
//		while (index != v.size())
//		{
//			int pos = s.find("00", 0);
//			s.insert(pos + 1, v[index]);
//			++index;
//		}
//	}
//	cout << s;
//	return 0;
//}

//C
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    int a, b, x, s;
//    int m, n;
//    cin >> a >> b >> x;
//    s = a + b;
//    if (a > b)
//    {
//        m = 0;
//        n = 1;
//    }
//    else
//    {
//        m = 1;
//        n = 0;
//        swap(a, b);
//    }
//    for (int i = 0; i < x / 2; i++) 
//    { 
//        cout << m << n;
//        a--;
//        b--;
//    }
//    if (x % 2 == 0)
//    {
//        while (b--) cout << n;
//        while (a--) cout << m;
//    }
//    else 
//    {
//        while (a--) cout << m;
//        while (b--) cout << n;
//    }
//    return 0;
//}



//E
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, t;
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> n;
//        int res = 0;
//        bool flag = true;
//        while (n != 1)
//        {
//            if (n % 2 == 0)
//            {
//                n = n / 2;
//            }
//            else if (n % 3 == 0)
//            {
//                n = (n / 3) * 2;
//            }
//            else if (n % 5 == 0)
//            {
//                n = (n / 5) * 4;
//            }
//            else
//            {
//                flag = false;
//                break;
//            }
//            res++;
//        }
//        if (flag)
//        {
//            cout << res << endl;
//        }
//        else
//        {
//            cout << -1 << endl;
//        }
//    }
//    return 0;
//}