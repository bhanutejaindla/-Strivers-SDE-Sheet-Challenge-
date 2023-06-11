bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++)
    {
        int low=0,high=m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mat[i][mid]==target)  return true;
            if(mat[i][mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return false;
}
