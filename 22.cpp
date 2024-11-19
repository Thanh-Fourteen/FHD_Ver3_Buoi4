#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N,M;
        scanf("%d%d",&N,&M);
        int res=5 * N + 7 * M;
        printf("%d\n",res);
    }
    return 0;
}
