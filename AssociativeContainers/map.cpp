#include <map> // <map>
#include <string>
#include "../class.h"

int intArgument(std::map<int, int> v)
{
    return v.size();
}

int charArgument(std::map<char, char> v)
{
    return v.size();
}

int stringArgument(std::map<std::string, std::string> v)
{
    return v.size();
}

int structureArgument(std::map<Class, Class> v)
{
    return v.size();
}

int stltypeArgument(std::map<std::map<char, char>, std::map<char, char>> v)
{
    return v.size();
}

int classTemplateArgument(std::map<Array<int>, Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::map<char *, char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::map<char **, char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::map<Class *, Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::map<Class **, Class **> v)
{
    return v.size();
}

// Vì map không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm at() hoặc tìm kiếm phần tử đầu tiên và trả về kích thước của nó.
int oneLevelBasic(std::map<char, char> *v)
{
    return v->size();
}

int twoLevelBasic(std::map<char, char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::map<char, char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::map<char, char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::map<Class, Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::map<Class, Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::map<Class, Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::map<Class, Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::map<int *, int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::map<int *, int *> v[][4])
{
    return v[0][0].size();
}
