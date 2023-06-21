#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    int count=0;
    for(int i=0; i<n-1; i++)
    {
        int sum=0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
                sum++;
        }
        count+=sum;
    }
    return count;
}