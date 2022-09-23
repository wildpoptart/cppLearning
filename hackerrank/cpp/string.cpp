#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    string tempStr;
    char first1, first2;
    
	cin >> a >> b;
    int len1 = a.size();
    int len2 = b.size();
    
    cout << len1 << " " << len2 << "\n";
    
    tempStr = a+b;
    cout << tempStr << "\n";
    
    first1 = a[0];
    first2 = b[0];
    
    a[0]= first2;
    b[0]= first1;
    
    cout << a << " " << b;
    
    return 0;
}
