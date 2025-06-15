// link - https://leetcode.com/contest/weekly-contest-454/problems/generate-tag-for-video-caption/

class Solution {
public:
    string generateTag(string caption) {
        string s="#";   
        int i=0,n=caption.size();
        while(i<n && caption[i]==' '){
            i++;
        }
        if(i<n)s+=tolower(caption[i]);
        i++;
        cout<<s<<endl;
        for(i;i<n;i++){
            if(caption[i]!=' '){
                if(caption[i-1]==' '){
                    // cout<<"YES1\n";
                    s+=toupper(caption[i]);
                }
                else{
                    // cout<<"YES2\n";
                    s+=tolower(caption[i]);
                }
            }

            if(s.size()==100) return s;
        }

        return s;
    }
};
