
//B-2
#include<bits/stdc++.h>
using namespace std;
string name[1001];
double score[1001];
int main()
{
	int n = 0;
	cin >> n;
	int i = 0;
	double sumscore = 0;
	int cnt = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> name[i] >> score[i];
		cnt++;
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			if (name[i] == name[j] && i != j)
			{
				if (score[i] > score[j])
				{
					score[j] = score[i];
					name[i] = "";
					score[i] = 0;
					cnt--;
					break;
				}
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		sumscore += score[i];
	}
	for (i = 1; i <= n; i++)
	{
		if (name[i] != "")
		{
			if (score[i] >= sumscore)
			{
				cout << name[i] << " pro\n";
			}
			else if (score[i] >= sumscore * 0.9 && score[i] <= sumscore * 0.99)
			{
				cout << name[i] << " hardcore\n";
			}
			else if (score[i] >= sumscore * 0.8 && score[i] <= sumscore * 0.89)
			{
				cout << name[i] << " average\n";
			}
			else if (score[i] >= sumscore * 0.5 && score[i] <= sumscore * 0.79)
			{
				cout << name[i] << " random\n";
			}
			else if (score[i] <= sumscore * 0.49)
			{
				cout << name[i] << " noob\n";
			}
		}
	}

	return 0;
}

//G-7
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n, ans = 0;
//    cin >> n;
//    ans = 0;
//    for (int i = 1; i <= n; ++i)
//    {
//        for (int j = i; j <= n; ++j)
//        {
//            int tem = i * i + j * j;
//            int tem1 = (sqrt(tem) + 0.5);
//            if ((tem1 * tem1 == tem) && (tem1 <= n) && ((i + j) > tem1))
//            {
//                ans++;
//            }
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}

//I-9
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	if (a == b)
//	{
//		cout << "YES";
//	}
//	else
//	{
//		if (a.size() != b.size())
//		{
//			cout << "NO";
//		}
//		else
//		{
//			int flaga = a.find('1', 0);
//			int flagb = b.find('1', 0);
//			if (flaga != -1 && flagb != -1 || (flaga==-1&&flagb==-1))
//			{
//				cout<<"YES";
//			}
//			else
//			{
//				cout << "NO";
//			}
//
//		}
//	}
//	return 0;
//}

