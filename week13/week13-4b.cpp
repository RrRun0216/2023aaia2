#include<stdio.h>
int gcd(int a, int b){
	if(a==0) return b;
	if(b==0) return a;//¥i¼g¥i¤£¼g
	return gcd(b, a%b);
}
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a,b) );
}
