package logic.components;

public class Potion {
    private String name;
    private int price;
    private Status increasingStatus;

    public String getName() {
        return name;
    }

    public int getPrice() {
        if(price < 0){
            return 1;
        }
        return price;
    }

    public Status getIncreasingStatus() {
        return increasingStatus;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public void setIncreasingStatus(Status increasingStatus) {
        this.increasingStatus = increasingStatus;
    }
    public Potion(String name,int price, Status increasingStatus){
        setName(name);
        setPrice(price);
        setIncreasingStatus(increasingStatus);
    }
    public boolean equals(Object o){
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Potion otherPotion = (Potion) o;

        return price == otherPotion.price &&
                name.equals(otherPotion.name) &&
                increasingStatus.equals(otherPotion.increasingStatus);
    }
}
