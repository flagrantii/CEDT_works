import java.util.ArrayList;

public class Player {
    private String name;
    private Status status;
    private int energy;
    private int money;
    private ArrayList<Food> foods;
    private ArrayList<Potion> potions;
    private ArrayList<Ore> ores;

    public ArrayList<Potion> getPotions() {
        return potions;
    }

    public ArrayList<Food> getFoods() {
        return foods;
    }

    public String getName() {
        return name;
    }

    public int getEnergy() {
        return energy;
    }

    public ArrayList<Ore> getOres() {
        return ores;
    }

    public int getMoney() {
        return money;
    }

    public Status getStatus() {
        return status;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPotions(ArrayList<Potion> potions) {
        this.potions = potions;
    }

    public void setFoods(ArrayList<Food> foods) {
        this.foods = foods;
    }

    public void setEnergy(int energy) {
        this.energy = energy;
    }

    public void setMoney(int money) {
        this.money = money;
    }

    public void setOres(ArrayList<Ore> ores) {
        this.ores = ores;
    }

    public void setSatus(Status status) {
        this.status = status;
    }
    public Player(String name, Status status){
        setEnergy(10);
        setMoney(100);
    }
    public Player(String name, Status status, int energy, int money){

    }
    public boolean buyOre(Ore ore){
        if(this.money >= ore.getCost()){
            this.money -= ore.getCost();
            return true;
        }
        return false;
    }
    public void drinkPotion(int index){

    }
    public void eatFood(int index){

    }
    public void sellPotion(int index){

    }
    public void sellFood(int index){

    }
    public void attack(Monster monster){

    }
    public void magicAttack(Monster monster){

    }

}
