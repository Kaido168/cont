#include <stdio.h>
#include <time.h>

int getSeconds(int k) {
    int secondsSLH = k % 3600; //SLH - Since Last Hour
    return secondsSLH;
}
int main(){
    int result = getSeconds(5000);
    printf("%d", result);
    return 0;
}