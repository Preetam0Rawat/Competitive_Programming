#include <iostream>
using namespace std;
void bubbleSort(int *A, int n)
{  
   int i, j, temp;
   for(i = 0; i<n-1; i++)
   {
    for(j = 0; j<n-i-1; j++)
    {
      if(A[j] > A[j+1])        
      {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  
  } 
}
int main()
{
    int n = 5;
    int a[5] = {2, 4, 1 ,4 ,5};
    
      bubbleSort(a, n);
  
      cout<<"Array after sortng \n";
        for(int i = 0; i<n; i++)
          printf("%d ", a[i]);     
}
