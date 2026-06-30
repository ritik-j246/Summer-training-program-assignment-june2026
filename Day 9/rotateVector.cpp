// progrma to rotate the vector left side....
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k = 4;
    vector<int> vec = {1, 6, 5, 4, 3};
    int size = vec.size();
    vector<int> ans(size, 0);
    k = k % size;
    for (int i = 0; i < size; i++)
    {
        ans[i] = vec[(k + i) % size];
    }
    for (int res : ans)
    {
        cout << res;
    }
    return 0;
}
