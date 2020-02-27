vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int l = 0, r = A[0].size()-1, t = 0, b = A.size()-1, k, dir = 0;
    vector<int> ar;
    while(l<=r && t<=b){
        if(dir == 0){
            for(k = l;k <= r; k++) cout<<A[t][k]<<" ";
            t++;
        }
        else if(dir == 1){
            for(k = t; k <= b; k++) cout<<A[k][r]<<" ";
            r--;
        }
        else if(dir == 2){
            for(k = r; k>= l; k--) cout<<A[b][k]<<" ";
            b--;
        }
        else if(dir == 3){
            for(k = b; k>= t; k--) cout<<A[k][l]<<" ";
            l++;
        }
        dir = (dir + 1)%4;
    }
    return ar;
}

