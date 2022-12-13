// https://www.hackerrank.com/contests/daily-hustle/challenges/dynamic-array
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    int lastAnswer=0;
    vector<int> out;
    for(int i=0;i<queries.size();i++){
        auto q=queries[i];
        auto x=q[1];
        auto y=q[2];
        auto id=0;
        if(q[0]==1){
            id=(x^lastAnswer)%n;
            arr[id].push_back(y);
        }else{
            id=(x^lastAnswer)%n;
            lastAnswer=arr[id][y%arr[id].size()];
            out.push_back(lastAnswer);
        }
    }
    return out;
    
}