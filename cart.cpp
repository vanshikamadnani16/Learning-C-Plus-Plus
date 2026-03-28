#include <iostream>
using namespace std;

struct Product
{
    string name;
    string brand;
    float price;
    int quantity;
};

Product cart[100];
int totalItems = 0;

// Add Product
void addProduct()
{
    cin.ignore();

    cout << "\nEnter Product Name: ";
    getline(cin, cart[totalItems].name);

    cout << "Enter its Brand: ";
    getline(cin, cart[totalItems].brand);

    cout << "Enter Price: ";
    cin >> cart[totalItems].price;

    cout << "Enter Quantity: ";
    cin >> cart[totalItems].quantity;

    totalItems++;

    cout << "Product added to cart!\n";
}

// View Cart
void viewCart()
{
    if(totalItems == 0)
    {
        cout << "Cart is empty.\n";
        return;
    }

    float total = 0;

    cout << "\n===== CART =====\n";

    for(int i = 0; i < totalItems; i++)
    {
        float itemTotal = cart[i].price * cart[i].quantity;

        cout << "\nItem " << i+1;
        cout << "\nName: " << cart[i].name;
        cout << "\nBrand: " << cart[i].brand;
        cout << "\nPrice: Rs. " << cart[i].price;
        cout << "\nQuantity: " << cart[i].quantity;
        cout << "\nTotal: Rs. " << itemTotal << "\n";

        total += itemTotal;
    }

    cout << "\nTotal Bill: Rs. " << total << "\n";
}
void searchProduct()
{
    if(totalItems == 0)
    {
        cout << "Cart is empty.\n";
        return;
    }

    string name;
    cin.ignore();

    cout << "Enter product name to search: ";
    getline(cin, name);

    bool found = false;

    for(int i = 0; i < totalItems; i++)
    {
        if(cart[i].name == name)
        {
            cout << "\nProduct Found!";
            cout << "\nName: " << cart[i].name;
            cout << "\nPrice: Rs. " << cart[i].price;
            cout << "\nQuantity: " << cart[i].quantity;
            cout << "\nTotal: Rs. " << cart[i].price * cart[i].quantity << "\n";

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Product not found.\n";
    }
}
void updateQuantity()
{
    if(totalItems == 0)
    {
        cout << "Cart is empty.\n";
        return;
    }

    int itemNo;
    cout << "Enter item number to update: ";
    cin >> itemNo;

    if(itemNo < 1 || itemNo > totalItems)
    {
        cout << "Invalid item number!\n";
        return;
    }

    int newQty;
    cout << "Enter new quantity: ";
    cin >> newQty;

    if(newQty <= 0)
    {
        cout << "Invalid quantity!\n";
        return;
    }

    cart[itemNo - 1].quantity = newQty;

    cout << "Quantity updated successfully!\n";
}
//remove product
void removeProduct()
{
    if(totalItems == 0)
    {
        cout << "Cart is empty.\n";
        return;
    }

    int index;

    cout << "\nEnter the item number to remove (1-" << totalItems << "): ";
    cin >> index;

    if(index < 1 || index > totalItems)
    {
        cout << "Invalid item number!\n";
        return;
    }

    for(int i = index - 1; i < totalItems - 1; i++)
    {
        cart[i] = cart[i + 1];
    }

    totalItems--;

    cout << "Item removed from cart!\n";
}

// Checkout
void checkout()
{
    if(totalItems == 0)
    {
        cout << "Cart is empty.\n";
        return;
    }

    float total = 0;

    for(int i = 0; i < totalItems; i++)
    {
        total += cart[i].price * cart[i].quantity;
    }

    float discount = 0;

    if(total > 1000)
    {
        discount = total * 0.10; // 10% discount
    }

    float finalAmount = total - discount;

    cout << "\n===== RECEIPT =====\n";

    for(int i = 0; i < totalItems; i++)
    {
        cout << cart[i].name << " x " << cart[i].quantity
             << " = Rs. " << cart[i].price * cart[i].quantity << "\n";
    }

    cout << "\nTotal: Rs. " << total;
    cout << "\nDiscount: Rs. " << discount;
    cout << "\nFinal Amount: Rs. " << finalAmount << "\n";
}

// Main
int main()
{
    int choice;

    do
    {
        cout << "\n===== SHOPPING CART =====";
        cout << "\n1. Add Product";
        cout << "\n2. View Cart";
        cout << "\n3. Search Product";
        cout << "\n4. Update Quantity";
        cout << "\n5. Remove Product";
        cout << "\n6. Checkout";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addProduct(); break;
            case 2: viewCart(); break;
            case 3: searchProduct(); break;
            case 4: updateQuantity(); break;
            case 5: removeProduct(); break;
            case 6: checkout(); break;
            case 7: cout << "Thank you for shopping!\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}