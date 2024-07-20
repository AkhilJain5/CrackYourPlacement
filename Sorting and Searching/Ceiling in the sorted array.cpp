int ceilSearch(int arr[], int low, int high, int x) 
{ 
      
    int ans = -1;
    if(x <= arr[low]) 
        return low; 
    for(int i = low; i < high; i++) 
    { 
        if(arr[i] == x) 
        ans = i; 

        else if(arr[i] < x && arr[i+1] >= x) 
        ans = i+1; 
    }     
     
    return ans; 
} 