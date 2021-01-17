#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <iostream>
#include <vector>
#include <string>

class ShoppingCart
{
   
   private:
      std::string                   customerName;
      std::string                   currentDate;
      std::vector<ItemToPurchase>   cartItems;
      
   public:
      ShoppingCart();
      ShoppingCart(std::string, std::string);
      std::string                   GetCustomerName() const;
      std::string                   GetDate() const;
      void                          AddItem(ItemToPurchase);
      void                          RemoveItem(std::string);
      void                          ModifyItem(ItemToPurchase);
      int                           GetNumItemsInCart();
      double                        GetCostOfCart();
      void                          PrintTotal();
      void                          PrintDescriptions();
   
};

#endif