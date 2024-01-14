package logic.components;

public class Ore {
    private String name;
    private int cost;

    public String getName() {
        return name;
    }

    public int getCost() {
        if(cost<=0){
            return 1;
        }
        return cost;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setCost(int cost) {
        this.cost = cost;
    }

    public Ore(String name, int cost){
        this.name = name;
        this.cost = (cost < 1) ? 1 : cost;
    }
    public boolean equals(Object o){
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Ore otherOre = (Ore) o;

        return cost == otherOre.cost &&
                name.equals(otherOre.name);
    }
}
