#define _CRT_SECURE_NO_WARNINGS 1


//L1-8 猜数字
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cmath>
//using namespace std;
//int main()
//{
//	pair<string, int> p;
//	vector<pair<string, int>>v;
//	int n;
//	double sum = 0;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> p.first >> p.second;
//		v.push_back(p);
//		sum += p.second;
//	}
//	v.resize(n + 1);
//	sum = sum / n / 2;
//	v[n].second = fabs(sum - v[0].second);
//	for (i = 1; i < n; i++)
//	{
//		if (fabs(sum - v[i].second) < v[n].second)
//		{
//			v[n].first = v[i].first;
//			v[n].second = fabs(sum - v[i].second);
//		}
//	}
//	cout << int(sum+0.5) << " " << v[n].first;
//
//	return 0;
//}

//L1-7 谁是赢家
//#include<iostream>
//using namespace std;
//int main()
//{
//	int p11, p21;
//	int a;
//	cin >> p11 >> p21;
//	int counta = 0;
//	int countb = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> a;
//		if (a == 0)
//		{
//			counta++;
//		}
//		else
//		{
//			countb++;
//		}
//	}
//	if (p11 > p21 && counta != 0)
//	{
//		cout << "The winner is a: " << p11 << " + " << counta;
//	}
//	else if (p11 < p21 && counta == 3)
//	{
//		cout << "The winner is a: " << p11 << " + " << counta;
//	}
//	else if(p11 < p21 && countb != 0)
//	{
//		cout << "The winner is b: " << p21 << " + " << countb;
//	}
//	else if (p11 > p21 && countb == 3)
//	{
//		cout << "The winner is b: " << p21 << " + " << countb;
//	}
//	return 0;
//}

//L1-6 福到了
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char ch;
//	int n;
//	string s[101];
//	cin >> ch >> n;
//	getchar();
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		getline(cin , s[i]);
//	}
//	int flag = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j<n-i-1 ; j++)
//		{
//			if (s[i][j] != s[n-i-1][n-j-1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "bu yong dao le" << endl;
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		for (j = n - 1; j >= 0; j--)
//		{
//			if (s[i][j] != ' ')
//			{
//				s[i][j] = ch;
//			}
//			cout << s[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//L1-2 倒数第N个字符串
//#include<iostream>
//#include<string>
//using namespace std;
//int l, n;
//char a[10];
//int main() 
//{
//	int L, N;
//	cin >> L >> N;
//	string a = "";
//	for (int i = 1; i <= L; i++) 
//	{
//		a += 'z';
//	}
//	int r = L - 1, tmp;
//	N--;
//	while (N) 
//	{
//		tmp = N % 26;
//		a[r--] = 'z' - tmp;
//		N /= 26;
//	}
//	cout << a << endl;
//	return 0;
//}
