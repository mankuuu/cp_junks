int gcd(int a, int b)			//O(log(min(a,b))
{
if(b==0)
	return a;
else
	return gcd(b,b%a);
}

int lcm(int a, int b)
{
	return ((a*b)/gcd(a,b));
}
