///// PALINDROME FOR INT /////
bool ispal(int n)
{
  int rev = 0, temp = n, digit;
  while (n != 0)
  {
    digit = n % 10;
    rev = rev * 10 + digit;
  }
 
  if (rev == n)
  {
    return true;
  }
  else
  {
    return false;
  }
}
