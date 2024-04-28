#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU" << endl; 
   cout << "a - Add item to cart" << endl; 
   cout << "d - Remove item from cart" << endl; 
   cout << "c - Change item quantity" << endl; 
   cout << "i - Output items' description" << endl; 
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

//needs work 
void ExecuteMenu(char option, ShoppingCart& theCart) {

   if (option == 'a') { 
     
      ItemToPurchase item1;
      string itemName1;
      string itemDescription1; 
      int itemPrice1;
      int itemQuantity1;
      cout << "Enter item name: " << endl;
      cin >> itemName1; 
      cout << "Enter item description: " << endl; 
      cin >> itemDescription1; 
      cout << "Enter item price: " << endl; 
      cin >> itemPrice1; 
      cout << "Enter item quantity: " << endl; 
      cin >> itemQuantity1; 
      item1.SetName(itemName1); 
      item1.SetDescription(itemDescription1); 
      item1.SetPrice(itemPrice1); 
      item1.setQuantity1(itemQuantity1);
      theCart.AddItem(item1); 
   
   } 
   if (option == 'd') { 
    
      string itemName2;
      cout << "What item would you like to remove? " << endl; 
      cin >> itemName2; 
      theCart.RemoveItem(itemName2);
      
   } 
   //needs work
   if (option == 'c') { 
      //no idea how to code this tbh  
   } 
   if (option == 'i') { 
      theCart.PrintDescriptions();
   } 
   if (option == 'o') { 
      theCart.PrintTotal();
   } 
   //needs work
   if (option == 'q') { 
   }
      
   
}

int main() {

   ShoppingCart cartItems;

   string customersName; 
   string customerDate; 

   cout << "Enter customers's name: " << endl; 
   cin >> customersName; 

   cout << "Enter today's date: " << endl;
   cin  >> customerDate;

   cout << "Customer name: " << customerName << endl; 
   cout << "Today's date: " << customerDate << endl;
   
   return 0;
}
