#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long int bitwise_op(long long int x, long long int y) {
    long long int modulo = pow(10,9)+7, A;

    if (y == 1) {
        return x;
    }
    if (y == 0) {
        return 1;
    }
    if(y%2==0){
        A = bitwise_op(x,y/2);
        return ((A * A) % modulo);
    } else {
        A = bitwise_op(x,(y-1)/2);
        return (((x * A) % modulo * A) % modulo);
    }
}

int main(){
    int t;
    long long int N, M, beta;
    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        scanf("%lld %lld", &N, &M);
        beta = (bitwise_op(2,N)-1);
        printf("%lld\n", (bitwise_op(beta,M)));
    }
	return 0;
}
