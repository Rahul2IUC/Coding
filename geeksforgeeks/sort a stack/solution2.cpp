/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
  vector<int> v;
  while(!s.empty()){
      v.push_back(s.top());
      s.pop();
  }
  for(auto j = 0;j<v.size()-1;++j){
      for(auto i =0;i<v.size()-1;++i) {
          if(v[i]>v[i+1]) {
              int temp = v[i];
              v[i] = v[i+1];
              v[i+1] = temp;
          }
      }
  }
  for(auto i = v.rbegin();i!= v.rend();++i)
  cout<<*i<<" ";
   
}