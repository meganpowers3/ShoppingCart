#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
   customerName = "none";
   currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(std::string customerName, std::string currentDate)// : customerName(customerName), currentDate(currentDate)
{
   this->customerName = customerName;
   this->currentDate = currentDate;
}

std::string ShoppingCart::GetCustomerName() const
{
   return this->customerName;
}

std::string ShoppingCart::GetDate() const
{
   return this->currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item)
{
   std::vector<ItemToPurchase>::iterator it;
   for(it=cartItems.begin(); it!=cartItems.end(); it++)
   {
      if(it->GetName() == item.GetName())
      {
         it->SetQuantity(it->GetQuantity() + 1);
         return;
      }
   }
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(std::string itemName)
{
   std::vector<ItemToPurchase>::iterator it;
   for(it=cartItems.begin(); it!=cartItems.end(); it++)
   {
      if(it->GetName() == itemName)
      {
         cartItems.erase(it);
      }
   }
}

void ShoppingCart::ModifyItem(ItemToPurchase item)
{
   std::vector<ItemToPurchase>::iterator it;
   for(it=cartItems.begin(); it!=cartItems.end(); it++)
   {
      if(it->GetName() == item.GetName())
      {
         
      }
   }
}

int ShoppingCart::GetNumItemsInCart()
{
   int result = 0;
   std::vector<ItemToPurchase>::iterator it;
   for(it=cartItems.begin();it!=cartItems.end();it++)
   {
      result += it->GetQuantity();
   }
   return result;
}

double ShoppingCart::GetCostOfCart()
{
   double result = 0;
   std::vector<ItemToPurchase>::iterator it;
   for(it=cartItems.begin(); it!=cartItems.end(); it++)
   {
      result += it->GetPrice()*it->GetQuantity();
   }
   return result;
}

void ShoppingCart::PrintTotal()
{
   std::cout << "OUTPUT SHOPPING CART" << std::endl;
   std::cout << customerName << "\'s Shopping Cart - " << currentDate << std::endl;
   std::cout << "Number of Items: " << GetNumItemsInCart() << std::endl << std::endl;
   if(cartItems.size() == 0)
   {
      std::cout << "SHOPPING CART IS EMPTY" << std::endl;
   }
   else
   {
      int total = 0;
      std::vector<ItemToPurchase>::iterator it;
      for(it=cartItems.begin(); it!=cartItems.end(); it++)
      {
         int totalItemCost = (it->GetPrice())*(it->GetQuantity());
         total += totalItemCost;
         std::cout << it->GetName() << " " << it->GetQuantity() << " @ $" << it->GetPrice() << " = $" << totalItemCost << std::endl;
      }
      std::cout << std::endl;
      std::cout << "Total: $" << total << std::endl << std::endl;
   }
}

void ShoppingCart::PrintDescriptions()
{
   std::vector<ItemToPurchase>::iterator it;
   std::cout << "OUTPUT ITEMS' DESCRIPTIONS" << std::endl;
   std::cout << customerName << "\'s Shopping Cart - " << currentDate << std::endl;
   for(it=cartItems.begin(); it!=cartItems.end(); it++)
   {
      std::cout << "Item Descriptions" << std::endl;
      std::cout << it->GetName() << ": " << it->GetDescription() << std::endl;
   }
}