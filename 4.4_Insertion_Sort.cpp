#include <iostream>
using namespace std;
void insertionSort(int *A, int n)
{  
   int i, j, temp, key;
   for(i = 1; i<n; i++)
   {
      j = i-1, key = A[i];
      while(j >= 0 && A[j] > key)
      {
          A[j+1] = A[j];
           j = j-1;
      }
      A[j+1] = key;
  } 
}
int main()
{
    int n = 5;
    int a[5] = {5, 4, 4, 2, 1};
    
      insertionSort(a, n);
  
      cout<<"Array after sortng \n";
        for(int i = 0; i<n; i++)
          printf("%d ", a[i]);     
}
