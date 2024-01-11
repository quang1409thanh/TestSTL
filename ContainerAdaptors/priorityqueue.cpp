#include <queue> // <queue>
#include <string>
#include "../class.h"

int intArgument(std::priority_queue<int> v)
{
    return v.size();
}

int charArgument(std::priority_queue<char> v)
{
    return v.size();
}

int stringArgument(std::priority_queue<std::string> v)
{
    return v.size();
}

int structureArgument(std::priority_queue<Class> v)
{
    return v.size();
}

int stltypeArgument(std::priority_queue<std::priority_queue<char>> v)
{
    return v.size();
}

int classTemplateArgument(std::priority_queue<Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::priority_queue<char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::priority_queue<char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::priority_queue<Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::priority_queue<Class **> v)
{
    return v.size();
}

// Vì priority_queue không hỗ trợ toán tử [], chúng ta không thể sử dụng nó để truy cập phần tử.
// Thay vào đó, chúng ta có thể sử dụng hàm size() để lấy kích thước của priority_queue.
int oneLevelBasic(std::priority_queue<char> *v)
{
    return v->size();
}

int twoLevelBasic(std::priority_queue<char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::priority_queue<char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::priority_queue<char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::priority_queue<Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::priority_queue<Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::priority_queue<Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::priority_queue<Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::priority_queue<int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::priority_queue<int *> v[][4])
{
    return v[0][0].size();
}
