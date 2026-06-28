#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // reverse(vec.begin(), vec.end());     // Method 1 ....
    // for (int res : vec)
    // {
    //     cout << res << " ";
    // }
    int st = 0, end = vec.size()-1;         //Method 2 .... ( if you use method 2 then you don't need to include algrothim header file )
    while (st < end)
    {
        int temp = vec[st];
        vec[st] = vec[end];
        vec[end] = temp;
        st++;
        end--;
    }
    for (int res : vec)
    {
        cout << res << " ";
    }
    return 0 ; 
}