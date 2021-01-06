#include <iostream>
#include "TicketMachine.h"
using namespace std;

TicketMachine::TicketMachine() : PRICE(0){

}
TicketMachine::~TicketMachine(){

}
void TicketMachine::showPrompt()
{
    cout << "something" << endl;
}

void TicketMachine::insertMoney(int money)
{
    balance += money;
}

void TicketMachine::showBalance()
{
    cout << balance << endl;
}