//Check whether number is power of two or not//
bool isPowerOfTwo(int n) 			//O(1)
{
	return ((n!=0)&&((n&(n-1))==0));
}
