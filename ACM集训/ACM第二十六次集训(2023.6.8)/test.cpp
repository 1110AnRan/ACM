
//6月个人训练赛3

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		string s1;
//		int x1;
//		cin >> s1 >> x1;
//		string s2;
//		int x2;
//		cin >> s2 >> x2;
//		if (s1.size() + x1 > s2.size() + x2)
//		{
//			cout << ">" << endl;
//		}
//		else if (s1.size() + x1 == s2.size() + x2)
//		{
//			int max = fmax(s1.size(), s2.size());
//			while (s1.size() < max)
//			{
//				s1 += "0";
//			}
//			while (s2.size() < max)
//			{
//				s2 += "0";
//			}
//			int ret = s1.compare(s2);
//			if (ret == 1)
//			{
//				cout << ">" << endl;
//			}
//			else if (ret == 0)
//			{
//				cout << "=" << endl;
//			}
//			else
//			{
//				cout << "<" << endl;
//			}
//		}
//		else
//		{
//			cout << "<" << endl;
//		}
//	}
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	
//	return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int a, b;
//		cin >> a >> b;
//		if ((a + b) % 2 == 0)
//		{
//			int c = (a + b) / 2;
//			int i = 0;
//			while (fabs(a - i) + fabs((b - a) / 2 + i) != c)
//			{
//				i++;
//			}
//			cout << i << " " << c - i << endl;
//		}
//		else
//		{
//			cout << "-1 -1" << endl;
//		}
//	}
//	return 0;
//}