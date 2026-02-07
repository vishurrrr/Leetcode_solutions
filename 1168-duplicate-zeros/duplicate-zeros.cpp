class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
           if(arr[i]==0){
                for(int j=n-1;j>i;j--){
                     // Shift all elements to the right
                    arr[j]=arr[j-1];
                }
                 i++;// Skip the duplicated zero
            }
       }
    }
};