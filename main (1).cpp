#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   
   cout << "MENU" << endl; 
   cout << "a - Add item to cart" << endl; 
   cout << "d - Remove item from cart" << endl; 
   cout << "c - Change item quantity" << endl; 
   cout << "i - Output items' descriptions" << endl; 
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
      cout << "Enter the item name: " << endl;
      getline(cin, itemName1);
      cout << "Enter the item description: " << endl; 
      getline(cin, itemDescription1);
      cout << "Enter the item price: " << endl; 
      cin >> itemPrice1; 
      cout << "Enter the item quantity: " << endl; 
      cin >> itemQuantity1; 
      item1.SetName(itemName1); 
      item1.SetDescription(itemDescription1); 
      item1.SetPrice(itemPrice1); 
      item1.SetQuantity(itemQuantity1);
      theCart.AddItem(item1); 
   
   } 
   if (option == 'd') { 
    
      string itemName2;
      cout << "What item would you like to remove? " << endl; 
      getline(cin, itemName2); 
      theCart.RemoveItem(itemName2);
      
   } 
   //needs work
   if (option == 'c') { 
      
      ItemToPurchase newItem;
      int newQuantity;
      string itemName;
      cout << "Enter the item name: " << endl; 
      getline(cin, itemName);  
      cout << "Enter the new item quantity: " << endl; 
      cin >> newQuantity; 
      
   } 
   if (option == 'i') { 
         theCart.PrintDescriptions();
   } 
   if (option == 'o') { 
      cout << "OUTPUT SHOPPING CART" << endl;
      theCart.PrintTotal();
      cout << endl;
      
   } 
   if (option == 'q') { 
   }
      
   
}

int main() {

   ShoppingCart cartItems;

   string customersName; 
   string customerDate; 

   cout << "Enter customer's name:" << endl; 
   getline(cin, customersName); 

   cout << "Enter today's date:" << endl;
   getline (cin, customerDate);
   
   cout << endl; 

   cout << "Customer name: " << customersName << endl; 
   cout << "Today's date: " << customerDate << endl;
   cout << endl;
   
   char userChoice;
   PrintMenu();
   cout << endl;
   cout << "Choose an option:" << endl; 
   cin >> userChoice; 
   //a,d,c,i,o,q
   if ((userChoice != 'a') && (userChoice != 'd') && (userChoice != 'c') && (userChoice != 'i') 
                              && (userChoice != 'o') && (userChoice != 'q')) {
      while (userChoice != 'q') { 
         cout << "Choose an option:" << endl; 
         cin >> userChoice;
      }
   }
   if ((userChoice == 'a') || (userChoice == 'd') || (userChoice == 'c') || (userChoice == 'i') 
                              || (userChoice == 'o')) {
      while (userChoice != 'q') { 
         ExecuteMenu(userChoice, cartItems);
         PrintMenu();
         cout << endl;
         cout << "Choose an option:" << endl; 
         cin >> userChoice; 
      } 
    } 
                              
   
   return 0;
}
