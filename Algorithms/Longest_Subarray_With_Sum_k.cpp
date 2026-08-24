class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        map <long long, int> PSmap;
        int maxlen=0;
        long long sum=0;
        for (int i=0;i<arr.size();i++){
            sum+=arr[i];
            if (sum==k){
                maxlen=max(maxlen,i+1);
            }
            int rem=sum-k;
            if(PSmap.find(rem)!=PSmap.end()){
                int len=i-PSmap[rem];
                maxlen=max(len,maxlen);
            }
            if(PSmap.find(sum)==PSmap.end()){
            PSmap[sum]=i;
            }
        }
        return maxlen;
        
    }
};