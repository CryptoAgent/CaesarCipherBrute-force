#include <iostream>
#include <string>
#include "CCBT.h"

using namespace std;

int main(){

string encr_mess = GetStr();
int lenght = GetLen(encr_mess);
cout<<"Possible deciphers :"<<endl;
for(int i = 0;i<26;i++){
    for(int j = 0;j<lenght;j++){
        char ch = encr_mess[j];
        if(ch>=97&&ch<=122){
        if(isupper(ch)){
            ch = tolower(ch);
        }
        int ind_x = ch-97;
        ind_x+=i;
        char encr=(ind_x)%26;
        encr+=97;
        cout<<encr;
        }else{cout<<"Characters only"<<endl;}
    }
cout<<"\r\n";
}

return 0;
}
