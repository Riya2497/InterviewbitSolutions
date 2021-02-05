int Solution::solve(vector<int> &A, int B) {
    
    int i, j, sum, res, n;
    
    sum = 0;
    n = A.size();
    for(i=0; i<B; i++){
        sum += A[i];
    }
    res = sum;
    
    for(i=0; i<B; i++){
        sum -= A[B-1-i];
        sum += A[n-1-i];
        
        res = (res > sum) ? res : sum;
    }
    
    return res;
    
}
