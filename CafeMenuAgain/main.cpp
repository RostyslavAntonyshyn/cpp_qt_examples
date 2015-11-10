#include <iostream>

#include "menuitem.h"
#include "category.h"

int main()
{
    MenuCategory *drinks = new MenuCategory("Drinks");
    MenuItem *vodka = new MenuItem(1.0, 100.0, "Absolut Vodka", "Premium standart");
    MenuItem *beer = new MenuItem(0.40, 100.0, "Homemade beer", "Premium quality");
    MenuItem *wine = new MenuItem(10.0, 100.0, "French Wines", "Huge amount for every taste");
    MenuItem *schampoo = new MenuItem(8.0, 100.0, "Swiss Shampoos", "Royal quality");
    MenuItem *juice = new MenuItem(0.20, 100.0, "Sandora", "Special offer -25%");
    drinks->addItem(vodka);
    drinks->addItem(beer);
    drinks->addItem(wine);
    drinks->addItem(schampoo);
    drinks->addItem(juice);


    MenuCategory *meat = new MenuCategory("Meat");
    MenuItem *chicken = new MenuItem(25.0, 0.300, "Frog Legs", "Best offer");
    meat->addItem(chicken);

    std::cout << " *** PLLUG RESTAURANT MENU *** " << std::endl << std::endl;
    drinks->print();
    meat->print();

    delete meat;
    delete drinks;
    delete vodka;
    delete chicken;
    return 0;
}

