
//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	int arr[19] = { 1,1 };
//	cin >> n;
//	int i, j;
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 0; j <= i - 1; j++)
//		{
//			arr[i] += arr[j] * arr[i - j - 1];
//		}
//	}
//	cout << arr[n];
//	return 0;
//}


//B-10
//#include<bits/stdc++.h>
//using namespace std;
//typedef unsigned long long int ll;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	ll t;
//	cin >> t;
//	while (t--)
//	{
//		ll n;
//		cin >> n;
//		stack<ll> st;
//		string s;
//		ll i = 0;
//		for (i = 0; i < n; i++)
//		{
//			cin >> s;
//			if (s == "push")
//			{
//				ll x;
//				cin >> x;
//				st.push(x);
//			}
//			else if (s == "pop")
//			{
//				if (st.empty())
//				{
//					cout << "Empty\n";
//				}
//				else
//				{
//					st.pop();
//				}
//			}
//			else if (s == "query")
//			{
//				if (st.empty())
//				{
//					cout << "Anguei!\n";
//				}
//				else
//				{
//					cout << st.top() << endl;
//				}
//			}
//			else if (s == "size")	
//			{
//				cout << st.size() << endl;
//			}
//		}
//
//	}
//	return 0;
//}

//C-11
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	stack<int> st;
//	stack<int> MaxSt;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		if (x == 0)
//		{
//			int z;
//			cin >> z;
//			st.push(z);
//			if (MaxSt.empty())
//			{
//				MaxSt.push(z);
//			}
//			else
//			{
//				if (z > MaxSt.top())
//				{
//					MaxSt.push(z);
//				}
//				else
//				{
//					MaxSt.push(MaxSt.top());
//				}
//			}
//		}
//		else if (x == 1)
//		{
//			if (!st.empty())
//			{
//				st.pop();
//				MaxSt.pop();
//			}
//		}
//		else
//		{
//			if (!st.empty())
//			{
//				cout << MaxSt.top() << endl;
//			}
//			else
//			{
//				cout << 0 << endl;
//			}
//		}
//	}
//	return 0;
//}

//D-100
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	queue<int> q;
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int c;
//		cin >> c;
//		if (c == 1)
//		{
//			int x;
//			cin >> x;
//			q.push(x);
//		}
//		else if (c == 2)
//		{
//			if (q.empty())
//			{
//				cout << "ERR_CANNOT_POP\n";
//			}
//			else
//			{
//				q.pop();
//			}
//		}
//		else if (c == 3)
//		{
//			if (q.empty())
//			{
//				cout << "ERR_CANNOT_QUERY\n";
//			}
//			else
//			{
//				cout << q.front() << endl;
//			}
//		}
//		else
//		{
//			cout << q.size() << endl;
//		}
//	}
//	return 0;
//}

//E-101
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2 = "";
	stack<char> st;
	cin >> s1;
	int i;
	for (i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= '0' && s1[i] <= '9')
		{
			if (i == 0)
			{
				s2 += s1[i];
			}
			else
			{
				s2 += " " + s1[i];
			}
		}

	}
	return 0;
}

//F-110
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	stack<int> s;
//	while (cin >> n)
//	{
//		if (n != 0)
//		{
//			s.push(n);
//		}
//		else
//		{
//			break;
//		}
//	}
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//	return 0;
//}

//G-111
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	queue<int> q;
//	map<int,int> mp;
//	int m, n;
//	cin >> m >> n;
//	int cnt = 0;
//	for(int i=1;i<=n;i++)
//	{
//
//		int x;
//		cin >> x;
//		if (q.empty())
//		{
//			q.push(x);
//			cnt++;
//			mp[x]++;
//		}
//		else
//		{
//			if (q.size() < m)
//			{
//				if (mp[x] == 0)
//				{
//					cnt++;
//					mp[x]++;
//					q.push(x);
//				}
//			}
//			else
//			{
//				if (mp[x] == 0)
//				{
//					cnt++;
//					mp[x]++;
//					mp[q.front()]--;
//					q.pop();
//					q.push(x);
//				}
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}

//H-1000
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	bool arr[105];
//	memset(arr, true, sizeof(arr));
//	int n, m;
//	cin >> n >> m;
//	int cnt1 = 0, cnt2 = 1;
//	int i = 1;
//	while (cnt1 < n)
//	{
//		while (true)
//		{
//			if (arr[i % n] == true)
//			{
//				cnt2++;
//			}
//			i++;
//			if (cnt2 == m && arr[i%n]==true)
//			{
//				arr[i % n] = false;
//				if (i % n == 0)
//				{
//					cout << n << " ";
//				}
//				else
//				{
//					cout << i % n << " ";
//				}
//				cnt2 = 1;
//				cnt1++;
//				break;
//			}
//		}
//	}
//	return 0;
//}