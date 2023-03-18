#define _CRT_SECURE_NO_WARNINGS 1

//L1-001 Hello World!
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Hello World!" << endl;
//	return 0;
//}

//L1-003个位数的统计
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 0 };
//	char ch;
//	int i = 0;
//	while ((ch=getchar())!= '\n')
//	{
//		arr[ch - '0']++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			cout << i << ":" << arr[i] << endl;
//		}
//	}
//	return 0;
//}

//L1-004计算摄氏温度
//#include <iostream>
//using namespace std;
//int main()
//{
//	int F = 0;
//	cin >> F;
//	cout << "Celsius = " << 5 * (F - 32) / 9 << endl;
//	return 0;
//}

//L1-008求整数段和
//#include <iostream>
//using namespace std;
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	int sum = 0;
//	int count = 0;
//	int i = 0;
//	for (i = A; i <= B; i++)
//	{
//		sum += i;
//		count++;
//		printf("%5d", i);
//		if (count % 5 == 0)
//		{
//			printf("\n");
//		}
//
//	}
//	if (count % 5 != 0)
//	{
//		printf("\n");
//	}
//	cout << "Sum = "<< sum ;
//	return 0;
//}

//L1-010比较大小
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	int n = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		cin >> n;
//		v.push_back(n);
//	}
//	sort(v.begin(), v.end());
//	vector<int>::iterator it = v.begin();
//	for (; it < v.end() - 1; it++)
//	{
//		cout << *it << "->";
//	}
//	cout << *it;
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
typedef struct student
{
    char name[20];
    double s;
}stu;

int main()
{
    int n = 0;
    scanf("%d\n", &n);
    struct student stu[20];
    int i = 0;
    int x = 0;
    int y = 0;
    double min = stu[0].s;
    double max = stu[0].s;
    for (i = 0; i < n; i++)
    {
        gets_s(stu[i]name);
        scanf("%lf", stu[i].s);
        if (stu[i].s > max)
        {
            max = stu[i].s;
            x = i;
        }
        if (stu[i].s < min)
        {
            min = stu[i], s;
            y = i;
        }
    }
    printf("%.2lf %s", stu[x].s, stu[x].name);
    printf("%.2lf %s", stu[y].s, stu[y].name);
    return 0;
}