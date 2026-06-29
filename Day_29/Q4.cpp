#include <iostream>
using namespace std;

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    Product p[100];
    int n = 0, choice, id, qty, i;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Display Products" << endl;
        cout << "3. Search Product" << endl;
        cout << "4. Update Quantity" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Product ID: ";
                cin >> p[n].id;

                cout << "Enter Product Name: ";
                cin >> p[n].name;

                cout << "Enter Quantity: ";
                cin >> p[n].quantity;

                cout << "Enter Price: ";
                cin >> p[n].price;

                n++;

                cout << "Product Added Successfully!" << endl;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Products Available!" << endl;
                }
                else
                {
                    cout << "\n===== PRODUCT LIST =====" << endl;

                    for(i = 0; i < n; i++)
                    {
                        cout << "Product ID : " << p[i].id << endl;
                        cout << "Name       : " << p[i].name << endl;
                        cout << "Quantity   : " << p[i].quantity << endl;
                        cout << "Price      : " << p[i].price << endl;
                        cout << "--------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Product ID to Search: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        cout << "\nProduct Found!" << endl;
                        cout << "Product ID : " << p[i].id << endl;
                        cout << "Name       : " << p[i].name << endl;
                        cout << "Quantity   : " << p[i].quantity << endl;
                        cout << "Price      : " << p[i].price << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Product Not Found!" << endl;

                break;

            case 4:
                cout << "Enter Product ID: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        cout << "Enter New Quantity: ";
                        cin >> qty;

                        p[i].quantity = qty;

                        cout << "Quantity Updated Successfully!" << endl;
                        break;
                    }
                }

                if(i == n)
                    cout << "Product Not Found!" << endl;

                break;

            case 5:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}