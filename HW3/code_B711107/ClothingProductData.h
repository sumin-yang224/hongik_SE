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
    float average;
    int satisfaction;

public:
    ClothingProductData(string, string, int, int, string);
    string getSellerID();
    int getRemainQuantity();

    void getSalesClothingProductDetails(string*, string*, int*, int*);
    void getSoldOutClothingProductDetails(string*, string*, int*, int*, float*);
    void getClothingProductStatistics(string*, int*, float*);
};