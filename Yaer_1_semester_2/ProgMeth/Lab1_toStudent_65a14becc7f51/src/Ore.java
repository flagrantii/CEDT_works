public class Ore {
    private String name;
    private int cost;

    public String getName() {
        return name;
    }

    public int getCost() {
        return cost;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setCost(int cost) {
        this.cost = cost;
    }

    public Ore(String name, int cost){
        if(cost<1){
            setCost(1);
        }
    }
    public boolean equals(Object o){
        if(this.name == name && this.cost == cost){
            return true;
        }
        return false;
    }
}
