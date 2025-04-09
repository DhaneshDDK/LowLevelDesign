public class Client{
    public static void main(String[] args){
        PaymentService paymentService = new PaymentService();
        paymentService.addPaymentMethod("Visa", new CreditCard("1234-5678-9012-3456", "John Doe"));
        paymentService.addPaymentMethod("MasterCard", new DebitCard("9876-5432-1098-7654", "Jane Doe"));
        paymentService.addPaymentMethod("UPI", new UPI("john@upi"));
        paymentService.makePayment("Visa", 100.0);
        paymentService.makePayment("MasterCard", 200.0);
        paymentService.makePayment("UPI", 300.0);
        paymentService.makePayment("PayPal", 400.0); // This will not work as PayPal is not added
    }
}