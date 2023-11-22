
//B
//#include<bits/stdc++.h>
//using namespace std;
//priority_queue<int, vector<int>, greater<int> > q1;
//priority_queue<int, vector<int>, less<int> > q2;
//int check = 1, n, m, middle, k;
//void add(int x)
//{
//	if (q1.empty())
//	{
//		q1.push(x);
//	}
//	else if (x > q1.top())
//	{
//		q1.push(x);
//
//	}
//	else
//	{
//		q2.push(x);
//	}
//	while (q1.size() < q2.size())
//	{
//		q1.push(q2.top());
//		q2.pop();
//	}
//	while (q1.size() > q2.size() + 1)
//	{
//		q2.push(q1.top());
//		q1.pop();
//	}
//}
//int main() 
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) 
//	{
//		cin >> m;
//		add(m);
//		if (i % 2)
//		{
//			cout << q1.top() << endl;
//		}
//	}
//	return 0;
//}

//E
//#include<bits/stdc++.h>
//using namespace std;
//int a[105][105];
//int visited[105][105];
//int r, c;
//int d1[4] = { 0,1,-1,0 };
//int d2[4] = { 1,0,0,-1 };
//bool check(int x, int y)
//{
//	if (x >= 1 && x <= r && y >= 1 && y <= c)
//	{
//		return true;
//	}
//	return false;
//}
//int dfs(int x, int y)
//{
//	if (visited[x][y])
//	{
//		return visited[x][y];
//	}
//	visited[x][y] = 1;
//
//	for (int i = 0; i < 4 ; ++i)
//	{
//		int newx = x + d1[i];
//		int newy = y + d2[i];
//		if (check(newx, newy))
//		{
//			if (a[newx][newy] < a[x][y])
//			{
//				visited[x][y] = max(dfs(newx, newy) + 1, visited[x][y]);
//			}
//		}
//	}
//	return visited[x][y];
//}
//int main()
//{
//	cin >> r >> c;
//	int i, j;
//	for (i = 1; i <= r; ++i)
//	{
//		for (j = 1; j <= c; ++j)
//		{
//			cin >> a[i][j];
//			visited[i][j] = 0;
//		}
//	}
//	int ans = 0;
//	for (i = 1; i <= r; ++i)
//	{
//		for (j = 1; j <= c; ++j)
//		{
//			ans = max(dfs(i, j), ans);
//		}
//	}
//	cout << ans;
//	return 0;
//}


//C
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef struct Tree
//{
//	ll x;
//	ll h;
//}Tree;
//ll n;
//Tree t[100005];
//int main()
//{
//	cin >> n;
//	int i;
//	for (i = 1; i <= n; ++i)
//	{
//		cin >> t[i].x >> t[i].h;
//	}
//	ll ans = 0;
//	if (n >= 2)
//	{
//		ans = 2;
//	}
//	else if (n == 1)
//	{
//		cout << 1 << endl;
//		return 0;
//	}
//	for (i = 2; i <= n - 1; ++i)
//	{
//		if (t[i].x - t[i].h > t[i - 1].x)
//		{
//			++ans;
//		}
//		else if (t[i].x + t[i].h < t[i + 1].x)
//		{
//			++ans;
//			t[i].x += t[i].h;
//		}
//	}
//	cout << ans;
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct Person
{
	ll t;
	ll l;
	ll h;
}Person;
int q, n;
ll m;
Person p[105];
int main()
{
	cin >> q;
	while (q--)
	{
		cin >> n >> m;
		int i;
		for (i = 1; i <= n; ++i)
		{
			cin >> p[i].t >> p[i].l >> p[i].h;
		}
		for (i = 1; i <= n - 1; ++i)
		{
			if (p[i].h < p[i].l)
			{
				if (p[i].t - m >= p[i].h)
				{
					m = p[i].h;
				}
				
			}
		}

	}
	return 0;
}
