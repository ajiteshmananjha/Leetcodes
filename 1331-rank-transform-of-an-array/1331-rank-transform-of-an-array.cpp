class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        if(arr.empty())
            return arr;

        unordered_map<int,int> mp;

        vector<int> tmp = arr;

        sort(tmp.begin(), tmp.end());

        int cnt = 1;
        mp[tmp[0]] = 1;

        for(int i = 1; i < tmp.size(); i++)
        {
            if(tmp[i] != tmp[i-1])
            {
                cnt++;
                mp[tmp[i]] = cnt;
            }
        }

        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};