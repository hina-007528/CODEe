#include<iostream>

using namespace std; 
inline int product(int a,int b){
    static int c=0;
    c=c+1;
    // this execute only once.
    // next time this function is run,the value of c will be retained.
    return a*b*c;
}
int main(){
    int a,b;
    cout<<"Enter the value of a&b"<<endl;
    cin>>a>>b;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    return 0;
}