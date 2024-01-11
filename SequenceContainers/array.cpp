#include <array> // <array>
#include <string>
#include "../class.h"

int intArgument(std::array<int, 10> v)
{
    return v.size();
}

int charArgument(std::array<char, 10> v)
{
    return v.size();
}

int stringArgument(std::array<std::string, 10> v)
{
    return v.size();
}

int structureArgument(std::array<Class, 10> v)
{
    return v.size();
}

int stltypeArgument(std::array<std::array<char, 10>, 10> v)
{
    return v.size();
}

int classTemplateArgument(std::array<Array<int>, 10> v)
{
    return v.size();
}

int oneLevelBasicArgument(std::array<char *, 10> v)
{
    return v.size();
}

int twoLevelBasicArgument(std::array<char **, 10> v)
{
    return v.size();
}

int oneLevelStructureArgument(std::array<Class *, 10> v)
{
    return v.size();
}

int twoLevelStructureArgument(std::array<Class **, 10> v)
{
    return v.size();
}

int oneLevelBasic(std::array<char, 10> *v)
{
    return v->size();
}

int twoLevelBasic(std::array<char, 10> **v)
{
    return (*v)->size();
}

int oneDimBasic(std::array<char, 10> v[])
{
    return v[0].size();
}

int twoDimBasic(std::array<char, 10> v[][4])
{
    return v[0][0].size();
}

int oneLevelStructure(std::array<Class, 10> *v)
{
    return v->size();
}

int twoLevelStructure(std::array<Class, 10> **v)
{
    return (*v)->size();
}

    int oneDimStructure(std::array<Class, 10> v[])
{
    return v[0].size();
}

int twoDimStructure(std::array<Class, 10> v[][4])
{
    return v[0][0].size();
}

int twoLevelOneLevel(std::array<int *, 10> **v)
{
    return (*v)->size();
}

int twoDimOneLevel(std::array<int *, 10> v[][4])
{
    return v[0][0].size();
}
