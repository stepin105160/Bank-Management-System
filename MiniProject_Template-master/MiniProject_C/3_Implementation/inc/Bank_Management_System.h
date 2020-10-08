#ifndef BANK_MANAGEMENT_SYSTEM_H_INCLUDED
#define BANK_MANAGEMENT_SYSTEM_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <stdbool.h>

void menu();
int atm();
void close();

struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;

float interest(float t,float amount,int rate);
void fordelay(int j);
void new_acc();
void view_list();
void edit(void);
void transact(void);
void erase(void);
void see(void);
void close(void);


int atm();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();
int login(void);


#endif // BANK_MANAGEMENT_SYSTEM_H_INCLUDED
