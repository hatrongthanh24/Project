#include "ShapeSorter.h"

void ShapeSorter::SortByPerimeter(vector<IShape*>&a)
{
    for (int i = 0; i < a.size() - 1; ++i)
    {
        for (int j = i + 1; j < a.size(); ++j)
        {
            if (a[i]->perimeter() > a[j]->perimeter())
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void ShapeSorter::SortByArea(vector<IShape*>&a)
{
    for (int i = 0; i < a.size() - 1; ++i)
    {
        for (int j = i + 1; j < a.size(); ++j)
        {
            if (a[i]->area() > a[j]->area())
            {
                swap(a[i], a[j]);
            }
        }
    }
}
