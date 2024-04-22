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
}






