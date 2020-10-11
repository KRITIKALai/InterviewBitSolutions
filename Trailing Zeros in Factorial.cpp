/*
int fivesCounter(int n){
    int count = 0;
    while(n%5 == 0){
        count = count+1;
        n = n/5;
    }
    return count;
}

int twosCounter(int n){
    int count = 0;
    while(n%2 == 0){
        count = count+1;
        n = n/2;
    }
    return count;
}

int Solution::trailingZeroes(int A) {
    int twosCount = 0, fivesCount = 0;
    for(int i=2; i<=A; i++){
        twosCount += twosCounter(i);
        fivesCount += fivesCounter(i);
    }
    if (twosCount > fivesCount) return fivesCount;
    else return twosCount;
}*/

int Solution::trailingZeroes(int A) {

    int count = 0;
    while(A>0){
        count += A/5;
        A /= 5;
    }
    return count;
}
