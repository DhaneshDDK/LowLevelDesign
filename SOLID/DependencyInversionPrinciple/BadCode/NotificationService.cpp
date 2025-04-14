#ifndef NOTIFICATIONSERVICE_CPP
#define NOTIFICATIONSERVICE_CPP

#include<iostream>
#include "EmailService.cpp"
#include "SMSService.cpp"
using namespace std;

class NotificationService{
  EmailService emailService;
  SMSService smsService;
  
  public:
     void notifyByEmail(string message){
         emailService.sendEmail(message);
     }
     void notifyBySMS(string message){
         smsService.sendSMS(message);
     }
};

#endif
