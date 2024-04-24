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
      theCart.AddItem(); 
   } 
   if (option == 'd') { 
      theCart.RemoveItem();
   } 
   //needs work
   if (option == 'c') { 
      theCart.ModifyItem(); 
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
