#define _CRT_SECURE_NO_WARNINGS 1

//7-1
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//int main()
//{
//	string s;
//	string::iterator ret,it;
//	getline(cin, s);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < s.size(); i++)
//	{
//		if (!(s[i] >= '0' && s[i] <= '9')&&s[i]!=' ')
//		{
//			ret = find(s.begin(), s.end(), ' ');
//			if (!(*(ret - 1) >= '0' && *(ret - 1) <= '9'))
//			{
//				cout << "? + ";
//				if (*(ret + 1) == '-')
//				{
//					cout << " ? ";
//				}
//				else
//				{
//					for (it = ret + 1; it != s.end(); it++)
//					{
//						cout << *it;
//					}
//				}
//				cout << " = ?";
//			}
//			else if (!(*(ret + 1) >= '0' && *(ret + 1) <= '9'))
//			{
//				if (s[0] == '-')
//				{
//					cout << "?";
//				}
//				else
//				{
//					for (it = s.begin(); it != ret; it++)
//					{
//						cout << *it;
//					}
//				}
//				cout << " + ?";
//				cout << " = ?";
//			}
//			else
//			{
//				cout << "? + ? = ?";
//			}
//			break;
//		}
//	}
//	if (i == s.size())
//	{
//		int num1 = 0;
//		int num2 = 0;
//		i = -1;
//		j = -1;
//		for (it = s.begin(); *it != ' '; it++)
//		{
//			i++;
//		}
//		for (it = s.begin(); *it != ' '; it++)
//		{
//			num1 += (*it - '0') * pow(10, i);
//			i--;
//		}
//		ret = it + 1;
//		for (it=it+1; it != s.end(); it++)
//		{
//			j++;
//		}
//		for (it = ret; it != s.end(); it++)
//		{
//			num2 += (*it - '0') * pow(10, j);
//			j--;
//		}
//		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//	}
//	return 0;
//}

//7-2
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[] = "I Love GPLT";
//	int len = strlen(ch);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c\n", ch[i]);
//	}
//	return 0;
//}

//7-3

//7-4
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int m;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (m < 2)
//		{
//			printf("No\n");
//		}
//		else
//		{
//			for (j = 2; j < sqrt(m); j++)
//			{
//				if (m % j == 0)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(m))
//			{
//				printf("Yes\n");
//			}
//			else
//			{
//				printf("No\n");
//			}
//		}
//	}
//	return 0;
//}

//7-5
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int high;
//	cin >> high;
//	cout << fixed<<setprecision(1)<<(high - 100) * 0.9 * 2 << endl;
//	return 0;
//}

//7-6
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	string s[50];
	int arr[50];
	int flag[50] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i] >> s[i];
	}


	return 0;
}


//7-7
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	int N;
//	int hight;
//	int weigh;
//	int exact;
//	cin >> N;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		cin >> hight >> weigh;
//		exact = (hight - 100) * 0.9 * 2;
//		if (fabs(weigh - exact) < exact * 0.1)
//		{
//			cout << "You are wan mei!" << endl;
//		}
//		else
//		{
//			if (exact < weigh)
//			{
//				cout << "You are tai pang le!" << endl;
//			}
//			else
//			{
//				cout << "You are tai shou le!" << endl;
//			}
//		}
//	}
//	return 0;
//}

//7-8
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	char ch;
//	string s1;
//	string s2;
//	int i = 0;
//	cin >> N >> ch;
//	s2.resize(N);
//	getchar();
//	getline(cin, s1);
//	if (N < s1.size())
//	{
//		for (i = s1.size() - N; i < s1.size(); i++)
//		{
//			cout << s1[i];
//		}
//	}
//	else
//	{
//		string::iterator it = s2.begin();
//		for (i = 0; i < N-s1.size(); i++)
//		{
//			s2[i] = ch;
//			it++;
//		}
//
//		copy(s1.begin(), s1.end(),it);
//		cout << s2 << endl;
//	}
//	return 0;
//}





//7-11
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int m = 0;
//	cin >> n >> k >> m;
//	int score;
//	int sum = 0;
//	float ave;
//	int i = 0;
//	int j = 0;
//	vector<int> v1;
//	vector<float> v2;
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		ave = 0;
//		for (j = 0; j < k; j++)
//		{
//			scanf("%d", &score);
//			v1.push_back(score);
//		}
//		sort(v1.begin(), v1.end());
//		for (j = 1; j < v1.size() - 1; j++)
//		{
//			sum += v1[j];
//		}
//		ave = 1.0*sum / (v1.size() - 2);
//		v2.push_back(ave);
//		v1.clear();
//	}
//	sort(v2.begin(), v2.end());
//	for (j = v2.size() - m; j < v2.size(); j++)
//	{
//		cout <<fixed<<setprecision(3)<< v2[j];
//		if (j < v2.size()-1)
//		{
//			cout << " ";
//		}
//	}
//	return 0;
//}