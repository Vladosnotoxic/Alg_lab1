#include <iostream>
#include <cmath>

using namespace std;

int main()
{
setlocale(LC_ALL, "RU");
setlocale(LC_ALL, ".UTF8");
  float R, y;
    cout<<"Введите X";
    cin >> R;
  
    if(R<-2){
        y = -R-2;
    }else if(R<0){
        y = sqrt(1-pow(R+1,2));
    }else if(R<4){
        y = (sqrt(4-pow(R-2,2)))*(-1);
    }else if(R<6){
        y = (-0.5)*R+2;
    }else{
        y = -1;
    }
    cout<<"y = "<< y;
    return 0;
  }