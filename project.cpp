#include <iostream>
using namespace std;

class Market{
    protected:
        string ProductName;

    public:
        string Manufacturer;
        float ProductPrice;
        static int ProductCount;
        static int SoldProductCount;

    Market(){

    }    

    Market(string ProductName, string Manufacturer, float ProductPrice){
        this->ProductName=ProductName;
        this->Manufacturer=Manufacturer;
        this->ProductPrice=ProductPrice;
        ProductCount++;
    }

    virtual void productDistribution()=0;

    string getProductName(){
        return ProductName;
    }

    void setProductName(string ProductName){
        this->ProductName=ProductName;
    }

 


};

int Market::ProductCount=0;
int Market::SoldProductCount=0;

class Sante: public Market{
    public:
        Sante(){

        }

        Sante(string ProductName, float ProductPrice): Market(ProductName, "Sante", ProductPrice) {}

    void productDistribution(){
        cout<<"Sante's product has been distributed to market.";
    }
};

class Pringles: public Market{
    public:
        Pringles(){

        }

        Pringles(string ProductName, float ProductPrice): Market(ProductName, "Pringles", ProductPrice) {}

    void productDistribution(){
        cout<<"Prignles's product has been distributed to market.";
    }
};

class Borjomi: public Market{
    public:
        Borjomi(){
            
        }

        Borjomi(string ProductName, float ProductPrice): Market(ProductName, "Borjomi", ProductPrice) {}

    void productDistribution(){
        cout<<"Borjomi's product has been distributed to market.";
    }
};

class Shopping: public Market{
    public:

       void productSell(){
        cout<<"The product is sold.";
        SoldProductCount++;
    }

    void productSell(Sante product){
        cout<<product.Manufacturer<<"'s product "<<product.getProductName()<<" was sold to customer for "<<product.ProductPrice<<" $";
        SoldProductCount++;
    }

    void productSell(Pringles product){
        cout<<product.Manufacturer<<"'s product "<<product.getProductName()<<" was sold to customer for "<<product.ProductPrice<<" $";
        SoldProductCount++;
    }

    void productSell(Borjomi product){
        cout<<product.Manufacturer<<"'s product "<<product.getProductName()<<" was sold to customer for "<<product.ProductPrice<<" $";
        SoldProductCount++;
    }
};

int main(){
    Sante obj;
    obj.productDistribution();
    Sante milk("Milk", 2.99);
    Borjomi object;
    object.productDistribution();
    Borjomi water("Water", 1.99);
    Pringles objinio;
    objinio.productDistribution();
    Pringles chips("Chips", 9.99);

}