#include <unordered_map> // <unordered_map>
#include <string>
#include "../class.h"

int intArgument(std::unordered_map<int, int> v)
{
    return v.size();
}

int charArgument(std::unordered_map<char, char> v)
{
    return v.size();
}

int stringArgument(std::unordered_map<std::string, std::string> v)
{
    return v.size();
}

int structureArgument(std::unordered_map<Class, Class> v)
{
    return v.size();
}

int stltypeArgument(std::unordered_map<std::unordered_map<char, char>, std::unordered_map<char, char>> v)
{
    return v.size();
}

int classTemplateArgument(std::unordered_map<Array<int>, Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::unordered_map<char *, char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::unordered_map<char **, char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::unordered_map<Class *, Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::unordered_map<Class **, Class **> v)
{
    return v.size();
}

// Vì unordered_map không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm count() để đếm số lượng phần tử giống nhau trong unordered_map.
int oneLevelBasic(std::unordered_map<char, char> *v)
{
    return v->size();
}

int twoLevelBasic(std::unordered_map<char, char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::unordered_map<char, char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::unordered_map<char, char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::unordered_map<Class, Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::unordered_map<Class, Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::unordered_map<Class, Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::unordered_map<Class, Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::unordered_map<int *, int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::unordered_map<int *, int *> v[][4])
{
    return v[0][0].size();
}
