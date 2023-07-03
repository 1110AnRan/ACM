#define _CRT_SECURE_NO_WARNINGS 1

//5月个人训练赛4

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int m;
//		cin >> m;
//		if (m == 1)
//		{
//			cout << "1\n1 2" << endl;
//		}
//		else
//		{
//			int flag = m % 2;
//			int number = ceil(m / 2.0);
//			cout << number << endl;
//			int a = 1;
//			int b = m*3;
//			for (int i = 1; i <= m / 2; i++)
//			{
//				if (i != 1)
//				{
//					cout << " ";
//				}
//				cout << a << " " << b;
//				a += 3;
//				b -= 3;
//			}
//			if (flag == 1)
//			{
//				cout << " " << a << " " << b;
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n;
//        char c;
//        string s;
//        cin >> n >> c >> s;
//        s += s;
//        int cnt = 0, maxv = 0, flag = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == c)
//            {
//                flag = 1;
//            }
//            if (s[i] == 'g')
//            {
//                flag = 0;
//                maxv = max(maxv, cnt);
//                cnt = 0;
//            }
//            if (flag == 1)
//            {
//                cnt++;
//            }
//        }
//        cout << maxv << endl;
//    }
//}