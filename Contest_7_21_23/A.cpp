#include<bits/stdc++.h>
using namespace std;
void rajib(){

   int t;std::cin>>t;
   while(t--){
    int a,b,c;
    std::cin>>a>>b>>c;
     int sum=a+c;
     int sum1=a+b;
     int sum2=b+c;
  if(sum>=10){
    std::cout<<"Yes"<<std::endl;
  }
   else if(sum1>=10)
   {
       std::cout<<"Yes"<<std::endl;

   }else if(sum2>=10)
   {
       std::cout<<"Yes"<<std::endl;

   }
  else{
      std::cout<<"No"<<std::endl;
  }
   }

}
int main()
{

   rajib();


}
