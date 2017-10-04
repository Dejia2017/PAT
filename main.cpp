#include<cstdio>
#include<stack>
#include<map>
#include<utility>
#include<string>
#include<iostream>
#include<algorithm>
#include<cmath>
//#include<math.h>
using namespace std;


int main(){
    int a,b,c,sum;
    scanf("%d %d",&a,&b);
    c=a+b;
    sum=abs(c);
    if(sum<1000){
        printf("%d",c);
    }
    else if(sum>=1000&&sum<1000000){
        printf("%d,%03d",c/1000,sum%1000); //小的那一部分要补全0,用c可以保证正负号
    }
    else{
        printf("%d,%03d,%03d",c/1000000,(sum/1000)%1000,sum%1000);
    }
   // printf("%d",&c);
    return 0;

}
