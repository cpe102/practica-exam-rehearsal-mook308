#include<iostream>
#include<string>
using namespace std;

int main(){
    float GPA;
    string name;
    cout << "What is your name?: ";
    cin >> name;
    cout << "\n" <<"What is your GPA?: ";
    cin >> GPA;
    if (GPA >=3.50){
        cout <<"\n"<< name <<" LnW Jrim Jrim!!!";

    }else{
        cout <<"\n"<<"Try harder, "<< name <<"!!!";

    }
    return 0;




}
