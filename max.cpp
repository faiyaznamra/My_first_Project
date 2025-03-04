
#include <iostream>
#include<math.h>
   using namespace std;
int main() {
    int x,y,z;
    int min,max;
    cin>>x>>y>>z;
    min=x;
    max=x;
        //// MINIMUM VALUE/////
    if(x<min)
        min=x;
    if(y<min)
        min=y;
    if(z<min)
        min=z;
        //// MAXIMUM VALUE/////
    if(x>max)
        max=x;
    if(y>max)
        max=y;
    if(z>max)
        max=z;
        
    cout<<min <<" "<<max;
   
   
}