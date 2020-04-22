int Solution::firstMissingPositive(vector<int> &A) {
int l = A.size(), val = 1;
    sort(A.begin(), A.end());
    for(int i = 0; i<l; i++){
        if(A[i]>0){
            if(A[i] != val){return val;}
            else {val = val + 1;}
        }
    }
    return val;
}
