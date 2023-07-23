///// Generate subsets /////
void genSets(string s, string curr="", int i=0) {
   if(i==s.length()) {
       cout << curr;
       return;
   }
   genSets(s,curr,i+1);
   genSets(s,curr + s[i], i+1);
}
