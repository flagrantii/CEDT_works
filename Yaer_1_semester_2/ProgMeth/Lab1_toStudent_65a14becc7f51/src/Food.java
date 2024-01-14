public class Food {
    private String name;
    private int price;
    private int energy;

    public String getName() {
        return name;
    }

    public int getEnergy() {
        return energy;
    }

    public int getPrice() {
        return price;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setEnergy(int energy) {
        this.energy = energy;
    }

    public void setPrice(int price) {
        this.price = price;
    }
    public Food(String name,int price,int energy){
        if(price<1){
            setPrice(1);
        }
        if(energy<1){
            setEnergy(1);
        }
    }
    public boolean equals(Object o){
        if(this.energy == energy && this.name == name && this.price == price){
            return true;
        }
        return false;
    }
}
