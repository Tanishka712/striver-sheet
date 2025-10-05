class Solution {
public:
    vector<int> divisors(int n) {
        int i;
        vector<int> arr(n); 
        int count = 0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            arr[count]=i;
            count++;
        }
        arr[count]=n;
        cout++;
        arr.resize(count);
        return arr;

    }
};
