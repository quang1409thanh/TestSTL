#include <unordered_set> // <unordered_set>
#include <string>
#include "../class.h"

int intArgument(std::unordered_set<int> v)
{
    return v.size();
}

int charArgument(std::unordered_set<char> v)
{
    return v.size();
}

int stringArgument(std::unordered_set<std::string> v)
{
    return v.size();
}

int structureArgument(std::unordered_set<Class> v)
{
    return v.size();
}

int stltypeArgument(std::unordered_set<std::unordered_set<char>> v)
{
    return v.size();
}

int classTemplateArgument(std::unordered_set<Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::unordered_set<char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::unordered_set<char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::unordered_set<Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::unordered_set<Class **> v)
{
    return v.size();
}

// Vì unordered_set không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm count() để đếm số lượng phần tử giống nhau trong unordered_set.
int oneLevelBasic(std::unordered_set<char> *v)
{
    return v->size();
}

int twoLevelBasic(std::unordered_set<char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::unordered_set<char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::unordered_set<char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::unordered_set<Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::unordered_set<Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::unordered_set<Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::unordered_set<Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::unordered_set<int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::unordered_set<int *> v[][4])
{
    return v[0][0].size();
}
