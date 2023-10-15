



//B-³µµÄ¹¥»÷
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll; 
//const ll N = 1e6 + 5;
//ll n, k;
//ll r[N]; 
//ll c[N];
//ll cntR = 0, cntC = 0;
//int main()
//{
//	cin >> n >> k;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> r[i] >> c[i];
//	}
//	sort(r, r + k);
//	sort(c, c + k);
//	cntR = unique(r, r + k) - r;
//	cntC = unique(c, c + k) - c;
//	ll ans = (cntR + cntC) * n - cntR * cntC;
//	cout << ans << endl;
//	return 0;
//}

//C-Function
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll a, b, c;
//ll visited[25][25][25];
//ll ret[25][25][25];
//ll w(ll a, ll b, ll c)
//{
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		return 1;
//	}
//	else if (a > 20 || b > 20 || c > 20)
//	{
//		return w(20, 20, 20);
//	}
//	if (visited[a][b][c] == 1)
//	{
//		return ret[a][b][c];
//	}
//	if (a < b && b < c)
//	{
//		ret[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//		visited[a][b][c] = 1;
//		return ret[a][b][c];
//	}
//	else
//	{
//		ret[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//		visited[a][b][c] = 1;
//		return ret[a][b][c];
//	}
//
//}
//int main()
//{
//	while (cin >> a >> b >> c)
//	{
//		if (a == -1 && b == -1 && c == -1)
//		{
//			break;
//		}
//		ll ans = w(a, b, c);
//		cout << "w(" << a << ", " << b << ", " << c << ") = " << ans << endl;
//	}
//	return 0;
//}




//D-°Ú»¨

//E-Little Elephant and Cards
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//map<ll, ll>mpf, mps;
//ll n, f, s;
//int main()
//{
//	cin >> n;
//	ll mid;
//	if (n % 2 == 1)
//	{
//		mid = (n + 1) / 2;
//	}
//	else
//	{
//		mid = n / 2;
//	}
//	ll i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> f >> s;
//		mpf[f]++;
//		if (f != s)
//		{
//			mpf[s]++;
//		}
//		mps[f]++;
//	}
//	ll ans = 100005;
//	for (auto it = mpf.begin(); it != mpf.end(); it++)
//	{
//		if (it->second >= mid)
//		{
//			ans = min(ans, max(mid - mps[it->first], 0ll));
//		}
//	}
//	ans = ans == 100005 ? -1 : ans;
//	cout << ans;
//	return 0;
//}

//F-Beautiful Sets of Points
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	cout << min(n, m) + 1 << "\n";
//	for (int i = 0; i <= min(n, m); i++)
//	{
//		cout << i << " " << min(n , m) - i << "\n";
//	}
//	return 0;
//}