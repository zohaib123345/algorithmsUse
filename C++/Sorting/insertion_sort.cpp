#include <bits/stdc++.h> 
using namespace std; 
  

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  

/* Driver code */
int main()  
{  
    time_t start, end;
    
   int n=100000;    
    
   int arr[n];
  
  
  
     for(int i = 0; i<n; i++) 
    {
    arr[i] =rand();
    }
    
  
    time(&start); 
  
    // unsync the I/O of C and C++. 
    ios_base::sync_with_stdio(false); 
  
     insertionSort(arr, n);  
 
  
    // Recording end time. 
    time(&end); 
  
  for(int i = 0; i<n; i++) 
    {
    cout<<arr[i]<<endl;
    }
    
  
    // Calculating total time taken by the program. 
    double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
  
    return 0;  
}
