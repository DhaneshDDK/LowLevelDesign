#include<iostream>
#include "EmailService.cpp"
#include "SMSService.cpp"
#include "NotificationService.cpp"

using namespace std;

int main(){
    Sender* emailService = new EmailService();
    Sender* smsService = new SMSService();
    NotificationService notificationService;
    notificationService.notify(emailService, "Hello via Email!");
    notificationService.notify(smsService, "Hello via SMS!");
    delete emailService;
    delete smsService;
}