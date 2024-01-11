#include <forward_list> // <forward_list>
#include <string>
#include "../class.h"

int intArgument(std::forward_list<int> v)
{
    return std::distance(v.begin(), v.end());
}

int charArgument(std::forward_list<char> v)
{
    return std::distance(v.begin(), v.end());
}

int stringArgument(std::forward_list<std::string> v)
{
    return std::distance(v.begin(), v.end());
}

int structureArgument(std::forward_list<Class> v)
{
    return std::distance(v.begin(), v.end());
}

int stltypeArgument(std::forward_list<std::forward_list<char>> v)
{
    return std::distance(v.begin(), v.end());
}

int classTemplateArgument(std::forward_list<Array<int>> v)
{
    return std::distance(v.begin(), v.end());
}

int oneLevelBasicArgument(std::forward_list<char *> v)
{
    return std::distance(v.begin(), v.end());
}

int twoLevelBasicArgument(std::forward_list<char **> v)
{
    return std::distance(v.begin(), v.end());
}

int oneLevelStructureArgument(std::forward_list<Class *> v)
{
    return std::distance(v.begin(), v.end());
}

int twoLevelStructureArgument(std::forward_list<Class **> v)
{
    return std::distance(v.begin(), v.end());
}

// Vì forward_list chỉ hỗ trợ truy cập tuần tự, chúng ta không thể sử dụng toán tử [] để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng std::advance để di chuyển con trỏ đến phần tử đầu tiên.
int oneLevelBasic(std::forward_list<char> *v)
{
    return std::distance(v->begin(), v->end());
}

int twoLevelBasic(std::forward_list<char> **v)
{
    return std::distance((*v)->begin(), (*v)->end());
}

int oneDimBasic(std::forward_list<char> v[])
{
    return std::distance(v[0].begin(), v[0].end());
}

int twoDimBasic(std::forward_list<char> v[][4])
{
    return std::distance(v[0][0].begin(), v[0][0].end());
}

int oneLevelStructure(std::forward_list<Class> *v)
{
    return std::distance(v->begin(), v->end());
}

int twoLevelStructure(std::forward_list<Class> **v)
{
    return std::distance((*v)->begin(), (*v)->end());
}

    int oneDimStructure(std::forward_list<Class> v[])
{
    return std::distance(v[0].begin(), v[0].end());
}

int twoDimStructure(std::forward_list<Class> v[][4])
{
    return std::distance(v[0][0].begin(), v[0][0].end());
}

int twoLevelOneLevel(std::forward_list<int *> **v)
{
    return std::distance((*v)->begin(), (*v)->end());
}

int twoDimOneLevel(std::forward_list<int *> v[][4])
{
    return std::distance(v[0][0].begin(), v[0][0].end());
}
