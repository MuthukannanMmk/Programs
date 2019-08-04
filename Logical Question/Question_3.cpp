#include <iostream> 
using namespace std; 
int main() 
{ 
 int x1,x2,v1,v2; 
 cin >> x1>>v1>>x2>>v2; 
 cout<<((x1<x2 && v1<=v2)?"NO":((x2-x1)/(v1-v2)>0 ? "YES" : "NO")); 
    return 0; 
} 
