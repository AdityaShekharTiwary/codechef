#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
   int ans=1;
   for(int i=1; i<=n; i++){
       ans*=i;
   }
   return ans;
}

void permutations(char *ch, int i, vector<string> &v){
    if(ch[i]=='\0'){
       //cout<<ch<<" ";
       string s(ch);
       v.push_back(s);
       return;
    }
    for(int j=i; ch[j]!='\0'; j++){
        swap(ch[i],ch[j]);
        permutations(ch,i+1,v);
        swap(ch[i],ch[j]);
    }
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0; i<n; i++){
            arr[s[i]-'a']++;
        }
        
        char ch[9];
        int k=0;
        for(int i=0; i<26; i++){
            if(arr[i]){
                ch[k]='a'+i;
                k++;
            }
        }
        ch[k]='\0';

        
        cout<<factorial(k)<<endl;
        
        //vector<string> res;
        vector<string> v;
        permutations(ch,0,v);
        sort(v.begin(),v.end());
       
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
