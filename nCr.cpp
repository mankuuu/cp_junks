///// nCr /////
int nCr(int n, int r)
{
  if (n < r)
    return 0;
  int p = 1, k = 1;
  if (n - r < r)
    r = n - r;
 
  if (r != 0)
  {
    while (r)
    {
      p *= n;
      k *= r;
      int m = __gcd(p, k);
      p /= m;
      k /= m;
      n--;
      r--;
    }
  }
  else
    p = 1;
  return p;
}
