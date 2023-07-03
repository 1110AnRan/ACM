//5月个人训练赛7

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int cur = 1;
//	int count = 2;
//	int sum = 1;
//	int i = 1;
//	while (n > sum)
//	{
//		cur += count;
//		sum += cur;
//		count++;
//		i++;
//	}
//	if (sum > n)
//	{
//		i--;
//	}
//	cout << i << endl;
//
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long int m, i, x, y, sum = 0, s1 = 0, c1 = 0;
//	long int c[101];
//	cin >> m;
//	for (i = 0; i < m; i++)
//	{
//		cin >> c[i];
//		sum += c[i];
//	}
//	cin >> x >> y;
//	for (i = 0; i < m; i++)
//	{
//		s1 += c[i];
//		if ((s1 >= x && s1 <= y) && (sum - s1 >= x && sum - s1 <= y))
//		{
//			c1++;
//			cout << i + 2 << endl;
//			break;
//		}
//	}
//	if (c1 == 0)
//	{
//		cout << 0 << endl;
//	}
//	return 0;
//}

//C-3
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		if (n % 10 != 1 && n % 100 != 14 && n % 1000 != 144)
//		{
//			cout << "NO" << endl;
//			break;
//		}
//		n /= 10;
//	}
//	if (!n)
//	{
//		cout << "YES" << endl;
//	}
//	return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long n, k;
//	cin >> n >> k;
//	if (n % 2 == 0)
//	{
//		if (k <= n / 2)
//		{
//			cout << k * 2 - 1 << endl;
//		}
//		else
//		{
//			cout << (k - n / 2) * 2 << endl;
//		}
//	}
//	else
//	{
//		if (k <= (n+1) / 2)
//		{
//			cout << k * 2 - 1 << endl;
//		}
//		else
//		{
//			cout << (k - (n + 1) / 2) * 2 << endl;
//		}
//	}
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int first, second;
//	if (n < 10)
//	{
//		first = 0;
//		second = n;
//	}
//	else
//	{
//		first = n / 10;
//		second = n % 10;
//	}
//	int count1 = 0;
//	int count2 = 0;
//	if (first == 8)
//	{
//		count1 = 1;
//	}
//	if (first == 0 || first == 2 || first == 6 || first == 9)
//	{
//		count1 = 2;
//	}
//	if (first == 3 || first == 4)
//	{
//		count1 = 3;
//	}
//	if (first == 5)
//	{
//		count1 = 4;
//	}
//	if (first == 7)
//	{
//		count1 = 5;
//	}
//	if (first == 1)
//	{
//		count1 = 7;
//	}
//	if (second == 8)
//	{
//		count2 = 1;
//	}
//	if (second == 0 || second == 2 || second == 6 || second == 9)
//	{
//		count2 = 2;
//	}
//	if (second == 3 || second == 4)
//	{
//		count2 = 3;
//	}
//	if (second == 5)
//	{
//		count2 = 4;
//	}
//	if (second == 7)
//	{
//		count2 = 5;
//	}
//	if (second == 1)
//	{
//		count2 = 7;
//	}
//	cout << count1 * count2 << endl;
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<pair<int, int>> vp;
//	vector<int> c;
//	int count = 0;
//	int i = 0;
//	int m = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> m;
//		vp.push_back(make_pair(m, i));
//	}
//	int value = 1;
//	int index = 0;
//	while (index < n)
//	{
//		for (i = index; i < n; i++)
//		{
//			if (vp[i].first == value)
//			{
//				count++;
//				c.push_back(vp[i].second + 2000);
//				index = i + 1;
//				value++;
//				break;
//			}
//		}
//		if (i == n)
//		{
//			break;
//		}
//	}
//	cout << count << endl;
//	if (count != 0)
//	{
//		for (i = 0; i < c.size(); i++)
//		{
//			cout << c[i];
//			if (i != c.size() - 1)
//			{
//				cout << " ";
//			}
//		}
//	}
//	return 0;
//}

//H-8
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		long long n, m, sum = 0;
//		vector<long long> v;
//		cin >> n;
//		while (n--)
//		{
//			cin >> m;
//			sum += m;
//			v.push_back(m);
//		}
//		long long  i = 0;
//		long long count = 0;
//		int index0 = -1, index1 = -1, indexe = 0;
//		int flag0 = 0, flag1 = 0;
//		if (sum != 0)
//		{
//			if (v[0] != 0)
//			{
//				for (i = 1; i < v.size(); i++)
//				{
//					if (v[i] == 0)
//					{
//						v[i] = -sum;
//						break;
//					}
//				}
//			}
//			else
//			{
//				for (i = 0; i < v.size(); i++)
//				{
//					if (v[i] == 0)
//					{
//						flag0 = 1;
//						index0 = i;
//					}
//					else
//					{
//						flag1 = 1;
//						index1 = i;
//					}
//					if (flag0 && flag1)
//					{
//						break;
//					}
//				}
//			}
//			if (index0 < index1)
//			{
//				for (i = index0; i < index1; i++)
//				{
//					if (v[i] == 0)
//					{
//						indexe = i;
//					}
//				}
//				v[indexe] = -sum;
//			}
//			sum = 0;
//			for (i = 0; i < v.size(); i++)
//			{
//				sum += v[i];
//				if (sum == 0)
//				{
//					count++;
//				}
//			}
//			cout << count << endl;
//		}
//		else
//		{
//			for (i = 0; i < v.size(); i++)
//			{
//				sum += v[i];
//				if (sum == 0)
//				{
//					count++;
//				}
//			}
//			cout << count << endl;
//		}
//	}
//	return 0;
//}
