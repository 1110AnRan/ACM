
//A-Array
//#include<bits/stdc++.h>
//using namespace std;
//int n, k;
//int arr1[100005], arr2[100005];
//int l, r;
//bool flag = false;
//int main()
//{
//	cin >> n >> k;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> arr1[i];
//	}
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (arr2[arr1[i]])
//		{
//			continue;
//		}
//		arr2[arr1[i]] = 1;
//		sum++;
//		if (sum == k)
//		{
//			r = i;
//			flag = true;
//			break;
//		}
//	}
//	memset(arr2, 0, sizeof(arr2));
//	sum = 0;
//	for (i = r; i >= 1; i--)
//	{
//		if (arr2[arr1[i]])
//		{
//			continue;
//		}
//		arr2[arr1[i]] = 1;
//		sum++;
//		if (sum == k)
//		{
//			l = i;
//			break;
//		}
//	}
//	if (flag)
//	{
//		cout << l << " " << r << endl;
//	}
//	else
//	{
//		cout << -1 << " " << -1 << endl;
//	}
//	return 0;
//}


//C-过河卒
//#include<bits/stdc++.h>
//using namespace std;
//int hoursex[8] = { 2,1,-1,-2,-2,-1,1,2 };
//int hoursey[8] = { 1,2,2,1,-1,-2,-2,-1 };
//int bx, by, hx, hy, board[25][25];
//long long dp[25][25];
//void init()
//{
//	for (int i = 0; i <= 7; i++)
//	{
//		if (hx + hoursex[i] >= 0 && hx + hoursex[i] <= bx
//			&& hy + hoursey[i] >= 0 && hy + hoursey[i] <= by)
//		{
//			board[hx + hoursex[i]][hy + hoursey[i]] = 1;
//		}
//	}
//}
//int main()
//{
//	cin >> bx >> by >> hx >> hy;
//	bx += 1, by += 1, hx += 1, hy += 1;
//	board[hx][hy] = 1;
//	init();
//	if (board[1][1] == 1)
//	{
//		cout << 0;
//		return 0;
//	}
//	dp[1][1] = 1;
//	for (int i = 1; i <= bx; i++)
//	{
//		for (int j = 1; j <= by; j++)
//		{
//			if (board[i][j])
//			{
//				continue;
//			}
//			else
//			{
//				dp[i][j] = max(dp[i - 1][j] + dp[i][j - 1], dp[i][j]);
//			}
//		}
//	}
//	cout << dp[bx][by];
//	return 0;
//}



//D-最大子段和
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, a;
//ll nums[2000005];
//ll dp[2000005];
//int main()
//{
//	cin >> n;
//	ll i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//	}
//	dp[1] = nums[1];
//
//	for (i = 2; i <= n; i++)
//	{
//		if (dp[i - 1] > 0)
//		{
//			dp[i] = dp[i - 1] + nums[i];
//		}
//		else
//		{
//			dp[i] = nums[i];
//		}
//	}
//	ll _max = dp[1];
//	for (i = 2; i <= n; i++)
//	{
//		_max = max(dp[i], _max);
//	}
//	cout << _max;
//	return 0;
//}

//E-珠心算测验
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int nums[105];
//map<int, int> mp;
//int main()
//{
//	cin >> n;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//	}
//	int j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = i + 1; j <= n; j++)
//		{
//			mp[nums[i] + nums[j]]++;
//		}
//	}
//	long long ans = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ans += mp.count(nums[i]);
//	}
//	cout << ans;
//	return 0;
//}


//F-数的划分
//#include<bits/stdc++.h>
//using namespace std;
//int n, k;
//int ans = 0;
//void dp(int num, int curk, int curn)
//{
//	if (curk == 1)
//	{
//		ans++;
//		return;
//	}
//	for (int i = num; i <= curn / curk; i++)
//	{
//		dp(i, curk - 1, curn - i);
//	}
//}
//int main()
//{
//	cin >> n >> k;
//	dp(1, k, n);
//	cout << ans;
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int data;
    struct ListNode* next;
};

struct ListNode* readlist();
struct ListNode* getodd(struct ListNode** L);
void printlist(struct ListNode* L)
{
    struct ListNode* p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* L, * Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode* readlist()
{
    struct ListNode* head = NULL;
    int data;
    while (scanf("%d", &data))
    {
        if (data == -1)
        {
            break;
        }
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct ListNode* tail = head;
            while (tail->next)
            {
                tail = tail->next;
            }
            tail->next = newnode;
        }
    }
    return head;
}
struct ListNode* getodd(struct ListNode** L)
{
    struct ListNode* head = NULL;
    struct ListNode* Lcur = *L;
    struct ListNode* Lprev = *L;
    while (Lcur)
    {
        struct ListNode* newtail = head;
        struct ListNode* next = Lcur->next;
        if (Lcur->data % 2 == 1)
        {
            if (head == NULL)
            {
                head = Lcur;
                head->next = NULL;
                Lprev->next = next;
            }
            else
            {
                while (newtail->next)
                {
                    newtail = newtail->next;
                }
                newtail->next = Lcur;
                Lcur->next = NULL;
                Lprev->next = next;
            }
        }
        Lcur = next;
        next = next->next;
    }
    return head;
}