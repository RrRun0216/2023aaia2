#include <stdio.h>
int main()
{
	int n,ans=0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		ans++;
	}
	printf("%d", ans);
}