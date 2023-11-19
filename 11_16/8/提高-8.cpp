#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int T;
	cin>>T;
	getchar(); 
	while(T--){
		string s;
		getline(cin,s);
		int len=s.size();
		int ans=len;
		for(int i=0;i<len;i++){
		if(s[i]==' '){
			ans--;
			continue;
			}
			cout<<s[i];
		}
		cout<<' '<<ans<<endl;
	}
	return 0;
}
