#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    //int count = 1;
   
    while (i <= n)
    {

        int j = 1;
      //  int value = i; 
        while (j <= n)
        {
            char ch = 'a' + i-1;
            cout<< ch <<" ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}