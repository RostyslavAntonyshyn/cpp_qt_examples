#ifndef CATEGORY_H
#define CATEGORY_H

#include <vector>
#include <string>

class MenuItem;

class MenuCategory
{
public:
    MenuCategory(const std::string &name);

    void print();
    void addItem(MenuItem *item);
private:
    std::string mName;
    std::vector<MenuItem *> mItems;
    std::vector<MenuCategory *> mCategoryItems;
};


#endif // CATEGORY_H
