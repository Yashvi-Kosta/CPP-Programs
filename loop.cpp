#include<iostream>
using namespace std;



int main() {

//      //for
//      for(int count = 1; count <=108; count = count + 1) {
//         cout << "radha krishna" << endl;
//     }
//    // counting from 1 to 5 
//     for(int i=1; i<=10; i=i+1) {
//         cout << i << endl;
//      } 
    
//     // counting from 51 to 69
//      for(int i=51; i<=69; i=i+1) {
//          cout << i << endl;
//     }

//     for(int i=51; i<70; i=i+1) {
//          cout << i << endl;
//     }

// for(int i=1; i<=10; i=i+1) {
//     cout << i << " ";
//     if(i == 5) {
//         break;
//     }
// }

for(int i=1; i<=5; i=i+1) {
    if(i == 2) {
        continue;
    }
    cout << i << " ";
}

    return 0; 
}