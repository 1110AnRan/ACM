


//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int k, m = 0 , flag = 1;
//    cin >> k;
//    while (flag)
//    {
//        m++;
//        int index = 0;
//        for (int i = 0; i < k; i++)
//        {
//            index = (index + m - 1) % (2 * k - i);
//            if (index < k)
//            {
//                break;
//            }
//            if (i == k - 1)
//            {
//                flag = 0;
//            }
//        }
//    }
//    cout << m--;
//    return 0;
//}


//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int v[30], p[30];
//int w[30];
//int dp[30005];
//int main()
//{
//	cin >> n >> m;
//	int i;
//	for (i = 1; i <= m; ++i)
//	{
//		cin >> v[i] >> p[i];
//		w[i] = v[i] * p[i];
//	}
//	for (i = 1; i <= m; ++i)
//	{
//		for (int j = n; j >= v[i]; --j)
//		{
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	if (s.size() == 1)
//	{
//		if (s[0] == '0')
//		{
//			cout << "zero\n";
//		}
//		else if (s[0] == '1')
//		{
//			cout << "one\n";
//		}
//		else if (s[0] == '2')
//		{
//			cout << "two\n";
//		}
//		else if (s[0] == '3')
//		{
//			cout << "three\n";
//		}
//		else if (s[0] == '4')
//		{
//			cout << "four\n";
//		}
//		else if (s[0] == '5')
//		{
//			cout << "five\n";
//		}
//		else if (s[0] == '6')
//		{
//			cout << "six\n";
//		}
//		else if (s[0] == '7')
//		{
//			cout << "seven\n";
//		}
//		else if (s[0] == '8')
//		{
//			cout << "eight\n";
//		}
//		else if (s[0] == '9')
//		{
//			cout << "nine\n";
//		}
//	}
//	else
//	{
//		if (s[0] == '1')
//		{
//			if (s[1] == '0')
//			{
//				cout << "ten\n";
//			}
//			else if (s[1] == '1')
//			{
//				cout << "eleven\n";
//			}
//			else if (s[1] == '2')
//			{
//				cout << "twelve	\n";
//			}
//			else if (s[1] == '3')
//			{
//				cout << "thirteen\n";
//			}
//			else if (s[1] == '4')
//			{
//				cout << "fourteen\n";
//			}
//			else if (s[1] == '5')
//			{
//				cout << "fifteen\n";
//			}
//			else if (s[1] == '6')
//			{
//				cout << "sixteen\n";
//			}
//			else if (s[1] == '7')
//			{
//				cout << "seventeen\n";
//			}
//			else if (s[1] == '8')
//			{
//				cout << "eighteen\n";
//			}
//			else if (s[1] == '9')
//			{
//				cout << "nineteen\n";
//			}
//		}
//		else
//		{
//			if (s[0] == '2')
//			{
//				cout << "twenty";
//			}
//			else if (s[0] == '3')
//			{
//				cout << "thirty";
//			}
//			else if (s[0] == '4')
//			{
//				cout << "forty";
//			}
//			else if (s[0] == '5')
//			{
//				cout << "fifty";
//			}
//			else if (s[0] == '6')
//			{
//				cout << "sixty";
//			}
//			else if (s[0] == '7')
//			{
//				cout << "seventy";
//			}
//			else if (s[0] == '8')
//			{
//				cout << "eighty";
//			}
//			else if (s[0] == '9')
//			{
//				cout << "ninety";
//			}
//			if (s[1] == '1')
//			{
//				cout << "-one\n";
//			}
//			else if (s[1] == '2')
//			{
//				cout << "-two\n";
//			}
//			else if (s[1] == '3')
//			{
//				cout << "-three\n";
//			}
//			else if (s[1] == '4')
//			{
//				cout << "-four\n";
//			}
//			else if (s[1] == '5')
//			{
//				cout << "-five\n";
//			}
//			else if (s[1] == '6')
//			{
//				cout << "-six\n";
//			}
//			else if (s[1] == '7')
//			{
//				cout << "-seven\n";
//			}
//			else if (s[1] == '8')
//			{
//				cout << "-eight\n";
//			}
//			else if (s[1] == '9')
//			{
//				cout << "-nine\n";
//			}
//		}
//	}
//	return 0;
//}


