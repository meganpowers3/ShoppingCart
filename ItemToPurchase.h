#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <string>

class ItemToPurchase
{
   
   private:
      std::string             itemName;
      std::string             itemDescription;
      int                     itemPrice;
      int                     itemQuantity;
      
   public:
      ItemToPurchase();
      ItemToPurchase(std::string,std::string,int,int);
      std::string             GetDescription();
      void                    SetDescription(std::string);
      std::string             GetName();
      int                     GetPrice();
      void                    SetPrice(int);
      int                     GetQuantity();
      void                    SetQuantity(int);
      void                    PrintItemCost();
      void                    PrintItemDescription();
   
};

#endif