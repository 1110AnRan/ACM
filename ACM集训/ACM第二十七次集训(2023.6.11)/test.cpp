
//6月个人训练赛6

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	int i = 0;
//	int j = 0;
//	int countaiya = 0;
//	int countyeah = 0;
//	map<char, int> mp;
//	for (i = 0; i < b.size(); i++)
//	{
//		mp[b[i]]++;
//	}
//	for (i = 0; i < a.size(); i++)
//	{
//		if (mp[a[i]])
//		{
//			countyeah++;
//			mp[a[i]]--;
//			a.erase(i, 1);
//			i--;
//		}
//	}
//	for (i = 0; i < a.size(); i++)
//	{
//		if (mp[a[i] + 32])
//		{
//			countaiya++;
//			mp[a[i] + 32]--;
//			a.erase(i, 1);
//			i--;
//		}
//		else if (mp[a[i] - 32])
//		{
//			countaiya++;
//			mp[a[i] - 32]--;
//			a.erase(i, 1);
//			i--;
//		}
//	}
//	cout << countyeah << " " << countaiya << endl;
//	return 0;
//}


//C-3
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	vector<int> v;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		v.push_back(n);
//	}
//	sort(v.begin(), v.end());
//	int count = 0;
//	int i = 0;
//	while (i < v.size() - 1)
//	{
//		if (v[i] == v[i + 1])
//		{
//			count++;
//			i += 2;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	cout << count / 2 << endl;
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int m, n, ans;
//    cin >> m >> n;
//    ans = 0;
//    while ((m >= 1 && n >= 2) || (m >= 2 && n >= 1))
//    {
//        if (m < n)
//        {
//            m--;
//            n = n - 2;
//            ans++;
//        }
//        else
//        {
//            m = m - 2;
//            n--;
//            ans++;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}


//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string a;
//	cin >> a;
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	int flag3 = 0;
//	if (a[0] >= 'a' && a[0] <= 'z')
//	{
//		flag1 = 1;
//	}
//	if (flag1)
//	{
//		for (i = 1; i < a.size(); i++)
//		{
//			if (a[i] >= 'a' && a[i] <= 'z')
//			{
//				break;
//			}
//		}
//		if (i == a.size())
//		{
//			flag2 = 1;
//		}
//	}
//	else
//	{
//		for (i = 0; i < a.size(); i++)
//		{
//			if (a[i] >= 'a' && a[i] <= 'z')
//			{
//				break;
//			}
//		}
//		if (i == a.size())
//		{
//			flag3 = 1;
//		}
//	}
//	if (flag3 || (flag1 && flag2))
//	{
//		if (flag3)
//		{
//			for (i = 0; i < a.size(); i++)
//			{
//				cout << char(a[i] + 32);
//			}
//			cout << endl;
//		}
//		if (flag1 && flag2)
//		{
//			cout << char(a[0] - 32);
//			for (i = 1; i < a.size(); i++)
//			{
//				cout << char(a[i] + 32);
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		cout << a << endl;
//	}
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//
//	return 0;
//}