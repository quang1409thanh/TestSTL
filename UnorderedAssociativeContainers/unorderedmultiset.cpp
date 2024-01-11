#include <unordered_set> // <unordered_set>
#include <string>
#include "../class.h"

int intArgument(std::unordered_multiset<int> v)
{
    return v.size();
}

int charArgument(std::unordered_multiset<char> v)
{
    return v.size();
}

int stringArgument(std::unordered_multiset<std::string> v)
{
    return v.size();
}

int structureArgument(std::unordered_multiset<Class> v)
{
    return v.size();
}

int stltypeArgument(std::unordered_multiset<std::unordered_multiset<char>> v)
{
    return v.size();
}

int classTemplateArgument(std::unordered_multiset<Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::unordered_multiset<char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::unordered_multiset<char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::unordered_multiset<Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::unordered_multiset<Class **> v)
{
    return v.size();
}

// Vì unordered_multiset không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm count() để đếm số lượng phần tử giống nhau trong unordered_multiset.
int oneLevelBasic(std::unordered_multiset<char> *v)
{
    return v->size();
}

int twoLevelBasic(std::unordered_multiset<char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::unordered_multiset<char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::unordered_multiset<char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::unordered_multiset<Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::unordered_multiset<Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::unordered_multiset<Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::unordered_multiset<Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::unordered_multiset<int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::unordered_multiset<int *> v[][4])
{
    return v[0][0].size();
}
