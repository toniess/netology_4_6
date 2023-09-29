#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int, std::greater> s;
    int n;
    cin >> n;
    while(n--)
    {
        int tmp;
        std::cin >> tmp;
        s.insert(tmp);
    }

    for(auto it : s)
        std::cout << it << "\n";

    return 0;
}
