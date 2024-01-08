 //A. Short Sort:-For each test case, output "YES" if you can make the row abc
//  with at most one operation, or "NO" otherwise.
       //input
//  6
// abc
// acb
// bac
// bca
// cab
// cba
        //output
// YES
// YES
// YES
// NO
// NO
// YES

  #include<bits/stdc++.h>
    using namespace std;
    int main(){
        
        int n;
        cin>>n;
        
        while(n--){
            string s="";
            cin>>s;
            int count=0;
            if(s[0]=='a') count++;
            else if(s[1]=='b') count++;
            else if(s[2]=='c') count++;
            if(count>=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
        }
        return 0;
    }