#include <iostream>
using namespace std;
void selectionSort(int *A, int n)
{  
   int i, j, temp, min;
   for(i = 0; i<n-1; i++)
   {
      min = i;
       for(j = i+1; j<n; j++)
        {
            if(A[j] < A[min])        
             {
                min = j;
                temp = A[min];
                A[min] = A[i];
                A[i] = temp;
             }
       }
  
  } 
}
int main()
{
    int n = 5;
    int a[5] = {5, 4, 4 , 2, 1 };
    
      selectionSort(a, n);
  
      cout<<"Array after sortng \n";
        for(int i = 0; i<n; i++)
          printf("%d ", a[i]);     
}
