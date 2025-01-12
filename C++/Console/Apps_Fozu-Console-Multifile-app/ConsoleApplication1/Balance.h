#pragma once
 #ifndef BALANCE_H
   #define BALANCE_H

   class Balance {
   private:
       float income;
       float expenses;
       float balance;

   public:
       Balance();  
       float Knowbalance() const;
       float Knowexpenses() const;
       float Knowincome() const;
       void Addmoney();
       void Losemoney();
       void AfterLogin();
   };

   #endif // BALANCE_H