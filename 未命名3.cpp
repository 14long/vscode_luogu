#include<bits/stdc++.h>

const long long mod=10000000000;

using namespace std;

const int N=2001;

int P, l=1,lb=1;

int a[N]= {},b[N]= {},c[N]={};

int cheng1() {
    memset(c,0,sizeof(c));
    for (int i = 1; i <= l; ++i)   {
        for (int j = 1; j <= lb; ++j) {
            c[i+j-1] += a[i] * b[j];
            c[i+j] += ( c[i+j-1] ) / 10;
            c[i+j-1] %= 10;
        }
    }
    int lc = l + lb;
    while( c[lc] == 0 ) -- lc;
    for(int i = 1;i <= lc; ++i){
        a[i] = c[i];
    }
    return lc>500?500:lc;
}
int cheng2() {
    memset(c,0,sizeof(c));
    for (int i = 1; i <= lb; ++i)   {
        for (int j = 1; j <= lb; ++j) {
            c[i+j-1] += b[i] * b[j];
            c[i+j] += ( c[i+j-1] ) / 10;
            c[i+j-1] %= 10;
        }
    }
    int lc = lb + lb;
    while( c[lc] == 0 ) -- lc;
    for(int i = 1;i <= lc; ++i){
        b[i] = c[i];
    }
    return lc>500?500:lc;
}

void power() {
    while( P ) {
        if( P & 1 ) l = cheng1 ( );
        P >>= 1;
        lb = cheng2 ( );
    }
}

int main() {
//	freopen("mason.in","r",stdin);
//	freopen("mason.out","w",stdout);
    memset( a, 0, sizeof(a));
    memset( a, 0, sizeof(b));
    scanf("%d",&P);
    printf("%d\n",int (P*log10(2.0)+1)); 
    a[1] = 1;
    b[1] = 2;
    power();
    -- a[1];
    for (int i = 500; i >= 1; --i) {
        printf("%d",a[i]);
        if ( ! ( (i-1) % 50 ) ) printf("\n");
    }
    return 0;
}
