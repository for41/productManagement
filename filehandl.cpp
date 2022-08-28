#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Product
{
   public:
   string Product_ID,Product_Category,Product_Name;
   void readDATA()
   {
       ifstream input("productIN.txt");
       getline(input,Product_ID);
       getline(input,Product_Category);
       getline(input,Product_Name);
       input.close();
   }


      void WriteDATA()
      {
          ofstream output("productOut.txt");
          output<< "Product_ID : " << Product_ID <<endl;
          output<< "Product_Category : " << Product_Category <<endl;
          output<< "Product_Name : " << Product_Name <<endl;

      }

};
class soldProduct:public Product
{
   public:
   string customerID,Price;
   void customer_readDATA()
   {
       ifstream input("customerIN.txt");
       getline(input,customerID);
       getline(input,Price);
       input.close();
   }


      void customer_WriteDATA()
      {
          ofstream output("customerOut.txt");
          output<< "customerID : " << customerID <<endl;
          output<< "Price : " << Price <<endl;

      }

};

class  boughtProduct: public Product
{
   public:
   string  buyerID,buyerName,price;
   void buyer_readDATA()
   {
       ifstream input("buyerIN.txt");
       getline(input,buyerID);
       getline(input,buyerName);
       getline(input,price);
       input.close();
   }


      void buyer_WriteDATA()
      {
          ofstream output("buyerOut.txt");
          output<< "buyerID : " << buyerID <<endl;
          output<< "buyerName : " << buyerName <<endl;
          output<< "price : " << price <<endl;

      }

};



int main()
{
   Product pen;
   pen.readDATA();
   pen.WriteDATA();

   soldProduct pen1;
   pen1.customer_readDATA();
   pen1.customer_WriteDATA();

   boughtProduct pen2;
   pen2.buyer_readDATA();
   pen2.buyer_WriteDATA();

   return 0;
}




