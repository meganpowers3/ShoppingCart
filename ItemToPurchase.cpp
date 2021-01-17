#include "ItemToPurchase.h"
#include <iostream>

ItemToPurchase::ItemToPurchase()
{}

ItemToPurchase::ItemToPurchase(std::string itemName, std::string itemDescription, int itemPrice, int itemQuantity) :
   itemName(itemName), itemDescription(itemDescription), itemPrice(itemPrice), itemQuantity(itemQuantity)
{}

std::string ItemToPurchase::GetDescription()
{
   return itemDescription;
}

void ItemToPurchase::SetDescription(std::string description)
{
   this->itemDescription = description;
}

std::string ItemToPurchase::GetName()
{
   return itemName;
}

int ItemToPurchase::GetPrice()
{
   return itemPrice;
}

void ItemToPurchase::SetPrice(int price)
{
   itemPrice = price;
}

int ItemToPurchase::GetQuantity()
{
   return itemQuantity;
}

void ItemToPurchase::SetQuantity(int itemQuantity)
{
   this->itemQuantity = itemQuantity;
}

void ItemToPurchase::PrintItemCost()
{
   std::cout << itemPrice;
}

void ItemToPurchase::PrintItemDescription()
{
   std::cout << itemDescription;
}
