#include<bits/stdc++.h>
using namespace std;
int t;
int n;
struct node{
	long long a;
	long long b;
}a[200007];
long long sum[200007];
bool cmp(node xx, node yy)
{
	return xx.a < yy.a;
}
 
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%lld",&a[i].a);
		for(int i=1;i<=n;i++) scanf("%lld",&a[i].b);
		sort(a + 1, a + 1 + n, cmp);
		for(int i=1;i<=n;i++)
		{
			sum[i] = 0;
			sum[i] = a[i].b + sum[i - 1];
		}
		long long ans = sum[n];
		for(int i=1;i<=n;i++)
		{
			ans = min(ans, max(a[i].a, sum[n] - sum[i]));
		}
		printf("%lld\n",ans);
	}
	return 0;
}