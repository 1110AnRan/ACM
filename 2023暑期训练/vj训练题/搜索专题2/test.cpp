

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//char a[101][101];
//int ans = 0;
//void dfs(int x, int y) 
//{
//	if (x<1 || y<1 || x>n || y>m) 
//	{
//		return;
//	}
//	if (a[x][y + 1] != '0') 
//	{
//		a[x][y + 1] = '0';
//		dfs(x, y + 1);
//	}
//	if (a[x][y - 1] != '0') 
//	{
//		a[x][y - 1] = '0';
//		dfs(x, y - 1);
//	}
//	if (a[x + 1][y] != '0') 
//	{
//		a[x + 1][y] = '0';
//		dfs(x + 1, y);
//	}
//	if (a[x - 1][y] != '0') 
//	{
//		a[x - 1][y] = '0';
//		dfs(x - 1, y);
//	}
//}
//
//int main() 
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) 
//	{
//		for (int j = 1; j <= m; j++) 
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) 
//	{
//		for (int j = 1; j <= m; j++) 
//		{
//			if (a[i][j] != '0') 
//			{
//				a[i][j] = 0;
//				ans++;
//				dfs(i, j);
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, matrix[505][505];
//void dfs(int x, int y)
//{
//	if (x<0 || x>n + 1 || y<0 || y>m + 1 || matrix[x][y])
//	{
//		return;
//	}
//	matrix[x][y] = 1;
//
//	dfs(x - 1, y);
//	dfs(x, y - 1);
//	dfs(x + 1, y);
//	dfs(x, y + 1);
//}
//int main()
//{
//	cin >> n >> m;
//	char ch;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			cin >> ch;
//			if (ch == '*')
//			{
//				matrix[i][j] = 1;
//			}
//			else
//			{
//				matrix[i][j] = 0;
//			}
//		}
//	}
//	dfs(0, 0);
//
//	int ans = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			if (!matrix[i][j])
//			{
//				ans++;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, t, ax, ay, sx, sy, ex, ey, matrix[10][10];
//int ans = 0;
//bool mp[10][10] = { false };
//void dfs(int x, int y)
//{
//	if (x == ex && y == ey)
//	{
//		ans++;
//		return;
//	}
//	else
//	{
//		if (mp[x - 1][y] == false && matrix[x - 1][y] == 1)
//		{
//			mp[x][y] = true;
//			dfs(x - 1, y);
//			mp[x][y] = false;
//		}
//		if (mp[x][y - 1] == false && matrix[x][y - 1] == 1)
//		{
//			mp[x][y] = true;
//			dfs(x, y - 1);
//			mp[x][y] = false;
//		}
//		if (mp[x + 1][y] == false && matrix[x + 1][y] == 1)
//		{
//			mp[x][y] = true;
//			dfs(x + 1, y);
//			mp[x][y] = false;
//		}
//		if (mp[x][y + 1] == false && matrix[x][y + 1] == 1)
//		{
//			mp[x][y] = true;
//			dfs(x, y + 1);
//			mp[x][y] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m >> t;
//	cin >> sx >> sy >> ex >> ey;
//	memset(matrix, 1, sizeof(matrix));
//	int i = 0;
//	for (i = 0; i < t; i++)
//	{
//		cin >> ax >> ay;
//		matrix[ax][ay] = 0;
//	}
//	dfs(sx, sy);
//	cout << ans;
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, t;
//int sx, sy, ex, ey;
//int zx, zy; 
//int sum = 0;
//int mp[10][10];
//int vis[10][10] = { 0 }; 
//int px[4] = { 0,0,1,-1 };
//int py[4] = { -1,1,0,0 };
//void dfs(int x, int y)
//{
//	if (x == ex && y == ey)
//	{
//		sum++;
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			
//			if (mp[x + px[i]][y + py[i]] && !vis[x + px[i]][y + py[i]])
//			{
//				vis[x][y] = 1;
//				dfs(x + px[i], y + py[i]);
//				vis[x][y] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m >> t;
//	cin >> sx >> sy >> ex >> ey;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			mp[i][j] = 1;
//		}
//	}
//	for (int i = 1; i <= t; i++)
//	{
//		cin >> zx >> zy;
//		mp[zx][zy] = 0;
//	}
//	dfs(sx, sy);
//	cout << sum;
//	return 0;
//}

//G-7
//#include<bits/stdc++.h>
//using namespace std;
//int n, m, t;
//int zx, zy;
//int sum = 0;
//int mp[20][20];
//int vis[20][20] = { 0 };
//int px[4] = { 0,0,1,-1 };
//int py[4] = { -1,1,0,0 };
//void dfs(int x, int y)
//{
//	if (x == n && y == m)
//	{
//		sum++;
//		return;
//	}
//	else
//	{
//		if (mp[x + 1][y] && !vis[x + 1][y])
//		{
//			vis[x][y] = 1;
//			dfs(x + 1, y);
//			vis[x][y] = 0;
//		}
//		if (mp[x][y + 1] && !vis[x][y + 1])
//		{
//			vis[x][y] = 1;
//			dfs(x, y + 1);
//			vis[x][y] = 0;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m >> t;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			mp[i][j] = 1;
//		}
//	}
//	for (int i = 1; i <= t; i++)
//	{
//		cin >> zx >> zy;
//		mp[zx][zy] = 0;
//	}
//	dfs(1, 1);
//	cout << sum;
//	return 0;
//}

//H-8
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll dfs(ll n,ll cnt)
//{
//	if (n == 1)
//	{
//		return cnt;
//	}
//	else
//	{
//		if (n % 2 == 0)
//		{
//			dfs(n / 2, cnt + 1);
//		}
//		else
//		{
//			ll min1 = dfs(n + 1, cnt + 1);
//			ll min2 = dfs(n - 1, cnt + 1);
//			return min(min1, min2);
//		}
//	}
//}
//int main()
//{
//	ll n;
//	cin >> n;
//	cout << dfs(n, 0) << endl;
//	return 0;
//}