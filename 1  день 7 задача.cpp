#include <iostream>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
int main()
{
cout<<"Input your text:\n";
    string str;
    getline(cin, str);
    sort(str.begin(), str.end());
    cout<<"\nResult:\n"; 
    cout<<"Sorting\t"<<str<<endl;
    cout<<"the amount of codes\t"<< accumulate(str.begin(), str.end(), 0) << endl;
    system("pause");
    return 0;
}
