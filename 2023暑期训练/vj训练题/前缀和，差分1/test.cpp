


//C-3
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	cin.tie(0)->sync_with_stdio(0);
//	cin >> s1 >> s2;
//	int i = 0;
//	int max = 0;
//	while (true)
//	{
//		i++;
//		if (i >= s1.size() || i >= s2.size())
//		{
//			break;
//		}
//		string c = s1.substr(0, i);
//		string d = s2.substr(s2.size() - i,i);
//		if (c == d)
//		{
//			if (max < i)
//			{
//				max = i;
//			}
//		}
//	}
//	i = 0;
//	while (true)
//	{
//		i++;
//		if (i >= s1.size() || i >= s2.size())
//		{
//			break;
//		}
//		string c = s2.substr(0, i);
//		string d = s1.substr(s1.size() - i, i);
//		if (c == d)
//		{
//			if (max < i)
//			{
//				max = i;
//				break;
//			}
//		}
//	}
//	cout << max;
//	return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v1;
//	while (n--)
//	{
//		int m;
//		cin >> m;
//		v1.push_back(m);
//	}
//	vector<int> v2(v1.size());
//	v2[0] = v1[0];
//	int i = 0;
//	for (i = 1; i < v1.size(); i++)
//	{
//		if (v2[i - 1] > 0)
//		{
//			v2[i] = v2[i - 1] + v1[i];
//		}
//		else
//		{
//			v2[i] = v1[i];
//		}
//	}
//	int max = v2[0];
//	for (i = 1; i < v1.size(); i++)
//	{
//		if (max < v2[i])
//		{
//			max = v2[i];
//		}
//	}
//	cout << max;
//	return 0;
//}