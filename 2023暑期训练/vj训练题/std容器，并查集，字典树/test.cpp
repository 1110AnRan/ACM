//A-1



//B-2
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
//		set<int> s;
//		for (int i = 1; i <= n; i++) 
//		{
//			int a;
//			cin >> a;
//			s.insert(a);
//		}
//		cout << s.size() << endl;
//	}
//	return 0;
//}

//C-3
//#include<iostream>
//#include<map>
//#include<string>
//#include<ios>
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio;
//	cin.tie(0);
//	cout.tie(0);
//	map<string, string> mp;
//	string s;
//	while (getline(cin, s) && s.size() != 0)
//	{
//		int pos = s.find(' ');
//		string s1 = s.substr(0, pos);
//		string s2 = s.substr(pos + 1, s.size());
//		mp[s2] = s1;
//	}
//	string s3;
//	while (scanf("%s",s3))
//	{
//		if (mp.count(s3) == 0)
//		{
//			printf("ch\n");
//		}
//		else
//		{
//			printf("%s", mp[s3]);
//		}
//	}
//	return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	stack<string> st;
//	map<string, int> mp;
//	while (n--)
//	{
//		string s2;
//		cin >> s2;
//		st.push(s2);
//	}
//	while (!st.empty())
//	{
//		if (mp[st.top()] == 0)
//		{
//			cout << st.top() << endl;
//			mp[st.top()] = 1;
//			st.pop();
//		}
//		else
//		{
//			st.pop();
//		}
//	}
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//map<string, string> mp;
//int n, m;
//string s1, s2;
//string find(string x) 
//{
//    if (mp[x] == x)
//    {
//        return x;
//    }
//    return mp[x] = find(mp[x]);
//}
//int main() 
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) 
//    {
//        cin >> s1;
//        mp[s1] = s1;
//    }
//    for (int i = 1; i <= m; i++) 
//    {
//        cin >> s1 >> s2;
//        string x1 = find(s1), x2 = find(s2);
//        if (x1 != x2)
//        {
//            mp[x1] = x2;
//        }
//    }
//    int k; 
//    cin >> k;
//    while (k--) 
//    {
//        cin >> s1 >> s2;
//        string x1 = find(s1), x2 = find(s2);
//        if (x1 == x2)
//        {
//            cout << "Yes.\n";
//        }
//        else
//        {
//            cout << "No.\n";
//        }
//    }
//    return 0;
//}