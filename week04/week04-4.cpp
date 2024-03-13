#include <stdio.h>
int main()
{
    int a =3;
    while(a>0)
    {
        printf("a是%d\n", a);///一直印
        a--;///a就變小了
        ///其實就是a-= 1 的縮寫
    }
    for(int b=3; b>0; b--){
        printf("b是%d\n", b);
    }///for 迴圈 精簡有力

}


