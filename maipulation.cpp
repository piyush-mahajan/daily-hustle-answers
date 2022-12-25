long arrayManipulation(int n, vector<vector<int>> queries) {
    /* Implementing the prefix sum methodology
       temp vector initialized with zero for each element  */
    vector<int> temp(n+1,0);
    
    // traversing each query using for loop
    for(int i=0;i<queries.size();i++){
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        
        // adding k at a'th index
        temp[a]+=k;
        // decrement the (b+1)th index by k 
        if((b+1)<=n){
            temp[b+1] -= k;
        }
    }
    
    //Storing the value maxSum to get the largest value from sum
    long sum = 0, maxSum=0;
    for(int i : temp){
        sum+= i;
        maxSum = max(sum, maxSum);
    }
    return maxSum;   
}