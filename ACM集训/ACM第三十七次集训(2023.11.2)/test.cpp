
//B-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		int m;
//		cin >> m;
//		v.push_back(m);
//	}
//	sort(v.begin(), v.end());
//	int ans = unique(v.begin(), v.end()) - v.begin();
//	cout << ans << endl;
//	for (i = 0; i < ans; ++i)
//	{
//		cout << v[i] << " ";
//	}
//	return 0;
//}


//D-4
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll nums[1000005];
//ll n, k;
//bool check(ll mid)
//{
//	ll cnt = 0;
//	int i;
//	for (i = 1; i <= n; ++i)
//	{
//		cnt += nums[i] / mid;
//	}
//	return cnt >= k;
//}
//int main()
//{
//	cin >> n >> k;
//	int i;
//	ll _maxl = 0;
//	for (i = 1; i <= n; ++i)
//	{
//		cin >> nums[i];
//		_maxl = max(_maxl, nums[i]);
//	}
//	ll l = 0, r = _maxl;
//	while (l + 1 < r)
//	{
//		ll mid = (r + l) / 2;
//		if (check(mid))
//		{
//			l = mid;
//		}
//		else
//		{
//			r = mid;
//		}
//	}
//	cout << l << endl;
//	return 0;
//}

//C-3
//#include<bits/stdc++.h>
//using namespace std;
//double a, b, c, d;
//double check(double x)
//{
//	return a * x * x * x + b * x * x + c * x + d;
//}
//int main()
//{
//	cin >> a >> b >> c >> d;
//	int count = 0;
//	double l, r, x1, x2;
//	for (int i = -100; i <= 100; i++) 
//	{
//		l = i;
//		r = i + 1;
//		x1 = check(l);
//		x2 = check(r);
//		if (!x1) 
//		{
//			printf("%.2lf ", l);
//			count++;
//		}
//		if (x1 * x2 < 0) 
//		{
//			double mid;
//			while (r - l >= 0.001) 
//			{ 
//				mid = (l + r) / 2;
//				if (check(mid) * check(l) <= 0)
//				{
//					r = mid;
//				}
//				else 
//				{
//					l = mid;
//				}
//			}
//			printf("%.2lf ", mid);
//			count++;
//		}
//		if (count == 3) 
//		{
//			break;
//		}
//	}
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 1000005;
//bool nums[MAXN];
//int n;
//void is_prime()
//{
//	memset(nums, false, sizeof(nums));
//	for (ll i = 2; i <= MAXN; ++i)
//	{
//		if (!nums[i])
//		{
//			for (ll j = i * 2; j <= MAXN; j += i)
//			{
//				nums[j] = true;
//			}
//		}
//	}
//}
//bool check(ll x)
//{
//	if (x == 1)
//	{
//		return false;
//	}
//	else
//	{
//		ll y = (ll)sqrt(x);
//		if (y * y != x || nums[y])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	is_prime();
//	cin >> n;
//	int i;
//	ll x;
//	for (i = 1; i <= n; ++i)
//	{
//		cin >> x;
//		if (check(x))
//		{
//			cout << "YES\n";
//		}
//		else
//		{
//			cout << "NO\n";
//		}
//	}
//	return 0;
//}


//A-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll maxn = 1000005;
//int a[maxn / 10], b[maxn];
//void set_prim()
//{
//    ll cnt = 0, i, j;
//    b[0] = 1, b[1] = 1;
//    for (i = 2; i <= maxn; i++)
//    {
//        if (!b[i])
//        {
//            a[cnt++] = i;
//        }
//        for (j = 0; j < cnt && i * a[j] < maxn; j++)
//        {
//            b[i * a[j]] = 1;    
//            if (!(i % a[j]))
//            {
//                break;
//            }
//        }
//    }
//}
//int main()
//{
//    set_prim();
//    int n;
//    cin >> n;
//    cout << n << " ";
//    int pos = 0;
//    while (n != 1)
//    {
//        if ((n % a[pos]) == 0)
//        {
//            n /= a[pos];
//            cout << n << " ";
//        }
//        else
//        {
//            pos++;
//        }
//    }
//    return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n;
//	cin >> n;
//	string s = to_string(n);
//	if (s.size() % 2 == 1)
//	{
//		s.insert(0, 1, '0');
//	}
//	string temp;
//	ll four = s.size() / 2;
//	ll seven = s.size() / 2;
//	ll i;
//	for (i = 0; i < s.size(); ++i)
//	{
//		if (s[i] >= '0' && s[i] <= '4')
//		{
//			if (four)
//			{
//				temp += '4';
//				--four;
//			}
//			else
//			{
//				temp += '7';
//				--seven;
//			}
//		}
//		else
//		{
//			if (seven)
//			{
//				temp += '7';
//				--seven;
//			}
//			else
//			{
//				temp += '4';
//				--four;
//			}
//		}
//	}
//	ll cm = 0;
//	ll cnt = 0;
//	for (ll i = temp.size() - 1; i >= 0; --i)
//	{
//		cm += (temp[i] - '0') * pow(10, cnt);
//		cnt++;
//	}
//	string ans;
//	ll newsize = temp.size() + 2;
//	if (cm < n)
//	{
//		for (i = 0; i < newsize / 2; ++i)
//		{
//			ans += '4';
//		}
//		for (i = 0; i < newsize / 2; ++i)
//		{
//			ans += '7';
//		}
//	}
//	else
//	{
//		ans = temp;
//	}
//	cout << ans << endl;
//	return 0;
//}

