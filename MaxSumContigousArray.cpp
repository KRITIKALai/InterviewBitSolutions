int Solution::maxSubArray(const vector<int> &A) {
    long int n = A.size();
    long int prev = 0, pres = 0;
    int flag = 0;
    long int j, sum = 0;
    for(j = 0; j<n; j++){
        if(A[j]<0) flag = 1;
        prev = prev + A[j];
        if(prev>pres) pres = prev;
        else if(prev<0) prev = 0;
    }
    if(flag == 1 && pres == 0) return *max_element(A.begin(), A.end());
    else return pres;
