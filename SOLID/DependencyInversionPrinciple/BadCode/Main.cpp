#include <iostream>
#include "NotificationService.cpp"

using namespace std;

int main(){
    NotificationService notificationService;
    notificationService.notifyByEmail("Hello via Email!");
    notificationService.notifyBySMS("Hello via SMS!");
    return 0;
}