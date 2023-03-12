#define _CRT_SECURE_NO_WARNINGS 1
//2016年天梯赛初赛题集
//7-5
//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	//cout << "I'm gonna WIN!" << endl;
//	//cout << "I'm gonna WIN!" << endl;
//	//cout << "I'm gonna WIN!" << endl;
//
//	return 0;
//}

//7-6
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	int m;
//	cin >> n;
//	int i = 0;
//	int CountSingle = 0;
//	int CountDouble = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> m;
//		if (m % 2 == 0)
//		{
//			CountDouble++;
//		}
//		else
//		{
//			CountSingle++;
//		}
//	}
//	cout << CountSingle << " " << CountDouble << endl;
//	return 0;
//}

//7-8
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	if (n == 5)
//	{
//		cout << "7" << endl;
//	}
//	else
//	{
//		cout << (n + 2) % 7 << endl;
//	}
//	return 0;
//}

//7-1
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char str[51] = { 0 };
//    scanf("%s", str);
//    int count = 0;
//    int sum = 0;
//    int len = strlen(str);
//    int i = 0;
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == '2')
//        {
//            count++;
//        }
//    }
//    if (str[0] == '-')
//    {
//        if ((str[len - 1] - '0') % 2 == 0)
//        {
//            printf("%.2lf%%\n", (double)count / (len - 1) * 1.5 * 2 * 100);
//        }
//        else
//        {
//            printf("%.2lf%%\n", (double)count / (len - 1) * 1.5 * 100);
//        }
//    }
//    else
//    {
//        if ((str[len - 1] - '0') % 2 == 0)
//        {
//            printf("%.2lf%%\n", (double)count / len * 2 * 100);
//        }
//        else
//        {
//            printf("%.2lf%%\n", (double)count / len * 100);
//        }
//    }
//    return 0;
//}

//7-2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int hh = 0;
//	int mm = 0;
//	int i = 0;
//	scanf("%d:%d", &hh, &mm);
//	if (hh >= 12 && hh <= 23)
//	{
//		if (mm != 0)
//		{
//			for(i = 0 ; i < hh % 12 + 1;i++)
//			{
//				printf("Dang");
//			}
//		}
//		else if(mm==0)
//		{
//			if (hh == 12)
//			{
//				printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
//
//			}
//			else
//			{
//				for (i = 0; i < hh % 12; i++)
//				{
//					printf("Dang");
//				}
//			}
//		}
//	}
//	else
//	{
//		printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
//	}
//	return 0;
//}

//7-3
//#include <iostream>
//using namespace std;
//int main()
//{
//	int momentA = 0;
//	int momentB = 0;
//	int countA = 0;
//	int countB = 0;
//	int AOut, AIn, BOut, BIn;
//	int N = 0;
//	cin >> momentA >> momentB;
//	cin >> N;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		cin >> AOut >> AIn >> BOut >> BIn;
//		if (AIn == AOut + BOut && BIn != AOut + BOut)
//		{
//			momentA--;
//			countA++;
//		}
//		if (BIn == AOut + BOut && AIn != AOut + BOut)
//		{
//			momentB--;
//			countB++;
//		}
//		if (momentA == -1)
//		{
//			cout << "A" << endl;
//			cout << countB << endl;
//			break;
//		}
//		if (momentB == -1)
//		{
//			cout << "B" << endl;
//			cout << countA << endl;
//			break;
//		}
//	}
//	return 0;
//}

//7-7
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int arr[4] = { 0 };
//	string s;
//	cin >> s;
//	int i = 0;
//	for (i = 0; i < s.size(); i++)
//	{
//		if (s[i] == 'g' || s[i] == 'G')
//		{
//			arr[0]++;
//		}
//		if (s[i] == 'p' || s[i] == 'P')
//		{
//			arr[1]++;
//		}
//		if (s[i] == 'l' || s[i] == 'L')
//		{
//			arr[2]++;
//		}
//		if (s[i] == 't' || s[i] == 'T')
//		{
//			arr[3]++;
//		}
//	}
//	int sum = arr[0] + arr[1] + arr[2] + arr[3];
//	for (i = 0; i < sum ; i++)
//	{
//		if (arr[0])
//		{
//			printf("G");
//			arr[0]--;
//		}
//		if (arr[1])
//		{
//			printf("P");
//			arr[1]--;
//		}
//		if (arr[2])
//		{
//			printf("L");
//			arr[2]--;
//		}
//		if (arr[3])
//		{
//			printf("T");
//			arr[3]--;
//		}
//	}
//	return 0;
//}

//7-4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100000] = { 0 };
//	int n, k, m ,s;
//	int flag = 0;
//	int i = 0;
//	cin >> n;
//	while (n--)
//	{
//		cin >> k;
//		for (i = 1; i <= k; i++)
//		{
//			cin >> s;
//			if (k != 1)
//			{
//				arr[s]++;
//			}
//		}
//	}
//	cin >> m;
//	while (m--)
//	{
//		cin >> s;
//		if (arr[s] == 0)
//		{
//			if (flag != 0)
//			{
//				printf(" ");
//			}
//			printf("%05d", s);
//			arr[s] = 1;
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("No one is handsome");
//	}
//	return 0;
//
//}
