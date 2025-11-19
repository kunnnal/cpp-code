#include<iostream>
using namespace std;

    int main (){
        double amt,discount,namt;
        cout<< "enter the amt :";
        cin>>amt;
        if (amt<=5000){
            discount=amt-400;
            namt=discount;
            cout<<namt;}
            else if(amt>5000 && amt<=10000){
            discount=amt-800;
            namt=discount;
            cout << namt ;}
            else if(amt>10000 && amt<=20000){
                discount =amt - 1000;
                namt=discount;
                cout<< namt ;
                }
                else if(amt>20000){
                    amt=amt-2000;
                    discount=(amt*3)/100;
                    // namt=discount-2000;
                    discount=amt-discount;
                    cout<< discount ;

                }

            else
            cout<<"inavlid";

        
        
    return 0;
}