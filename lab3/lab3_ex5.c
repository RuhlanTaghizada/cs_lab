#include<stdio.h>

int main() {
    int runnerCoord1, runnerCoord2, runnerSpeed1, runnerSpeed2, timer = 0, c;
    puts("Enter the coordinate and speed of runner 1: ");
    scanf("%d%d", &runnerCoord1,&runnerSpeed1); 
    puts("Enter the coordinate and speed of runner 2: ");
    scanf("%d%d", &runnerCoord2,&runnerSpeed2);  
    if (runnerCoord2 > runnerCoord1){
        if (runnerCoord1<runnerCoord2 && runnerSpeed1<=runnerSpeed2){ 
            printf("They will never meet");
        } else if (((runnerCoord1<0 && runnerCoord2>0) && (runnerSpeed1<0 && runnerSpeed2>0))|| (runnerCoord1>0 && runnerCoord2<0) && (runnerSpeed1>0 && runnerSpeed2<0)) {
            printf("They will never meet");
        }  else {
            for (; runnerCoord1<=runnerCoord2; runnerCoord1+=runnerSpeed1, runnerCoord2+= runnerSpeed2){
            timer++;
            }

            printf("They will meet after %d seconds and coordinate is %d", timer, runnerCoord1);
        }        
    } else if (runnerCoord2 < runnerCoord1){
        if (runnerCoord1>runnerCoord2 && runnerSpeed1>=runnerSpeed2){ 
            printf("They will never meet");
        } else if (((runnerCoord1<0 && runnerCoord2>0) && (runnerSpeed1<0 && runnerSpeed2>0))|| (runnerCoord1>0 && runnerCoord2<0) && (runnerSpeed1>0 && runnerSpeed2<0)) {
            printf("They will never meet");
        }  else {
            for (; runnerCoord1>=runnerCoord2; runnerCoord1+=runnerSpeed1, runnerCoord2+= runnerSpeed2){
            timer++;
            }

            printf("They will meet after %d seconds and coordinate is %d", timer, runnerCoord1);
        }   

    return 0;
}
