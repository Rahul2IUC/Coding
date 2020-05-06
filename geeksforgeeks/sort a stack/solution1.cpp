/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   int n = s.size()-1; //
   int arr[n];
   for(int i= 0;i<=n;i++) {
       arr[i] = s.top();
       s.pop();
    }
    //Bubble sorting Algorithm
   for(int j=0;j<=n;j++) {
       for(int k=0;k<=n-j-1;k++) {
           if(arr[k]>arr[k+1]) {
               int temp = arr[k];
               arr[k] = arr[k+1];
               arr[k+1] = temp;
           }
       }
   }
   //Display the array
  for(int l=n;l>=0;l--){
       cout<<arr[l]<<" ";
   }
  
}