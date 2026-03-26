 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int sum =0;
    short int n , a ,b;
    cin>>n>>a>>b;
    for(int i=1 ;i<=n;i++)
    {
        int x=i ,sum1=0;
        if(i>=10)
    {
           while(x)
        {
            sum1 +=x%10;
            x/=10;
        }
        if(sum1>=a && sum1<=b)
        {
            sum+=i;
        }
    }else
    {
        if(i>=a && i<=b)
        {
            sum+=i;
        }
    }  
  }
       
    cout<<sum;
 }