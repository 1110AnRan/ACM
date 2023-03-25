#define _CRT_SECURE_NO_WARNINGS 1

//7-1
//#include <iostream>
//#include <set>
//using namespace std;
//int main()
//{
//	int y, n;
//	cin >> y >> n;
//	int m = 0;
//	int count = 0;
//	set<int> s;
//	if (y >= 1 && y <= 9)
//	{
//		s.insert(0);
//		s.insert(y);
//	}
//	else if (y >= 10 && y <= 99)
//	{
//		s.insert(0);
//		m = y;
//		while (m)
//		{
//			s.insert(m % 10);
//			m = m / 10;
//		}
//	}
//	else if (y >= 100 && y <= 999)
//	{
//		s.insert(0);
//		m = y;
//		while (m)
//		{
//			s.insert(m % 10);
//			m = m / 10;
//		}
//	}
//	else
//	{
//		m = y;
//		while (m)
//		{
//			s.insert(m % 10);
//			m = m / 10;
//		}
//	}
//	while (s.size() != n)
//	{
//		s.clear();
//		y++;
//		count++;
//		if (y >= 1 && y <= 9)
//		{
//			s.insert(0);
//			s.insert(y);
//		}
//		else if (y >= 10 && y <= 99)
//		{
//			s.insert(0);
//			m = y;
//			while (m)
//			{
//				s.insert(m % 10);
//				m = m / 10;
//			}
//		}
//		else if (y >= 100 && y <= 999)
//		{
//			s.insert(0);
//			m = y;
//			while (m)
//			{
//				s.insert(m % 10);
//				m = m / 10;
//			}
//		}
//		else
//		{
//			m = y;
//			while (m)
//			{
//				s.insert(m % 10);
//				m = m / 10;
//			}
//		}
//	}
//	printf("%d %04d", count, y);
//	return 0;
//}



//7-2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int m;
//	int k = 0;
//	int i = 0;
//	int j = 0;
//	int arr[1001] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		cin >> m;
//		for (j = 0; j < m; j++)
//		{
//			cin >> k;
//			arr[k]++;
//		}
//	}
//	int max = arr[0];
//	int index = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//			index = i;
//		}
//	}
//	cout << index << " " << max << endl;
//	return 0;
//}

//7-3
//#include <iostream>
//#include <string.h>
//#include <string>
//using namespace std;
//int main()
//{
//	char ch1[11];
//	string ch2[3];
//	int person = 0;
//	int count = 0;
//	while ((scanf("%s", ch1)) != EOF)
//	{
//		if (strcmp(ch1, ".") == 0)
//		{
//			break;
//		}
//		getchar();
//		count++;
//		if (count == 2 || count == 14)
//		{
//			ch2[person] = ch1;
//			person++;
//		}
//	}
//	if (count < 2)
//	{
//		cout << "Momo... No one is for you ..." << endl;
//	}
//	else if (count >= 2 && count < 14)
//	{
//		cout << ch2[0] << " is the only one for you..." << endl;
//	}
//	else
//	{
//		cout << ch2[0] << " and " << ch2[1] << " are inviting you to dinner..." << endl;
//	}
//	return 0;
//}

//7-4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a * b << endl;
//	return 0;
//}

//7-5
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (b == 0)
//	{
//		cout << a << "/" << b << "=Error" << endl;
//	}
//	else if (b < 0)
//	{
//		cout << a << "/" << "(" << b << ")=" <<fixed<<setprecision(2)<< 1.0 * a / b << endl;
//	}
//	else
//	{
//		cout << a << "/" <<  b  << "=" << fixed << setprecision(2) << 1.0 * a / b << endl;
//	}
//	return 0;
//}

//7-6
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello World" << endl;
//	cout << "Hello New World" << endl;
//	return 0;
//}

//7-7
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//int main()
//{
//	string s;
//	int n;
//	cin >> n;
//	getchar();
//	getline(cin, s);
//	if(n >= 0)
//	{
//		int row = n;
//		int col = (s.size() + n - 1) / n;
//		int i = 0;
//		int j = 0;
//		int k = 0;
//		char ch[1001][101];
//		for (i = 0; i < col; i++)
//		{
//			ch[i][0] = ' ';
//		}
//		for (j = col - 1; j >= 0; j--)
//		{
//			for (i = 0; i < row; i++)
//			{
//				if (s[k] == '\n')
//				{
//					ch[i][j] = ' ';
//					k++;
//				}
//				else if (k <= s.size() - 1)
//				{
//					ch[i][j] = s[k];
//					k++;
//				}
//				else
//				{
//					ch[i][j] = ' ';
//					k++;
//				}
//			}
//		}
//		for (i = 0; i < row; i++)
//		{
//			for (j = 0; j < col; j++)
//			{
//				cout << ch[i][j];
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}





//7-8
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int i = 0;
//	char sex;
//	float high;
//	for (i = 0; i < n; i++)
//	{
//		cin >> sex >> high;
//		if (sex == 'F')
//		{
//			cout << fixed << setprecision(2) << high * 1.09 << endl;
//		}
//		else
//		{
//			cout << fixed << setprecision(2) << high / 1.09 << endl;
//		}
//	}
//	return 0;
//}

//7-9
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> v1;
//	int n;
//	cin >> n;
//	int m;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> m;
//		v1.push_back(m);
//	}
//	sort(v1.begin(), v1.end());
//	int count1 = 0;
//	int count2 = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 0; i < v1.size() / 2; i++)
//	{
//		sum1 += v1[i];
//		count1++;
//	}
//	for (; i < v1.size(); i++)
//	{
//		sum2 += v1[i];
//		count2++;
//	}
//	cout << "Outgoing #: " << count2 << endl;
//	cout << "Introverted #: " << count1 << endl;
//	cout << "Diff = " << sum2 - sum1 << endl;
//	return 0;
//}

//7-11
//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	set<string> ss;
//	string s;
//	vector< pair<string, int> > v;
//	pair<string, int> p;
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	double ave = 0;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		ss.insert(s);
//	}
//	cin >> m;
//	for (i = 0; i < m; i++)
//	{
//		cin >> p.first >> p.second;
//		v.push_back(p);
//		sum += p.second;
//	}
//	ave = 1.0 * sum / m;
//	sort(v.begin(), v.end());
//	int flag = 1;
//	for (i = 0; i < m; i++)
//	{
//		if (v[i].second > ave && ss.find(v[i].first) == ss.end())
//		{
//			flag = 0;
//			cout << v[i].first << endl;
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "Bing Mei You" << endl;
//	}
//	return 0;
//}