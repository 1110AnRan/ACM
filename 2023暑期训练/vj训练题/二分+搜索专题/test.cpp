
//C-3
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	return 0;
}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 50005;
//ll n, d, nums[MAXN];
//vector<int> v;
//int main()
//{
//	cin >> n >> d;
//	ll i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//	}
//	ll sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//
//	}
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1005;
//int n, matrix[N][N], vis[N][N];
//int ans = 0;
//void dfs(int x, int y,int & num,int& cnt)
//{
//	if (x<1 || x>n || y<1 || y>n || matrix[x][y] == 0 || vis[x][y] == 1)
//	{
//		return;
//	}
//	else
//	{
//		vis[x][y] = 1;
//		num++;
//		if (matrix[x - 1][y] == 0)
//		{
//			cnt++;
//		}
//		else if (matrix[x][y - 1] == 0)
//		{
//			cnt++;
//		}
//		else if (matrix[x + 1][y] == 0)
//		{
//			cnt++;
//		}
//		else if (matrix[x][y + 1] == 0)
//		{
//			cnt++;
//		}
//	}
//	dfs(x - 1, y, num, cnt);
//	dfs(x + 1, y, num, cnt);
//	dfs(x, y + 1, num, cnt);
//	dfs(x, y - 1, num, cnt);
//}
//int main()
//{
//	cin >> n;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			char ch;
//			cin >> ch;
//			if (ch == '.')
//			{
//				matrix[i][j] = 0;
//			}
//			else
//			{
//				matrix[i][j] = 1;
//			}
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (matrix[i][j] != 0 && vis[i][j] == 0)
//			{
//				int num = 0;
//				int cnt = 0;
//				dfs(i, j, num, cnt);
//				if (num == cnt)
//				{
//					ans++;
//				}
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//#include<unordered_map>
//using namespace std;
//bool IfQuary(vector<int>& nums, int target,int end)
//{
//	unordered_map<int, int> mp;
//	int cnt = 0;
//	int i = 0;
//	for (i = 0; i < nums.size() - end; i++)
//	{
//		mp[target - nums[i]]++;
//		mp[nums[i]]++;
//		if (mp[nums[i]] != 0)
//		{
//			cnt++;
//			mp[nums[i]]--;
//		}
//	}
//	if (cnt >= 3)
//	{
//		return true;
//	}
//	else
//	{
//		auto it = mp.begin();
//		while (it != mp.end())
//		{
//			if (it->second >= 4)
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//	
//}
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int m;
//		cin >> m;
//		int i = 0;
//		int sum = 0;
//		vector<int> nums;
//		for (i = 0; i < m; i++)
//		{
//			int a;
//			cin >> a;
//			sum += a;
//			nums.push_back(a);
//		}
//		if (sum % 4)
//		{
//			cout << "no\n";
//			continue;
//		}
//		sort(nums.begin(), nums.end());
//		int index = nums.size() - 1;
//		int end = 1;
//		while (index >= 3)
//		{
//			if (IfQuary(nums, nums[index], end))
//			{
//				cout << "yes\n";
//				break;
//			}
//			else
//			{
//				cout << "no\n";
//				break;
//			}
//			index--;
//			end++;
//		}
//	}
//	return 0;
//}