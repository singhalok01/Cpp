// #include<iostream>
// using namespace std;
// int main(){
//     int cp;  //use for if condition:
//     cout<<"Enter cost price :";
//     cin>>cp;
//     int sp;
//     cout<<"Enter selling price :";
//     cin>>sp;
//     if(sp>cp){
//      cout<<"profit";
//     }
//     if(sp<cp){ //cp>sp
//         cout<<"loss";
//     }
//     if(sp==cp){
//       cout<<"No profit No loss" ;
//     }

// }    
    
//use for if,else,else if condition:
#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price :";
    cin>>cp;
    int sp;
    cout<<"Enter selling price :";
    cin>>sp;
    if(sp>cp){
     cout<<"profit :"<<sp-cp;
    }
    else if(sp<cp){ //cp>sp
        cout<<"loss :"<<cp-sp;
    }
    else{
      cout<<"No profit No loss";
    }

}    
    