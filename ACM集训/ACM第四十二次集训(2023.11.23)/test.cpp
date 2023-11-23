


//C
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int N = 105;
//int n, m, i, j, k, d, a, b;
//int matrix[N][N];
//int length[N][N];
//int dist[N], visited[N];
//void Dijkstra()
//{
//	fill(dist + 1, dist + 1 + n, INT_MAX);
//	memset(visited, 0, sizeof(visited));
//	dist[a] = 0;
//	for (int c = 1; c <= n; c++)
//	{
//		int MIN = INT_MAX, index = -1;
//		for (int e = 1; e <= n; e++)
//		{
//			if (visited[e] == 0 && dist[e] < MIN)
//			{
//				index = e;
//				MIN = dist[e];
//			}
//		}
//		if (index == -1)
//		{
//			break;
//		}
//		visited[index] = 1;
//		for (int e = 1; e <= n; e++)
//		{
//			if (visited[e] == 0 && dist[index] + matrix[index][e] < dist[e]
//				&& matrix[index][e] != INT_MAX)
//			{
//				dist[e] = matrix[index][e] + dist[index];
//			}
//		}
//	}
//
//}
//int main()
//{
//	cin >> n >> m;
//	for (int u = 1; u <= n; u++)
//	{
//		for (int v = 1; v <= n; v++)
//		{
//			matrix[u][v] = INT_MAX;
//		}
//	}
//	int c;
//	for (c = 0; c < m; c++)
//	{
//		cin >> i >> j >> k;
//		matrix[i][j] = matrix[j][i] = 0;
//		length[i][j] = length[j][i] = k;
//	}
//	cin >> d;
//	for (c = 0; c < d; c++)
//	{
//		cin >> i >> j;
//		matrix[i][j] = matrix[j][i] = length[i][j];
//	}
//	cin >> a >> b;
//	Dijkstra();
//	cout << dist[b];
//	return 0;
//}



//D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int index[1005];
int main()
{
	index[0] = -1000005;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> index[i];
	}
	double mid = abs(index[2] - index[1]);
	bool r = false;
	bool l = false;
	if (index[2] > index[1])
	{
		r = true;
	}
	else
	{
		l = true;
	}


	return 0;
}


////B
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, k;
//int a[5005];
//int b[5005];
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> a[i];
//		b[i] = b[i - 1] + a[i];
//	}
//	
//	int l, r;
//	double _max = 0;
//	for (int i = 1; i <= n - k + 1; i++)
//	{
//		l = i;
//		for (r = i + k - 1; r <= n; r++)
//		{
//			_max = max(1.0 * (b[r] - b[l - 1]) / (r - l + 1), _max);
//		}
//	}
//	printf("%.15lf", _max);
//	return 0;
//}


//E
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//string temp = "<3", a, b;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> a;
//		temp += a;
//		temp += "<3";
//	}
//	cin >> b;
//	int m = temp.size();
//	int c = b.size();
//	int k = 0;
//	for (int i = 0; i < c; ++i)
//	{
//		if (b[i] == temp[k])
//		{
//			k++;
//		}
//		if (k >= m)
//		{
//			cout << "yes";
//			return 0;
//		}
//	}
//	cout << "no";
//	
//	return 0;
//}




//A
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//char query;
//int m;
//map<int, int> mp;
//int main()
//{
//	cin >> n;
//	bool first = true;
//	int l = 500000, r = 500000;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> query >> m;
//		if (first)
//		{
//			mp[m] = l;
//			l--;
//			r++;
//			first = false;
//		}
//		else if (query == 'L')
//		{
//			mp[m] = l;
//			l--;
//		}
//		else if(query == 'R')
//		{
//			mp[m] = r;
//			r++;
//		}
//		else
//		{
//			cout << min(mp[m] - l - 1, r - mp[m] - 1) << endl;
//		}
//
//	}
//	return 0;
//}
