class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);

        if(head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return ans;

        int prev=head->val;
        vector<int> arr;

        ListNode* hd=head->next;
        int i=1;

        while(hd->next!=nullptr)
        {
            if(hd->val>prev && hd->val>hd->next->val)
            {
                arr.push_back(i);
            }
            if(hd->val<prev && hd->val<hd->next->val)
            {
                arr.push_back(i);
            }

            i++;
            prev=hd->val;
            hd=hd->next;
        }

        if(arr.size()<2)
            return ans;

        int mn=INT_MAX;

        for(int i=0;i<arr.size()-1;i++)
        {
            mn=min(mn,arr[i+1]-arr[i]);
        }

        ans[0]=mn;
        ans[1]=arr.back()-arr.front();

        return ans;
    }
};