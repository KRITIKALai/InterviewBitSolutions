vector<int> Solution::sieve(int A) {
    vector<int> primes = {};
    vector<int> primreg = {};
    for(int i = 0; i<A; i++){
        primreg.push_back(1);
    }
    primreg[0]=0;
    primreg[1]=0;
    
    for(int i = 2; i<=sqrt(A); i++){
        if(primreg[i]==1){
            for(int j=2;i*j<=A;j++){
                primreg[i*j] = 0;
            }
        }
    }
    for(int i=0;i<primreg.size();i++){
        if(primreg[i]==1) primes.push_back(i);
    }
    return primes;
}
