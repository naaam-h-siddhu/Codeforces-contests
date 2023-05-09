#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define fr first
#define sc second
#define all(x) (x).begin(),(x).end()
// void updater(int a, int b, int c, int d){

// }
// void querieee(vector<int> arr){

// }
void solve(){
	// string x = "UPDATE 23 4 12 45";
	// string y = "QUERY 3 4 2 4 6 7";
	string s ;
	cin>>s;
	if(s[0]== 'U'){
		vector<int>arr;
		// int i = 7;
		for (int i = 7; i < s.length(); ++i)
		{
			/* code */
			bool flag = 0;
			string temp;
			while(s[i]!=' '){
				temp.pb(s[i]);
				flag = true;
				i++;
			}
			if(flag)
			{	
				arr.pb(stoi(temp));

			}


		}
		for(auto it:arr)
			cout<<it<<" ";
	}
	// if(s[0] == 'Q')

}

signed main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}