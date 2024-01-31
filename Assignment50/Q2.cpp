// 2. Given a string, Find the 1st repeated word in a string using unordered_map.
// Example:
// Input : "Ravi had been saying that he had been there"
// Output : had
// Input : "Ravi had been saying that"
// Output : No Repetition

#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<iterator>
using namespace std;
void solve(string s)
{
     unordered_map<string,int> mp;
     string t="",ans="";
     for(int i=s.length()-1;i>=0;i--)
     {
          if(s[i]!=' ')
          {
            t+=s[i];
          }
          else
          {
             mp[t]++;
             if(mp[t]>1)
             {
                ans=t;
             }
              t="";
          }  
     }
     mp[t]++;
     if(mp[t]>1)
     {
        ans=t;
     }
     if(ans!="")
     {
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
     }
     else
     {
        cout<<"NO Repetion"<<endl;
     }
}
int main()
{
    string str= "Ravi had been saying that he had been there";
    solve(str);
    return 0;
}
