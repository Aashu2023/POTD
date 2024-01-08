    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        
        int n;
        cin>>n;
        
        while(n--){
            int a;
            cin>>a;
            vector<int> ans;
            while(a!=0){
                int d=a%10;
                ans.push_back(d);
                a=a/10;
            }
            int m=ans.size();
            if(m==2) cout<<ans[0]<<endl;
            else{
                
                cout<<*min_element(ans.begin(),ans.end())<<endl;
                
            }
        }
        return 0;
    }