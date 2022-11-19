   #include<bits/stdc++.h>
using namespace std;
#define             ll long long
#define             ld long double
#define             pb push_back
#define             ull unsigned long long
#define             scn(n) scanf("%d",&n)
#define             lscn(n) scanf("%lld",&n)
#define             lpri(n) printf("%lld",n)
#define             pri(n) printf("%d",n)
#define             pln() printf("\n")
#define             rep(i,init,n) for(int i=init;i<n;i++)
#define             rev(i,n) for(int i=n-1;i>=0;i--)
#define             pb push_back
#define             mp make_pair
#define             F first
#define             S second
#define             endl "\n"
#define             VC vector<ll>
#define             VV vector<vector<ll>>
#define             MP map<ll,ll>
#define             pll pair<ll,ll>
#define             tc ll ttt; cin>>ttt; while(ttt--)
 int xxor(vector<int>v){
    int sum=0;
    rep(i,0,v.size()){
        sum=sum^v[i];
    }
    return sum;
 }
int bs(vector<int>&v,int ele){
   ll start=0;
   ll end=v.size()-1;
   
    while(start<=end){
        ll mid=start+((end-start)/2);
          if(ele==v[mid]){
           return mid;
        }

        else if(ele>v[mid]){
        
            start=mid+1;

        }
        else if(ele<v[mid]){
          end=mid-1;
        }
        
           }
    return -1;
}
void solve(){
  int n;cin>>n;
  if(n==1){
    cout<<1<<endl;
    cout<<1<<" "<<2<<endl;
  }
  else{
  string s1="BAN",s2="NAB";
  string sa="",ss="";
  rep(i,0,n){
    sa=sa+s1;
    ss=ss+s2;
  }
  int ct=0;
  vector<int>vb,va,vn;
  for(int i=ss.size()-1;i>=(2*n)+1;i--){
    if(ss[i]=='N'){
      ct++;
    }
  }
  int ans=n-ct;
  int an=ans;
  rep(i,0,sa.size()){
    if(sa[i]=='B'){
      vb.pb(i+1);
    }
    else if(sa[i]=='A'){
      va.pb(i+1);
    }
    else if(sa[i]=='N'){
      vn.pb(i+1);
  }
}
vector<pair<int,int>>v1;
sort(vn.begin(),vn.end(),greater<int>());
rep(i,0,vn.size()){
  if(vb[i]<vn[i]){
    v1.pb(mp(vb[i],vn[i]));
  }
}

cout<<v1.size()<<endl;
rep(i,0,v1.size()){
  if(v1[i].first<v1[i].second){
    cout<<v1[i].first<<" "<<v1[i].second<<endl;
  }
}
 }
}
  

int main(){
   tc{
      solve();}}