#include<iostream>
using namespace std;
int main(){
    int cup ;
    float price,  totalprice;
    cout<<"Enter Your Cup \n";
    cin>>cup;
    cout <<"Enter Your price \n";
    cin>> price;
    float mainprice = cup*price;
    if(mainprice >=100){
    totalprice = mainprice - (0.05*mainprice) ;
    cout<<"Your total price is :"<<totalprice;
    }else{
        cout<<mainprice;
    }





    return 0;
}