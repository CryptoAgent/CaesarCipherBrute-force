#ifndef CCBT
#define CCBT


std::string GetStr(){
std::cout<<"\r\nEnter your message\r\n";
std::string str;
std::cin>>str;
return str;
}

int GetLen(std::string str){
int len;
for(int i =0;str[i]!='\0';i++){
    len++;
}
return len;
}

#endif
