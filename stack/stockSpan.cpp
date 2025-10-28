class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        vector<int>ans;
        stack<int>st;
        st.push(0); // 1st Element Push
        ans.push_back(1);
        for(int i=1;i<arr.size();i++){
            int Element=arr[i];
            while(st.empty()==false && Element >=arr[st.top()]){
                st.pop();
            }
            if(st.empty()==true){
                ans.push_back(i+1);
            }else{
                ans.push_back(i-st.top());
            }
            st.push(i);
        }
        return ans;
    }
};