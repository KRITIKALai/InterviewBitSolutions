int Solution::isPrime(int A) {
  vector<int> factor = {};
  for(int i = 1; i<=sqrt(A); i++){
      if (A%i == 0){
      factor.push_back(i);
      if(i != sqrt(A)) factor.push_back(A/i);
     }
  }
  if (factor.size() == 2) return 1;
  else return 0;
}
