public class UPI implements PaymentMethod {
    public String UPIId;
    UPI(String UPIId) {
        this.UPIId = UPIId;
    }

    @Override
    public void pay(double amount) {
        System.out.println("Paid " + amount + " using UPI: " + UPIId);  
    }
}
