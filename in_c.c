#include <stdint.h>
#include <stdio.h>
#define pie 3.14
void solve()
{
    int r;
    scanf("%d",&r);
    int area = pie*r*r;
    printf("%d",area);
}

int main(){
    solve();
}