#include "ShoppingCart.h"
#include <string>

std::string menu =   "MENU\n"
                     "a - Add item to cart\n"
                     "d - Remove item from cart\n"
                     "c - Change item quantity\n"
                     "i - Output items' descriptions\n"
                     "o - Output shopping cart\n"
                     "q - Quit\n\n"
                     "Choose an option:\n";

int main()
{
   char c;
   std::string customerName, currentDate;
   std::cout << "Enter customer's name:" << std::endl;
   std::getline(std::cin, customerName);
   std::cout << "Enter today's date:" << std::endl;
   std::getline(std::cin, currentDate);
   std::cout << std::endl;
   std::cout << "Customer Name: " << customerName << std::endl;
   std::cout << "Today's Date: " << currentDate << std::endl;
   
   ShoppingCart cart(customerName, currentDate);
   
   while(true)
   {
      std::cout << menu;
      std::cin >> c;
      switch(c)
      {
         case 'a':
         {
            std::string itemName, description;
            int price, quantity;
            std::cout <<   "ADD ITEM TO CART" << std::endl <<
                           "Enter the item name:" << std::endl;
            std::cin.ignore(1);
            std::getline(std::cin, itemName);
            std::cout <<   "Enter the item description:" << std::endl;
            std::getline(std::cin, description);
            std::cout <<   "Enter the item price:" << std::endl;
            std::cin >> price;
            std::cout <<   "Enter the item quantity:" << std::endl;
            std::cin >> quantity;
            cart.AddItem(ItemToPurchase(itemName, description, price, quantity));
            std::cout << std::endl;
            break;
         }
         
         case 'd':
         {
            std::string itemName;
            std::cout <<   "REMOVE ITEM FROM CART" << std::endl <<
                           "Enter name of item to remove:" << std::endl;
            std::cin.ignore(1);
            std::getline(std::cin, itemName);
            cart.RemoveItem(itemName);
            std::cout << std::endl;
            break;
         }
         
         case 'c':
         {
            std::string itemName;
            int quantity;
            std::cout <<   "CHANGE ITEM QUANTITY" << std::endl <<
                           "Enter the item name:" << std::endl;
            std::cin.ignore(1);
            std::getline(std::cin, itemName);
            std::cout <<   "Enter the new quantity:" << std::endl;
            std::cin >> quantity;
            std::cout << std::endl;
            break;
         }
         
         case 'i':
         {
            cart.PrintDescriptions();
            break;
         }
         
         case 'o':
         {
            cart.PrintTotal();
            break;            
         }
         
         case 'q':
         {
            return 0;
         }
         default:
         {
            break;
         }
         
      }
   }
}