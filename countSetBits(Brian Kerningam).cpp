
//Count the number of 1(s) in Binary Repn of a number //
int countBits(int n)					//Brian Kerningam's Algorithm
{										//O(no. of setBits in n)
	int res=0;
	while(n>0)
	{
		n = n&(n-1);
		res++;
	}
	return res;
}
	
