/*
d8b   db  .d8b.   .d8b.   .d8b.  .88b  d88.         db   db         .d8888. d888888b d8888b. d8888b. db   db db    db 
888o  88 d8' `8b d8' `8b d8' `8b 88'YbdP`88         88   88         88'  YP   `88'   88  `8D 88  `8D 88   88 88    88 
88V8o 88 88ooo88 88ooo88 88ooo88 88  88  88         88ooo88         `8bo.      88    88   88 88   88 88ooo88 88    88 
88 V8o88 88~~~88 88~~~88 88~~~88 88  88  88         88~~~88           `Y8b.    88    88   88 88   88 88~~~88 88    88 
88  V888 88   88 88   88 88   88 88  88  88         88   88         db   8D   .88.   88  .8D 88  .8D 88   88 88b  d88 
VP   V8P YP   YP YP   YP YP   YP YP  YP  YP C88888D YP   YP C88888D `8888Y' Y888888P Y8888D' Y8888D' YP   YP ~Y8888P' 
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define fr first
#define sc second
#define srt(a) sort((a).begin(),(a).end());
#define dsrt(a) sort((a).begin(),(a).end(),greater<>())
void solve(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(y2<y1 or (y1 == y2 and x2>x1)){
		cout<<-1<<endl;
		return;

	}
	int step=0;
	bool flag = false;
	while(y1 != y2){
		step++;
		x2-=1;
		y2-=1;
		if(y1==y2){
			if(x2>x1)
				flag = true;
		}
	}
	if(flag){
		cout<<-1<<endl;
		return;
	}
	step += abs(x1-x2);
	cout<<step<<endl;
	return;
}
signed main(){
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);
	int test;
	cin>>test;
	while(test--){ 
		solve();
	}
	return 0;
}