/*
#include <bits/stdc++.h>
using namespace std;
int x,y,n,nn,an,dir,dt,ans,i,a[101];
int main()
{
    cin >> x >> y >> n;
    nn=2*x+2*y; //total distance
    for(i=0;i<=n;i++){
        cin >> dir >> dt;
        if(dir==1)a[i]=dt;
        else if(dir==2)a[i]=x+y+x-dt;
        else if(dir==3)a[i]=nn-dt;
        else a[i]=x+dt;
    }
    an=a[n];
    for(i=0;i<n;i++){
        int r,l;
        r=abs(a[i]-an);
        l=nn-r;
        ans+=min(r,l);
    }
    printf("%d",ans);
    return 0;
}
*/
/*
 * -> 을 시작으로 모든 상점과 동근이의 거리를 잰뒤
 * 동근이와 상점간의 거리를 구하고, 총 거리의 반보다 작으면 그 거리를 답에 더하고
 * 그렇지 않으면 총 거리 - 해당 거리를 더해준다.
 */

