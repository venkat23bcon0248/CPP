# include <iostream>
using namespace std;
int totalvolume ( int cans){
    return cans * 250;
   }

int main (){
    int cans;
    cout << "enter the number of cans";
    cin >> cans;
    cout << " the total volume of coke in " << cans <<" cans is" << totalvolume(cans);
   
  
}
