void sieve(int n)						//O(nloglogn)
{
	vector <bool> isPrime(n+1, true);
	for(int i=2; i<=n; i++)
	{
		if(isPrime[i])
		{
			cout << i << " ";
			for(int j=i*i; j<=n; j+=i)
			{
				isPrime[j] = false;
			}
		}
	}
}
				
