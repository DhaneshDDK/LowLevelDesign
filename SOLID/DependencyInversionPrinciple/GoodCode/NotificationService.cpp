#ifndef NOTIFICATIONSERVICE_CPP
#define NOTIFICATIONSERVICE_CPP

#include<iostream>
#include "Sender.cpp"
using namespace std;

class NotificationService{
  public:
  void notify(Sender* sender, string message){
       return sender->send(message);
  }
};

#endif