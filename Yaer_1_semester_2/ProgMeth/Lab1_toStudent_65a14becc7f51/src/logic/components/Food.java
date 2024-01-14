package logic.components;

public class Food {
    private String name;
    private int price;
    private int energy;

    public String getName() {
        return name;
    }

    public int getEnergy() {
        if(energy <= 0){
            return 1;
        }
        return energy;
    }

    public int getPrice() {
        if(price <= 0){
            return 1;
        }
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
        this.name = name;
        this.price = (price < 1) ? 1 : price;
        this.energy = (energy < 1) ? 1 : energy;
    }
    public boolean equals(Object o){
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Food otherFood = (Food) o;

        return price == otherFood.price &&
                energy == otherFood.energy &&
                name.equals(otherFood.name);
    }
}
