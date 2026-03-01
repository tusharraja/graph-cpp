#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minMutation(string s, string e, vector<string>& b) {
        unordered_set<string> st;
        for(auto x:b){
            st.insert(x);
        }
        if(st.find(e)==st.end()){
            return -1;
        }
        int n=s.size();
        string change="ACGT";
        queue<string> q;
        q.push(s);
        int lvl=0;
        while(q.size()>0){

            int size=q.size();
            while(size--){
            auto f=q.front();
            if(f==e){
                return lvl;
            }
            q.pop();
            int m=f.size();
            for(int i=0;i<m;i++){
                char temp=f[i];
                for(int j=0;j<4;j++){
                    f[i]=change[j];
                    if(st.find(f)!=st.end()){
                        q.push(f);
                          if(f==e){
                return lvl+1;
            }
                        st.erase(f);
                    }
                }

                f[i]=temp;
            }

            }
            lvl++;
        }

        return -1;
      


        
        
    }
};