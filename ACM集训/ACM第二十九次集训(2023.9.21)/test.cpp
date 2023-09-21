

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int l, d, v, g, r;
//int main()
//{
//	cin >> l >> d >> v >> g >> r;
//	int times = d / (v * g);
//	if (times == 0)
//	{
//		cout << fixed << setprecision(8) << 1.0 * l / v << endl;
//	}
//	else
//	{
//		int ex = d / (v * (g + r));
//		int gapex = d % (v * (g + r));
//		if (ex == 0)
//		{
//			cout << fixed << setprecision(8) << g + r + 1.0 * (l - d) / v;
//		}
//		else
//		{
//			if (gapex == 0)
//			{
//				cout << fixed << setprecision(8) << ex * (g + r) + 1.0 * (l - d) / v;
//			}
//			else
//			{
//				if (gapex >= v * g)
//				{
//					ex++;
//					cout << fixed << setprecision(8) << ex * (g + r) + 1.0 * (l - d) / v;
//				}
//				else
//				{
//					cout << fixed << setprecision(8) << ex * (g + r) + 1.0 * (l - d + gapex) / v;
//				}
//			}
//		}
//	}
//	return 0;
//}


//B-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, x;
//string s;
//int main()
//{
//	cin >> n >> x;
//	while (n)
//	{
//		if (n % x >= 10)
//		{
//			s.push_back(n % x + 7 + '0');
//		}
//		else
//		{
//			s.push_back(n % x + '0');
//		}
//		n /= x;
//	}
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//	return 0;
//}

//C-3
//#include<bits/stdc++.h>
//const int maxN = 1010;
//using namespace std;
//int main()
//{
//    int a[maxN] = { 0 };
//    int ans[maxN] = { 0 };
//    int n, x;
//    cin >> n;
//    a[0] = 1;
//    ans[0] = 1;
//    for (int i = 2; i <= n; i++) 
//    {
//        int carry = 0;
//        for (int j = 0; j < maxN; j++) 
//        {
//            int s = a[j] * i + carry;
//            a[j] = s % 10;
//            carry = s / 10;
//        }
//        for (int j = 0; j < maxN; j++) 
//        {
//            ans[j] += a[j];
//            ans[j + 1] += ans[j] / 10;
//            ans[j] %= 10;
//        }
//    }
//    for (x = maxN - 1; x >= 0; x--) 
//    {
//        if (a[x])
//        {
//            break;
//        }
//    }
//    for (int i = x; i >= 0; i--) 
//    {
//        cout << ans[i];
//    }
//    return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int r, c;
//char matrix[1005][1005];
//int ans = 0;
//bool check(int x, int y)
//{
//	int cnt = 0;
//	if (matrix[x][y] == '#')
//	{
//		cnt++;
//	}
//	if (matrix[x+1][y] == '#')
//	{
//		cnt++;
//	}
//	if (matrix[x][y+1] == '#')
//	{
//		cnt++;
//	}
//	if (matrix[x+1][y+1] == '#')
//	{
//		cnt++;
//	}
//	return cnt == 3;
//}
//void dfs(int x, int y)
//{
//	if (x <= 0 || x > r || y <= 0 || y > c  || matrix[x][y] == '.')
//	{
//		return;
//	}
//
//	matrix[x][y] = '.';
//
//	dfs(x - 1, y);
//	dfs(x + 1, y);
//	dfs(x, y + 1);
//	dfs(x, y - 1);
//}
//int main()
//{
//	cin >> r >> c;
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			if (check(i, j))
//			{
//				cout << "Bad placement.";
//				return 0;
//			}
//		}
//	}
//
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			if (matrix[i][j] == '#')
//			{
//				ans++;
//				dfs(i, j);
//			}
//
//		}
//	}
//	cout << "There are " << ans << " ships.";
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//int d, sumtime, mintime[35], maxtime[35], ans[35];
//int main()
//{
//	cin >> d >> sumtime;
//	int summintime = 0, summaxtime = 0;
//	for (int i = 0; i < d; i++)
//	{
//		cin >> mintime[i] >> maxtime[i];
//		summintime += mintime[i];
//		summaxtime += maxtime[i];
//	}
//	if (sumtime >= summintime && sumtime <= summaxtime)
//	{
//		cout << "YES\n";
//	}
//	else
//	{
//		cout << "NO\n";
//		return 0;
//	}
//
//	sumtime -= summintime;
//	for (int i = 0; i < d; i++)
//	{
//		if (sumtime - (maxtime[i] - mintime[i]) > 0)
//		{
//			sumtime -= maxtime[i] - mintime[i];
//			ans[i] = maxtime[i];
//		}
//		else
//		{
//			ans[i] = mintime[i] + sumtime;
//			sumtime = 0;
//		}
//	}
//	for (int i = 0; i < d; i++)
//	{
//		cout << ans[i] << " ";
//	}
//	return 0;
//}


//F-6
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int w;
//	cin >> w;
//	if ((w & 1) == 0 && w!= 2)
//	{
//		cout << "YES";
//	}
//	else
//	{
//		cout << "NO";
//	}
//	return 0;
//}