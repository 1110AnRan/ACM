


//E
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	string s;
//	ll cnt = 0;
//	ll ans = 0;
//	while (getline(cin,s))
//	{
//		if (s[0] == '+')
//		{
//			++cnt;
//		}
//		else if (s[0] == '-')
//		{
//			--cnt;
//		}
//		else
//		{
//			ll pos = s.find(':', 0);
//			ans += (s.size() - pos - 1) * cnt;
//		}
//	}
//	cout << ans;
//	return 0;
//}



//A
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll t;
//	cin >> t;
//	while (t--)
//	{
//		map<ll, ll> mp;
//		ll n;
//		cin >> n;
//		ll i;
//		for (i = 0; i < n; ++i)
//		{
//			ll m;
//			cin >> m;
//			if (m % 3 == 0)
//			{
//				mp[0]++;
//			}
//			else if (m % 3 == 1)
//			{
//				mp[1]++;
//			}
//			else
//			{
//				mp[2]++;
//			}
//		}
//		ll sum = 0;
//		ll flag = 0;
//		sum += mp[0];
//		if (mp[1] < mp[2])
//		{
//			sum += mp[1];
//			mp[2] -= mp[1];
//			flag = 2;
//		}
//		else if (mp[1] > mp[2])
//		{
//			sum += mp[2];
//			mp[1] -= mp[2];
//			flag = 1;
//		}
//		else
//		{
//			sum += mp[1];
//			cout << sum << endl;
//			continue;
//		}
//		if (flag == 1)
//		{
//			sum += (mp[1] / 3);
//		}
//		else if (flag == 2)
//		{
//			sum += (mp[2] / 3);
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}


//F
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, p1, p2, p3, t1, t2;
//int prevl = 0, prevr = 0;
//int ans = 0;
//int main()
//{
//	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
//	while (n--)
//	{
//		int curl, curr;
//		cin >> curl >> curr;
//		ans += ((curr - curl) * p1);
//		if (prevl != 0)
//		{
//			int gap = curl - prevr;
//			if (gap <= t1)
//			{
//				ans += ((gap) * p1);
//			}
//			else if ((gap) > t1 && gap < (t1 + t2))
//			{
//				ans += (t1 * p1 + (gap - t1) * p2);
//			}
//			else if ((gap) >= (t1 + t2))
//			{
//				ans += (t1 * p1 + t2 * p2 + (gap - t1 - t2) * p3);
//			}
//		}
//		prevl = curl;
//		prevr = curr;
//	}
//	cout << ans << endl;
//	return 0;
//}

//B
//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 5e5 + 5;
//int a[MAXN];
//int main()
//{
//    int n;
//    while (cin >> n)
//    {
//        int i;
//        for (i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//        int count = 0;
//        int s1, s2, s3, s4, s5, s6;
//        s1 = s2 = s3 = s4 = s5 = s6 = 0;
//        for (i = 0; i < n; i++)
//        {
//            if (a[i] == 4)
//            {
//                s1++;
//            }
//            else if (a[i] == 8 && s1 > s2)
//            {
//                s2++;
//            }
//            else if (a[i] == 15 && s2 > s3)
//            {
//                s3++;
//            }
//            else if (a[i] == 16 && s3 > s4)
//            {
//                s4++;
//            }
//            else if (a[i] == 23 && s4 > s5)
//            {
//                s5++;
//            }
//            else if (a[i] == 42 && s5 > s6)
//            {
//                s6++;
//            }
//            if (s1 && s2 && s3 && s4 && s5 && s6)
//            {
//                s1--;
//                s2--;
//                s3--;
//                s4--;
//                s5--;
//                s6--;
//                count++;
//            }
//        }
//        cout << n - count * 6;
//    }
//    return 0;
//}