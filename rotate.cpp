https://www.hackerrank.com/contests/daily-hustle/challenges/array-left-rotation
vector<int> rotateLeft(int d, vector<int> arr) {
    int temp = 0;
    while (d--) {
        temp = arr[0];
        arr.push_back(temp);
        arr.erase(arr.begin());    
    }
    return arr;
}