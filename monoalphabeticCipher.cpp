#include <iostream> 
using namespace std; 
char letters[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'}; 
char cipher[]= 
{'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M','\0'}; 
    string encryption(string s){ 
    string s1; 
    for(int i=0;i<s.length();i++){ 
        for(int j=0;j<26;j++){ 
            if(letters[j]==tolower(s[i])){ 
                s1=s1+cipher[j]; 
                break; 
            } 
        } 
    } 
    return s1; 
    } 

    string decryption(string s){ 
    string s1; 
    for(int i=0;i<s.length();i++){ 
        for(int j=0;j<26;j++){ 
            if(cipher[j]==toupper(s[i])){ 
                s1=s1+letters[j]; 
                break; 
            } 
        } 
    } 
    return s1; 
    } 

int main() { 
    int n; 
    string s,ss; 
    while(1){ 
        cout<<"Enter\n1:to encrypt string\n2:to decrypt string\n3:to exit"<<endl; 
        cin>>n; 
        switch(n){ 

            case 1:{ 
            cout<<"Please enter the string to encrypt."<<endl; 
            cin>>s; 
            cout<<"You entered: "<<s<<endl; 
            string s1=encryption(s); 
            cout<<"The encrypted string is:"<<s1<<endl; 
            break;} 
            case 2: 
            {cout<<"Please enter the string to be decrypted"<<endl; 
            cin>>ss; 
            string s2=decryption(ss); 
            cout<<"Decrypted string is: "<<s2<<endl;break;} 
            case 3: 
            { 
            return 0; 
            }break; 
            default: 
            cout<<"Invalid Input\n"; 
                } 
            } 
} 