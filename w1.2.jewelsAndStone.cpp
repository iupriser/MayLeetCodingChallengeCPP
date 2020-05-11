class Solution {
public:
    int numJewelsInStones(string J, string S) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans=0;
        for(auto ch:J)
        {
            ans=ans+count(S.begin(),S.end(),ch);
        }
        return ans;
    }
};

    //  Another version
    // int numJewelsInStones(string J, string S) {
    //     int res = 0;
    //     unordered_set<char> setJ(J.begin(), J.end());
    //     for (char s : S)
    //         if (setJ.count(s)) res++;
    //     return res;
    //}
