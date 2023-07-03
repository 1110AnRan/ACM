//6月个人训练赛2


//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	int a[10];
//	while (cin >> n)
//	{
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++)
//		{
//			int x;
//			cin >> x;
//			a[x]++;
//		}
//		int y = a[5] / 9;
//		if (y == 0)
//		{
//			if (a[0] == 0)
//			{
//				cout << -1 << endl;
//			}
//			else
//			{
//				cout << 0 << endl;
//			}
//			continue;
//		}
//		if (a[0] != 0)
//		{
//			for (int i = 0; i < y * 9; i++)
//			{
//				cout << 5;
//			}
//			for (int i = 0; i < a[0]; i++)
//			{
//				cout << 0;
//			}
//			cout << endl;
//		}
//		else
//		{
//			cout << -1 << endl;
//		}
//
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int upper[105],lower[105];
//    int i, flag, n;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//            cin >> upper[i] >> lower[i];
//        int sum1 = 0, sum2 = 0;
//        for (i = 0 ;i < n; i++)
//        {
//            if (upper[i] % 2 != 0)
//            {
//                sum1 += upper[i];
//            }
//            if (lower[i] % 2 != 0)
//            {
//                sum2 += lower[i];
//            }
//        }
//        flag = 0;
//        if ((sum1 + sum2) % 2 != 0)
//            cout<<"-1"<<endl;
//        else if(sum1 % 2 == 0 && sum2 % 2 == 0)
//            cout<<"0"<<endl;
//        else if(sum1 % 2 != 0 && sum2 % 2 != 0)
//        {
//            for (i = 0; i < n; i++)
//            {
//                if (upper[i] % 2 != 0)
//                {
//                    if (lower[i] % 2 == 0)
//                    {
//                        flag = 1;
//                         break;
//                    }
//                }
//                if (lower[i] % 2 != 0)
//                {
//                    if (upper[i] % 2 == 0)
//                    {
//                        flag = 1;
//                        break;
//                    }
//                }
//            }
//            if (flag)
//            {
//                cout << "1" << endl;
//            }
//            else
//            {
//                cout << "-1" << endl;
//            }
//        }
//    }
//    return 0;
//}


//D-4
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<int> v;
	int minindex = -1;
	int maxindex = -1;
	int i = 0;
	for (i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		if (n == 1)
		{
			minindex = i;
		}
		if (n == t)
		{
			maxindex = i;
		}
		v.push_back(n);
	}
	if (minindex < maxindex)
	{
		int flag = 0;
		for (i = minindex; i < maxindex - 1; i++)
		{
			if (v[i] > v[i + 1])
			{
				flag = 1;
				break;
			}
		}
		if (minindex != 0 && flag == 1)
		{
			cout << "no"  << endl;
		}
		else if(minindex == 0 && flag == 1 && maxindex != t-1)
		{
			cout << "no" << endl;
		}

	}
	else
	{
		for (i = 0; i < v.size() - 1; i++)
		{
			if (v[i] < v[i + 1])
			{
				cout << "no" << endl;
				break;
			}
		}
		if (i == v.size() - 1 && maxindex == 0 && minindex == t - 1)
		{
			cout << "yes" << endl;
			cout << 1 << " " << t << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}



	return 0;
}