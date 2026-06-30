// program to print the intersection of two array.....

#include <iostream>
#include <set>
#include <vector>
using namespace std;
void unionofarr(const vector<int> arr1, const vector<int> arr2)
{
    set<int> s;
    for (int res : arr1)
    {
        s.insert(res);
    }
    cout << "The intersection of arr1 and arr2 is =>" << endl;
    for (int res : arr2)
    {
        if (s.find(res) != s.end())
        {
            cout << res << " ";
        }
        else
            s.erase(res);
    }
}
int main()
{
    vector<int> vec1 = {1, 2, 6, 8};
    vector<int> vec2 = {1, 2, 4, 5};
    unionofarr(vec1, vec2);
    return 0;
}
