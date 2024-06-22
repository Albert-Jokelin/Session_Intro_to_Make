#include <iostream>
#include "../include/FOSSInclude.h"

using namespace std;

int main(){
  cout<<"Welcome to FOSS OS!"<<endl;
  function();
#ifdef Phone
  cout<<"You are running this on a phone!"<<endl;
#endif
#ifdef Laptop
  cout<<"You are running this on a laptop!"<<endl;
#endif
  return 0;
}
