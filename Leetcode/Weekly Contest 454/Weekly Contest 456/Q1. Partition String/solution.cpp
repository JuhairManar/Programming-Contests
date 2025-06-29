// link - https://leetcode.com/contest/weekly-contest-456/problems/partition-string/

class Solution {
public:
    vector<string> partitionString(string s) {
        map<string,bool>m;
        string ns;
        vector<string>vs;
        for(auto g:s){
            ns+=g;
            if(m[ns]==0){
                vs.push_back(ns);
                m[ns]=1;
                ns="";
                
            }
        }

        return vs;
    }
};
