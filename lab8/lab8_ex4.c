#include<stdio.h>

void reverse(char arr[], char *tmp, int length){
    char *ptr;
    for(int i; i<length-1;i++){
        ptr = tmp +i;
        tmp+i = tmp-length+i;
        tmp-length+i = ptr;
    }
        


}

int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%c", arr);
    char *tmp = arr;
    int count = 0;
    for(int i =0; tmp+i!='\0'; i++){
        count++;
    }
    reverse(arr, *tmp, count);


    return 0;
}