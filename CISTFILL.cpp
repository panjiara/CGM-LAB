#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t,n,i,j,k,b,h,w,d,l,r=INT_MIN,flag,mid;
     long long int sum,cap;
     scanf("%d",&t);
     while(t--)
     {
         scanf("%d",&n);
         vector<pair<pair<int,int>,pair<int,int> > > v;
        for(i=0;i<n;i++){

         scanf("%d%d%d%d",&b,&h,&w,&d);
           r=max(r,(b+h));
        v.push_back(make_pair(make_pair(b,h),make_pair(w,d)));
        }
        scanf("%d",&cap);
        l=1;
        flag=0;
        cout<<r<<" "<<"r"<<endl;
        while(l<r)
        {
            sum=0;
            mid=l+(r-l)/2;
            for(i=0;i<v.size();i++)
            {
               if(v[i].first.first<=mid&&mid<=v[i].first.first+v[i].first.second)
               {
                   sum+=((mid-b)*w*d);
               }
               else if(v[i].first.first<=mid&&mid>v[i].first.first+v[i].first.second)
                {

                    sum+=(v[i].first.second*v[i].second.first*v[i].second.second);
                }
            }
            cout<<mid<<" "<<"m"<<endl;
            //getchar();
            if(sum>cap)
            {
               r=mid-1;
            }
            else if(sum<cap)
            {
                l=mid+1;
            }
            else
            {
                sum==cap;
                flag=1;
                break;
            }


        }
        if(flag==1)
        printf("%d\n",mid);
        else
            printf("OVERFLOW\n");





     }




     return 0;
 }
