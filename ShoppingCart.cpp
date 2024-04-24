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
  for (int i = 0; i < cartItems.length(); i++) { 
    if (cartItems.at(i).GetName() != name) { 
      cout << "Item not found in cart. Nothing removed."; 
    }
} 

//also needs work 
void ShoppingCart::ModifyItem(ItemToPurchase item) { 
  for (int i = 0; i < cartItems.length(); i++) {
    if (item.GetName() == cartItems.at(i).GetName()) { 
      if (item.GetName == "") { 
        string newName; 
        cout << "What would you like to change the item's name to?" << endl; 
        cin >> newName; 
        item.SetName(newName); 
      }     
      if(item.GetName != "") { 
      } 
      if(item.GetDescription() == "") { 
        string newDescription;
        cout << "What would you like to change the item's description to?" << endl; 
        cin >> newDescription; 
        item.SetDescription(newDescription); 
      } 
      if(item.GetDescription() != "") { 
      }
      if (itemPrice == 0) { 
        int newPrice; 
        cout << "What would you like to change the item's price to?" << endl; 
        cin >> newPrice; 
        item.SetPrice(newPrice); 
      } 
      if (itemPrice != 0) { 
      }
      if (itemQuantity == 0) { 
        int newQuantity;
        cout << "What would you like to change the item's quantity to?" << endl; 
        cin >> newQuantity; 
        item.SetQuantity(newQuantity); 
      }
      if (itemQuantity != 0) { 
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
  for (int i = 0; i < cartItems.length(); i++) { 
    quantityOfItems = quantityOfItems + cartItems.at(i).GetQuantity();
  }
  return quantityOfItems; 
} 

double ShoppingCart::GetCostOfCart() { 
  double totalCost;
  for (int i = 0; i < cartItems.length(); i++) { 
    totalCost = totalCost + (cartItems.at(i).GetPrice() * cartItems.at(i).getQuantity());
  }
  return totalCost; 
} 

//needs work
void ShoppingCart::PrintTotal() {
  cout << customerName << "'s Shopping Cart - " << customerDate << endl; 
  cout << "Number of items: " << cartItems.length() << endl;
  cout << endl; 
  for (int i = 0; i < cartItems.length() << i++) { 
    cartItems.at(i).PrintItemCost(); 
  } 
  for (int i = 0; i < cartItems.length() << i++) { 
    int totalPrice = 0;
    totalPrice = totalPrice + (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
  }
  cout << endl; 
  cout << "Total: " << totalPrice;
   if (cartItems.length() == 0) { 
    cout << "SHOPPING CART IS EMPTY"; 
  }
}
  
}

void ShoppingCart::PrintDescriptions() { 
  for (int i = 0; i < cartItems.length(); i++) { 
    cout << cartItems.at(i).PrintItemDescription << endl; 
  } 
  if (cartItems.length() == 0) { 
    cout << "SHOPPING CART IS EMPTY"; 
  }
} 
















