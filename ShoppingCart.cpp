#include<iostream> 
#include<string>
#include<vector>
using namespace std; 

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() { 
} 
ShoppingCart::ShoppingCart(string name, string date) { 
  customerName = name; 
  currentDate = date; 
}

string ShoppingCart::GetCustomerName() const  {
  return customerName; 
}

string ShoppingCart::GetDate() const { 
  return currentDate; 
} 

void ShoppingCart::AddItem(ItemToPurchase item) { 
    cartItems.push_back(item);
}

// still needs work
void ShoppingCart::RemoveItem(string name) {
   int i = 0;
   for (i; i < cartItems.size(); i++) { 
       if (cartItems.at(i).GetName() == name) { 
         cartItems.erase(cartItems.begin()+i);
         break;
       }
       if (cartItems.at(cartItems.size() - 1).GetName() != name) { 
         cout << "Item not found in cart. Nothing removed."; 
         break;
       }
   }
}

void ShoppingCart::ModifyItem(ItemToPurchase item) { 
 
  for (int i = 0; i < cartItems.size(); i++) {
    if (item.GetName() == cartItems.at(i).GetName()) { 
 
      string newDescription1; 
      int newPrice1; 
      int newQuantity1; 
      if (item.GetDescription() == "") { 
         cout << "Enter new description: " << endl; 
         cin >> newDescription1; 
         item.SetDescription(newDescription1); 
      }
      if (item.GetPrice() == 0) { 
         cout << "Enter new price: " << endl; 
         cin >> newPrice1; 
         item.SetPrice(newPrice1);
      }
      if (item.GetQuantity() == 0) { 
         cout << "Enter new quantity: " << endl; 
         cin >> newQuantity1;
         item.SetQuantity(newQuantity1); 
      }
      break;
    }
    if (item.GetName() != cartItems.at(i).GetName()) { 
      cout << "Item not found in cart. Nothing modified.";
    }
  }
}

int ShoppingCart::GetNumItemsInCart() { 
  int quantityOfItems = 0;
  for (int i = 0; i < cartItems.size(); i++) { 
    quantityOfItems = quantityOfItems + cartItems.at(i).GetQuantity();
  }
  return quantityOfItems; 
} 

double ShoppingCart::GetCostOfCart() { 
  double totalCost;
  for (int i = 0; i < cartItems.size(); i++) { 
    totalCost = totalCost + (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
  }
  return totalCost; 
} 

//needs work
void ShoppingCart::PrintTotal() {
  cout << customerName << "'s Shopping Cart - " << currentDate << endl; 
  cout << "Number of Items: " << cartItems.size() << endl;
  cout << endl; 
  for (int i = 0; i < cartItems.size(); i++) { 
    cartItems.at(i).PrintItemCost(); 
  } 
  int totalPrice = 0;
  for (int i = 0; i < cartItems.size(); i++) { 
    totalPrice = totalPrice + (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
  }
  
  
   if (cartItems.size() == 0) { 
    cout << "SHOPPING CART IS EMPTY" << endl;
  }
  
  cout << endl;
  
  cout << "Total: $" << totalPrice << endl;
}


void ShoppingCart::PrintDescriptions() { 
  for (int i = 0; i < cartItems.size(); i++) { 
    cartItems.at(i).PrintItemDescription(); 
  } 
  if (cartItems.size() == 0) { 
    cout << "SHOPPING CART IS EMPTY"; 
  }
} 
















