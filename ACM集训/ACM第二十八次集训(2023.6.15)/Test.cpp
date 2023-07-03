//ÊîÆÚÑµÁ·Ñ¡°ÎÈü1

//A-1




//C-3
#include<bits/stdc++.h>
using namespace std;
typedef struct Point
{
	int x;
	int y;
}Point;
int main()
{
	int N, M, H, K;
	string s;
	cin >> N >> M >> H >> K;
	cin >> s;
	Point begin;
	begin.x = 0;
	begin.y = 0;
	string sv[2][2000];
	int i = 0;
	while (M--)
	{
		char x, y;
		cin >> x >> y;
		sv[0][i] = x;
		sv[1][i] = y;
		i++;
	}
	int count = 0;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] == 'R')
		{
			begin.x++;
			count++;
		}
		else if (s[i] == 'L')
		{
			begin.x--;
			count++;
		}
		else if (s[i] == 'U')
		{
			begin.y++;
			count++;
		}
		else
		{
			begin.y--;
			count++;
		}
		H--;
		if (H < 0)
		{
			break;
		}
		if (count >= N && H >= 0)
		{
			break;
		}
		if (H < K && H >= 0)
		{
			int j = 0;
			for (j = 0; j <= sv[0]->size(); j++)
			{
				if ((sv[0][j] - 48) == begin.x && (sv[1][j] - 48) == begin.y)
				{
					H++;
					sv[0][j] = 'a';
					sv[1][j] = 'a';
				}
			}
		}
	}
	if (count >= N && H >= 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char ch1, ch2;
//	cin >> ch1 >> ch2;
//	if (ch1 > ch2)
//	{
//		swap(ch1, ch2);
//	}
//	if (ch1 == 'A')
//	{
//		if (ch2 == 'B')
//		{
//			cout << 3 << endl;
//		}
//		else if (ch2 == 'C')
//		{
//			cout << 4 << endl;
//		}
//		else if (ch2 == 'D')
//		{
//			cout << 8 << endl;
//		}
//		else if (ch2 == 'E')
//		{
//			cout << 9 << endl;
//		}
//		else if (ch2 == 'F')
//		{
//			cout << 14 << endl;
//		}
//		else if (ch2 == 'G')
//		{
//			cout << 23 << endl;
//		}
//	}
//	else if (ch1 == 'B')
//	{
//		if (ch2 == 'C')
//		{
//			cout << 1 << endl;
//		}
//		else if (ch2 == 'D')
//		{
//			cout << 5 << endl;
//		}
//		else if (ch2 == 'E')
//		{
//			cout << 6 << endl;
//		}
//		else if (ch2 == 'F')
//		{
//			cout << 11 << endl;
//		}
//		else if (ch2 == 'G')
//		{
//			cout << 20 << endl;
//		}
//	}
//	else if (ch1 == 'C')
//	{
//		if (ch2 == 'D')
//		{
//			cout << 4 << endl;
//		}
//		else if (ch2 == 'E')
//		{
//			cout << 5 << endl;
//		}
//		else if (ch2 == 'F')
//		{
//			cout << 10 << endl;
//		}
//		else if (ch2 == 'G')
//		{
//			cout << 19 << endl;
//		}
//	}
//	else if (ch1 == 'D')
//	{
//		if (ch2 == 'E')
//		{
//			cout << 1 << endl;
//		}
//		else if (ch2 == 'F')
//		{
//			cout << 6 << endl;
//		}
//		else if (ch2 == 'G')
//		{
//			cout << 15 << endl;
//		}
//	}
//	else if (ch1 == 'E')
//	{
//		if (ch2 == 'F')
//		{
//			cout << 5 << endl;
//		}
//		else if (ch2 == 'G')
//		{
//			cout << 14 << endl;
//		}
//	}
//	else if (ch1 == 'F')
//	{
//		if (ch2 == 'G')
//		{
//			cout << 9 << endl;
//		}
//	}
//	return 0;
//}

//F-6
//#include <bits/stdc++.h>
//using namespace std;
//int main() 
//{
//	string S, T;
//	cin >> S >> T;
//	map<char, int> cs, ct;
//	for (auto c : S) 
//	{
//		cs[c]++;
//	}
//	for (auto c : T) 
//	{
//		ct[c]++;
//	}
//	string a = "atcoder";
//	int extra = 0;
//	for (int c = 'a'; c <= 'z'; c++) 
//	{
//		if (cs[c] != ct[c])
//		{
//			if (a.find(c) == -1) 
//			{
//				cout << "No" << endl;
//				return 0;
//			}
//			if (cs[c] < ct[c]) 
//			{
//				extra += ct[c] - cs[c];
//			}
//		}
//	}
//	if (extra <= cs['@']) 
//	{
//		cout << "Yes" << endl;
//	}
//	else 
//	{
//		cout << "No" << endl;
//	}
//	return 0;
//}


//G-7
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[2][200001];
//	int n, t;
//	cin >> n >> t;
//	int i = 0;
//	int index = -1;
//	int max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> arr[0][i];
//	}
//	for (i = 1; i <= n; i++)
//	{
//		cin >> arr[1][i];
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[0][i] == t)
//		{
//			index = i;
//			max = arr[1][i];
//			break;
//		}
//	}
//	if (index != -1)
//	{
//		for (i = index + 1; i <= n; i++)
//		{
//			if (arr[0][i] == t && arr[1][i] > max)
//			{
//				index = i;
//				max = arr[1][i];
//			}
//		}
//		cout << index << endl;
//	}
//	else
//	{
//		index = 1;
//		max = arr[1][1];
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[0][i] == arr[0][1] && arr[1][i] > max)
//			{
//				index = i;
//				max = arr[1][i];
//			}
//		}
//		cout << index << endl;
//	}
//	return 0;
//}

//H-8
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n;
//	cin >> n;
//	string s = "1";
//	while (n--)
//	{
//		int m;
//		cin >> m;
//		if (m == 1)
//		{
//			string x;
//			cin >> x;
//			s += x;
//		}
//		else if (m == 2 && s.size() >= 2)
//		{
//			s.erase(0, 1);
//		}
//		else
//		{
//			map<int, int> mp;
//			int i = 0;
//			for (i = 0; i < s.size(); i++)
//			{
//				mp[s[i] - 48]++;
//			}
//
//		}
//	}
//	return 0;
//}

//I-9
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int h, w;
//	cin >> h >> w;
//	string s;
//	while(h--)
//	{
//		cin >> s;
//		int pos = s.find('T', 0);
//		if (pos == -1)
//		{
//			cout << s << endl;
//			continue;
//		}
//		else
//		{
//			while (pos >= 0)
//			{
//				if (s[pos] == s[pos + 1] && pos + 1 < s.size())
//				{
//					s[pos] = 'P';
//					s[pos + 1] = 'C';
//				}
//				pos = s.find('T', pos + 2);
//			}
//			cout << s << endl;
//		}
//	}
//	return 0;
//}