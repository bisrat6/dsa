#include <iostream>
#include <vector>
#define taxRateDirective 15
using namespace std;

const int taxRateConst{15};

int main() {
    cout<<"WELCOME TO PRODUCT SALES AND INVENTORY ANALYZER PROGRAM!"<<'\n';
    cout<<"This program enables store managers to track sales, monitor inventory, and optimize stock management efficiently."<<endl<<"\nReminder: This program is written in C++, a compiled language.Please ensure you compile the code before running it"<<'\n';

    cout<<"Product Categories:\n1 - Household Essentials\n2 - Beverages\n3 - Frozen Foods\n4 - Bakery Items\n5 - Dairy Product\n";
    string productName;
    int productCatagory;
    int inventoryQuantity;
    float pricePerUnit;
    int itemsSold;
    cout<<"Enter the product name:";
    cin>>productName;
    cout<<"Enter the product catagory:";
    cin>>productCatagory;

    string catagory;
    switch (productCatagory) {
        case 1:catagory="Household Essentials"; break;
        case 2:catagory="Beverages";break;
        case 3:catagory="Frozen Foods";break;
        case 4:catagory="Bakery Items";break;
        case 5:catagory="Dairy Product";break;
        default:cout<<"CHOICE OUT OF RANGE!";
        return 0;
    }

    cout<<"Enter the initial inventory quantity:";
    cin>>inventoryQuantity;
    cout<<"Enter the product price per unit:";
    cin>>pricePerUnit;
    cout<<"Enter the number of items sold:";
    cin>>itemsSold;

    cout<<"--- Inventory and Sales Report ---\n";
    cout<<"Prodcut Name: "<<productName<<"\n";
    cout<<"Prodcut Catagory: "<<catagory<<"\n";
    cout<<"Prodcut Intial Inventory Quantity: "<<inventoryQuantity<<"\n";
    cout<<"Prodcut Price per Unit: $"<<pricePerUnit<<"\n";
    cout<<"Number of items Sold: "<<itemsSold<<"\n";

    int newInventory= inventoryQuantity-itemsSold;
    float totalSales= itemsSold*pricePerUnit;
    string status;

    auto salesCopy=totalSales;
    // Direct Initialization
    decltype(inventoryQuantity) inventoryCopy{inventoryQuantity};
    // List Initialization


    if (newInventory<10) {
        status="LOW INVENTORY";
    }
    else {
        status="SUFFICIENT INVENTORY";
    }


    cout<<"NEW INVENTORY: "<<newInventory<<endl;
    cout<<"Total Sales Amount: $"<<totalSales<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Inventory Status: "<<status<<endl;
    cout<<"---------------------------------------\n--- HELPER VALUES ---\n";
    cout<<"Total Sales Amount (Copy using `auto`): $"<<salesCopy<<endl;
    cout<<"Initial Inventory (Using `decltype`): "<<inventoryCopy<<endl;
    cout<<"--- RECEIPT ---\n";
    int k;
    for (k=1; k<=itemsSold; k++) {
        cout<<"ITEM "<<k<<": $"<<pricePerUnit<<"\n";
    }
    cout<<"--------------------------------------\n";
    cout<<"Tax Rate: "<<taxRateConst<<"%\n";
    cout<<"Total: $"<<salesCopy+(salesCopy*taxRateDirective/100)<<endl;

    cout<<"Processing is complete! Thank you for using the Product Sales and Inventory Analyzer.";


}
