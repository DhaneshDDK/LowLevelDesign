public class DebitCard extends Card {
    public DebitCard(String cardNumber, String cardHolderName) {
        super(cardNumber, cardHolderName);
    }

    @Override
    public void pay(double amount) {
        System.out.println("Paid " + amount + " using Debit Card: " + getCardHolderName() + " with card number " + getCardNumber());
    }
}