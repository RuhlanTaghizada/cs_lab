#include<stdio.h>


int min(int n, int m){
    if(n>m){
        return m;
    }else{
        return n;
    }

}

int gcd(int n, int m){
    for(int k = min(n,m); k>=1; k--){
        if(n%k ==0 && m%k ==0){
            return k;
            break;
        }
    }
}

int main(){


    int n, m;
    puts("Enter the value");
    scanf("%d %d", &n, &m);
    printf("%d", gcd(n,m));

    return 0;
}