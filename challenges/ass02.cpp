#include<iostream>
using namespace std;
int main(){
    int teabag ;
    cout<<"Enter your Tea bag"<<endl;
    cin>>teabag;
    if(teabag <=100){
    if(teabag<=10){
        cout<<"You have more then 10 and less then 16 :now your bag"<<teabag+5<<endl;

    }else if (teabag>10&&teabag <=50)
    {
        cout<<"You have more then 16 and less then 55:now your bag"<<teabag+5<<endl;
    }else{
        cout<<"You have more then 55 and less then 100:now your bag"<<teabag+5<<endl;
    }
}else{
    cout<<"enter teabag under 100";
}
    

    





    return 0;
}