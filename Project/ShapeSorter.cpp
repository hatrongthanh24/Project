#include "ShapeSorter.h"

void ShapeSorter::sortByPerimeter(vector<IShape*>&a)
{
    for (int i = 0; i < a.size() - 1; ++i)
    {
        for (int j = i + 1; j < a.size(); ++j)
        {
            if (a[i]->calculatePerimeter() > a[j]->calculatePerimeter())
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void ShapeSorter::sortByArea(vector<IShape*>&a)
{
    for (int i = 0; i < a.size() - 1; ++i)
    {
        for (int j = i + 1; j < a.size(); ++j)
        {
            if (a[i]->calculateArea() > a[j]->calculateArea())
            {
                swap(a[i], a[j]);
            }
        }
    }
}


