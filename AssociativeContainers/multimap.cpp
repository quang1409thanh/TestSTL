#include <map> // <map>
#include <string>
#include "../class.h"

int intArgument(std::multimap<int, int> v)
{
    return v.size();
}

int charArgument(std::multimap<char, char> v)
{
    return v.size();
}

int stringArgument(std::multimap<std::string, std::string> v)
{
    return v.size();
}

int structureArgument(std::multimap<Class, Class> v)
{
    return v.size();
}

int stltypeArgument(std::multimap<std::multimap<char, char>, std::multimap<char, char>> v)
{
    return v.size();
}

int classTemplateArgument(std::multimap<Array<int>, Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::multimap<char *, char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::multimap<char **, char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::multimap<Class *, Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::multimap<Class **, Class **> v)
{
    return v.size();
}

// Vì multimap không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm count() để đếm số lượng phần tử giống nhau trong multimap.
int oneLevelBasic(std::multimap<char, char> *v)
{
    return v->size();
}

int twoLevelBasic(std::multimap<char, char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::multimap<char, char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::multimap<char, char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::multimap<Class, Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::multimap<Class, Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::multimap<Class, Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::multimap<Class, Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::multimap<int *, int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::multimap<int *, int *> v[][4])
{
    return v[0][0].size();
}
