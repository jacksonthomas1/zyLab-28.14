#include<iostream> 
#include<string>
#include<vector>
using namespace std; 

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() { 
  customerName = ""; 
  customerDate = ""; 
} 
ShoppingCart::ShoppingCart(string name, string date) { 
  customerName = name; 
  customerDate = date; 
}

string ShoppingCart::GetCustomerName() const  {
  return customerName; 
}

string ShoppingCart::GetCustomerDate() const { 
  return customerDate; 
} 

void ShoppingCart::AddItem(ItemToPurchase item) { 
    cartItems.push_back(item);
}

// still needs work
void ShoppingCart::RemoveItem(string name) { 
  for (int i = 0; i < cartItems.length(); i++) { 
      if (cartItems.at(i).GetName() == name) { 
        cartItems.at(i).erase();
        break;
      }
  }
} 

//also needs work 
void ShoppingCart::ModifyItem(ItemToPurchase item) { 
} 

int ShoppingCart::GetNumItemsInCart() { 
  int quantityOfItems = 0;
  for (int i = 0; i < cartItems.length(); i++) { 
    quantityOfItems = quantityOfItems + cartItems.at(i).GetQuantity();
  }
  return quantityOfItems; 
} 

double ShoppingCart::GetCostOfCart() { 
  int totalCost;
  for (int i = 0; i < cartItems.length(); i++) { 
    totalCost = totalCost + (cartItems.at(i).GetPrice() * cartItems.at(i).getQuantity());
  }
  return totalCost; 
} 













