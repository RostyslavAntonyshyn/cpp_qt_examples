#include "category.h"
#include "menuitem.h"

#include <iostream>


MenuCategory::MenuCategory(const std::string &name) :
    mName{name}
{
}
/*
****************************************************************************************************
*/
void MenuCategory::print()
{
    std::cout << " *** " << mName << " ***" << std::endl;

    for (const auto &item: mItems)
    {
        std::cout << "\t";
        item->print();
        std::cout << "\n";
    }

    for (const auto &item: mCategoryItems)
    {
        std::cout << "\t";
        item->print();
        std::cout << "\n";
    }
}
/*
****************************************************************************************************
*/
void MenuCategory::addItem(MenuItem *item)
{
    mItems.push_back(item);
}
/*
****************************************************************************************************
*/
