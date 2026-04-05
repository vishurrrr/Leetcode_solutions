class Solution {
public:
    int bloomday(vector<int>& bloomDay, int m,int mid, int k){
        int conscount=0,bouqcount=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid ){
                conscount++;
            }
            else{
                conscount=0;
            }
            if(conscount==k){
                bouqcount++;
                conscount=0;
            }
        }
        return bouqcount;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start_day=0;
        int end_day=*max_element(bloomDay.begin(), bloomDay.end());
        int res=-1;
        while(start_day<=end_day){
            int mid=start_day+(end_day-start_day)/2;
            if(bloomday( bloomDay,  m, mid,k)>=m){
                    res=mid;
                    end_day=mid-1;
            }
            else{
            start_day=mid+1;
            }
        }
        return res;
    }

};