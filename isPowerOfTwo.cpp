//Check whether number is power of two or not//
bool isPowerOfTwo(int n) 			//O(1)
{
	if(n==0)
		return false;
	return (n&(n-1)==0);
}
