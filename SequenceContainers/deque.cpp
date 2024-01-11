#include <deque> // <deque>
#include <string>
#include "../class.h"

int intArgument(std::deque<int> v)
{
    return v.size();
}

int charArgument(std::deque<char> v)
{
    return v.size();
}

int stringArgument(std::deque<std::string> v)
{
    return v.size();
}

int structureArgument(std::deque<Class> v)
{
    return v.size();
}

int stltypeArgument(std::deque<std::deque<char>> v)
{
    return v.size();
}

int classTemplateArgument(std::deque<Array<int>> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::deque<char *> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::deque<char **> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::deque<Class *> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::deque<Class **> v)
{
    return v.size();
}

int oneLevelBasic(std::deque<char> *v)
{
    return v->size();
}

int twoLevelBasic(std::deque<char> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::deque<char> v[])
{
    return v[0].size();
}

int twoDimBasic(std::deque<char> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::deque<Class> *v)
{
    return v->size();
}

int twoLevelStructure(std::deque<Class> **v)
{
    return (*v)->size();
}

int oneDimStructure(std::deque<Class> v[])
{
    return v[0].size();
}

int twoDimStructure(std::deque<Class> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::deque<int *> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::deque<int *> v[][4])
{
    return v[0][0].size();
}
