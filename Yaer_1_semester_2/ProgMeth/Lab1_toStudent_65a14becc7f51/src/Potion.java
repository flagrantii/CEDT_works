public class Potion {
    private String name;
    private int price;
    private Status increasingStatus;

    public String getName() {
        return name;
    }

    public int getPrice() {
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

    }
    public boolean equals(Object o){
        if(this.name == name && this.price == price && this.increasingStatus == increasingStatus){
            return true;
        }
        return false;
    }
}
