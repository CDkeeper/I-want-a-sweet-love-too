#include<iostream>
#include<algorithm>
using namespace std;
const int N=1005;
int n,d;
char map[N];
int dp[N];
int main(){
	cin>>n>>d;
	cin>>map;
	int cnt=0,now_step=0,next_step=0,have_step=0;
	if(map[n-1]=='0')
	cout<<-1;
	else {
	while(now_step<n-1){
		for(int i=now_step+1;i<=now_step+d;i++){
			if(map[i]=='1'){
				next_step=i;
				have_step=1;
			}
		}
		if(have_step==0){
			break;
		}
		else {
			cnt++;
			now_step=next_step;
			have_step=0;
		}
		if(now_step>=n-1){
			have_step=1;
			break;
		}
	}
	if(have_step==0)
	cout<<"-1";
	else cout<<cnt;
}
}
