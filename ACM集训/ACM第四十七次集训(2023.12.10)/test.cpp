

//A
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int t;
//int a[205001];
//ll n, l, r;
//signed main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> n >> l >> r;
//        for (int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//        sort(a, a + n);
//        ll sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            ll cnt1 = lower_bound(a + i + 1, a + n, l - a[i]) - a;
//            ll cnt2 = upper_bound(a + i + 1, a + n, r - a[i]) - a;
//            ll ans = cnt2 - cnt1;
//            sum += ans;
//        }
//        cout << sum << endl;
//    }
//}



//B
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//void fun(string s1, string s2)
//{
//    if (s1.size() > 0)
//    {
//        char ch = s2[s2.size() - 1];
//        cout << ch;
//        int k = s1.find(ch);
//        fun(s1.substr(0, k), s2.substr(0, k));
//        fun(s1.substr(k + 1), s2.substr(k, s1.size() - k - 1));
//    }
//}
//int main()
//{
//    string s1, s2;
//    cin >> s1;
//    cin >> s2;
//    fun(s1, s2);
//    return 0;
//}
