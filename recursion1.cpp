// sum of n numbers
class Solution{	
	public:
		int NnumbersSum(int N){
			//your code goes here
            if (N == 0)
				return 0;
            int sum=0;
            sum=NnumbersSum(N-1)+N;
            return sum;
		}
};
