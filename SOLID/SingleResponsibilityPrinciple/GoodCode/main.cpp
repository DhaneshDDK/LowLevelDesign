#include<iostream>
#include "EmailService.cpp"
#include "Invoice.cpp"
#include "UserRepository.cpp"
using namespace std;

int main(){
    Invoice invoice(100.0);
    invoice.generateInvoice();
    
    UserRepository userRepository;
    userRepository.saveUser("John Doe");
    
    EmailService emailService;
    emailService.sendEmail();
    
    return 0;
}