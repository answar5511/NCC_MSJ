#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    
    int descrimination = (b*b-4*a*c);
   
    if(descrimination>0){
        cout<<"2"<<endl;
    } else if (descrimination<0){
        cout<<"0"<<endl;
    } else
    {
        cout<<"1";
    }
}