#include <iostream>
#include<string>
using namespace std;

//Write compress() here.
string compress(string x){
	int L1 = x.size();
	int i = 0;
    string z;
		while(i<L1){
			z+= x[i];
			i= i+3;
		}
        return z;
}


int main()
{
    string a = compress("CPECMU");
    string b = compress("X");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
