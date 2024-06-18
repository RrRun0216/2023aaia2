#include <stdio.h>
int main()
{
	char c[80];
	scanf("%s", c);
	int ans = 0;
	for(int i=0; c[i]!=0; i++) {
		if(c[i]>='0' && c[i]<='9') ans++;
	}
	printf("%d\n", ans);
}