pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	// Write your code here.
    pair<int,int> rs;
    int first=-1,last=-1,low=0,high=n-1;
    while(low <= high){
        int mid=low+(high-low)/2;
        if(arr[mid] > x){
                high=mid-1;
        }
        else if(arr[mid] < x){
            low=mid+1;
        }
                
        else{
            first=mid;
            high=mid-1;
        }
    }
            
    int left=0,right=n-1;
    while(left <= right){
        int mid=left+(right-left)/2;
        if(arr[mid] > x){
            right=mid-1;
        }
        else if(arr[mid] < x){
            left=mid+1;
        }
                
        else{
            last=mid;
            left=mid+1;
        }
    }
    rs.first=first;
    rs.second=last;
    return rs;
}

