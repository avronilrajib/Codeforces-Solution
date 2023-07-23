#include<bits/stdc++.h>
using namespace std;
int main(){

  int t; cin>>t;
  while(t--)
  {
      std::vector<std::string> grid(8);

      for(int i = 0; i < 8; ++i)
      {
          std::cin >> grid[i];
      }

      std::string answer="";

      for(int i=0; i < 8; i++){
        for(int j=0;j<8; j++){
            if(grid[i][j]!='.'){
                answer+=grid[i][j];
            }
        }
      }
      std::cout<<answer <<std::endl;
  }

}
