#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;

inline void InitRand(){
    srand((unsigned int)time(NULL));
}
inline int Dice(){
  return ((int)rand()%6)+1;
}
int main(){
  string name;
  int n,m;
  cout<<"What is your name?\n>";
  cin>>name;

  cout<<"Hello, "<<name<<"!"<<endl
      <<"Rolling the dice..."<<endl;
  InitRand();
  n=Dice();
  m=Dice();
  cout<<"Die1: "<<n<<endl
      <<"Die2: "<<m<<endl
      <<"Total value: "<<n+m<<endl;
  if((n+m)>=7){
    cout<<name<<" won!"<<endl;
  }
  else{
    cout<<name<<" lost!"<<endl;
  }
  
  
}
