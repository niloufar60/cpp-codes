//
//  p449-prtsort.cpp
//  
//
//  Created by Niloufar on 2018-08-17.
//

#include <iostream>
using namespace std;

int main()
{
    void bsort(int*,int);
    const int N=10;
    
    int arr[N]={37,84,62,91,11,65,57,28,19,49};

    bsort(arr,N);
    
    for (int j=0;j<N;j++)
    {
        cout << arr[j] << " " << endl;
    
    }
    
    return 0;
    
}
void bsort(int* ptr,int n)
{
    void order (int*,int*);
    int j,k;
    
    for (j=0;j<n-1;j++)
        for (k=j+1;k<n;k++)
            order(ptr+j,ptr+k);
    
}

void order(int* num1,int* num2)
{
    if (*num1>*num2)
    {
        int temp=*num1;
        *num1=*num2;
        *num2=temp;
    }
}






























