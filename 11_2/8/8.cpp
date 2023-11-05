#include<iostream>
#include<algorithm>

using namespace std;

char s[55][55];

int main(){
    int n;
    cin>>n;
    while(n!=EOF){
        int mid=(n-2)/2+1;
        for(int i=1;i<=n;i++)cout<<'$';
        cout<<endl;
        for(int i=1;i<=n-2;i++){
            cout<<'$';
            for(int j=1;j<=n-2;j++){
                if(abs(i-mid)+abs(j-mid)==mid-1)cout<<'*';
                else cout<<' ';
            }
            cout<<'$'<<endl;
        }
        for(int i=1;i<=n;i++)cout<<'$';
        cout<<endl;       
        cin>>n;
    }

}