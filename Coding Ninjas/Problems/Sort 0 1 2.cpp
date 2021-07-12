void sort012(int *arr, int n)
{
   //   Write your code here
    
    //binary search approach
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid <= high){
        switch(arr[mid]){
            case 0:
                std::swap(arr[low++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                std::swap(arr[mid],arr[high--]);
                break;
        }
    }
}
