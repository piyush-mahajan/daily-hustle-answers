// https://www.hackerrank.com/contests/daily-hustle/challenges/arrays-dss

public static List<Integer> reverseArray(List<Integer> a) {
        int l =0;
        int r = a.size()-1;
        while(l<=r)
        {
            int temp1 = a.get(l);
            int temp2 = a.get(r);
            a.set(l, temp2);
            a.set(r, temp1);
            l++;
            r--;
        }
        return a;
    }