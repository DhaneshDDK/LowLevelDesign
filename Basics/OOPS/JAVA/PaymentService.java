import java.util.HashMap;
public class PaymentService{
   HashMap<String, PaymentMethod> paymentMethods;
   PaymentService(){
      paymentMethods = new HashMap<>();
   }
   public void addPaymentMethod(String name, PaymentMethod paymentMethod){
      paymentMethods.put(name, paymentMethod);
      System.out.println("Payment method added: " + name);
   }

   public void makePayment(String name, double amount){
        PaymentMethod paymentMethod = paymentMethods.get(name);
        if(paymentMethod != null){
            paymentMethod.pay(amount);
        } else {
            System.out.println("Payment method not found: " + name);
        }
   }
}