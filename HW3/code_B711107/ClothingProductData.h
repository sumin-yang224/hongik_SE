#include <iostream>
using namespace std;

class ClothingProductData
{
private:
    string productName;
    string productCompanyName;
    string sellerID;
    int price;
    int remainQuantity;
    int salesQuantity;
    int average;
    int satisfaction;

public:
    ClothingProductData(string, string, int, int, string);
    string getSellerID();
    int getRemainQuantity();

    void getSalesClothingProductDetails(string*, string*, int*, int*);
    void getSoldOutClothingProductDetails(string*, string*, int*, int*, int*);
    void getClothingProductStatistics(string*, int*, int*);
};