    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        string a="codeforces";
        int n;
        cin>>n;
        int i=0;
        while(i<n){
            int count=0;
            string s;
            for(int j=0;j<10;j++){
                cin>>s[j];
            }
            for(int k=0;k<10;k++){
                if(a[k]!=s[k]) count++;
            }
            cout<<count<<endl;
            i++;
        }
        return 0;
    }