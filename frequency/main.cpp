#include <iostream>
#include <string>
#include <map>
#include <set>

struct comp
{
    auto operator()(auto l, auto r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }

        return l.first > r.first;
    }
};


int main()
{
    map<char, int> map;
    std::string str;
    std::cin >> str;

    for(auto item : str)
        ++map[item];

    // создание множества из словаря с сортировкой по второму элементу
    set<std::pair<char, int>, comp> sorted(map.begin(), map.end());

    for(const auto& [symbol, count] : sorted)
        std::cout << symbol << ": " << count << "\n";

    return 0;
}
