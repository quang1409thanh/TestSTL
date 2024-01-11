#include <set> // <set>
#include <string>
#include "../class.h"

int intArgument(std::multiset<int> v)
{
    return v.size();
}

int charArgument(std::multiset<char> v)
{
    return v.size();
}

int stringArgument(std::multiset<std::string> v)
{
    return v.size();
}

int structureArgument(std::multiset<Class> v)
{
    return v.size();
}

int stltypeArgument(std::multiset<std::multiset<char>> v)
{
    return v.size();
}

int classTemplateArgument(std::multiset<Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::multiset<char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::multiset<char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::multiset<Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::multiset<Class **> v)
{
    return v.size();
}

// Vì multiset không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm count() để đếm số lượng phần tử giống nhau trong multiset.
int oneLevelBasic(std::multiset<char> *v)
{
    return v->size();
}

int twoLevelBasic(std::multiset<char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::multiset<char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::multiset<char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::multiset<Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::multiset<Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::multiset<Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::multiset<Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::multiset<int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::multiset<int *> v[][4])
{
    return v[0][0].size();
}
