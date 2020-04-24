vector<int> Solution::plusOne(vector<int> &A) {

    int carry, flag = 0;
    vector<int> vec;
    reverse(A.begin(), A.end());
    A[0]+=1;
    carry = A[0]/10;
    A[0] = A[0]%10;
    for(int i =1; i<A.size(); i++){
        if(carry == 0) break;
        A[i]+=carry;
        carry = A[i]/10;
        A[i] = A[i]%10;
    }
    //appending carry if any
    if(carry != 0){
        A.push_back(carry);
    }
    reverse(A.begin(), A.end());
    //removing zeros preceeding the number
    for(int i = 0; i<A.size(); i++){
        if(A[i] != 0) flag = 1;
        if(flag == 1) vec.push_back(A[i]);
    }
    return vec;
}
