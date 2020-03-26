int Solution::maxArr(vector<int> &A) {
    int res1, res2;
    int n = A.size();
    int max1 = INT_MIN, min1 = INT_MAX; 
    int max2 = INT_MIN, min2 = INT_MAX; 
    for(int i = 0; i<n;i++){
        if(max1<A[i]+(i+1)) max1 = A[i]+(i+1);
        if(min1>A[i]+(i+1)) min1 = A[i]+(i+1);
        if(max2<A[i]-(i+1)) max2 = A[i]-(i+1);
        if(min2>A[i]-(i+1)) min2 = A[i]-(i+1);
    }
    res1 = max1 - min1;
    res2 = max2 - min2;
    
    if(res1 > res2) return res1;
    else return res2;
}
