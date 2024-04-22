#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(string newItemName, int newItemPrice, int newItemQuantity) { 
   itemName = newItemName; 
   itemPrice = newItemPrice; 
   itemQuantity = newItemQuantity; 
} 
void ItemToPurchase::SetName(string newName) { 
   itemName = newName;
}
string ItemToPurchase::GetName() { 
   return itemName; 
} 
void ItemToPurchase::SetPrice(int newPrice) { 
   itemPrice = newPrice; 
} 
int ItemToPurchase::GetPrice() { 
   return itemPrice; 
} 
void ItemToPurchase::SetQuantity(int newQuantity) { 
   itemQuantity = newQuantity; 
} 
int ItemToPurchase::GetQuantity() { 
   return itemQuantity; 
} 
