public class CreditCard extends Card{
    public CreditCard(String cardNumber, String cardHolderName) {
        super(cardNumber, cardHolderName);
    }

    @Override
    public void pay(double amount) {
        System.out.println("Paid " + amount + " using Credit Card: " + getCardHolderName() + " with card number " + getCardNumber());
    }
}