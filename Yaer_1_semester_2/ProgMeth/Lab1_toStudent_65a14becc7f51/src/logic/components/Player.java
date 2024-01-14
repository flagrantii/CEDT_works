package logic.components;

import exception.BadStatusException;

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
        if(energy<=0){
            return 0;
        }
        return energy;
    }

    public ArrayList<Ore> getOres() {
        return ores;
    }

    public int getMoney() {
        if(money<=0){
            return 0;
        }
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

    public void setStatus(Status status) {
        this.status = status;
    }
    public Player(String name, Status status) throws BadStatusException {
        this.name = name;
        this.status = status;
        if(this.status.getHp() <= 0){
            this.status.setHp(1);
        }
        this.energy = 10;
        this.money = 100;
        this.foods = new ArrayList<>();
        this.potions = new ArrayList<>();
        this.ores = new ArrayList<>();
    }
    public Player(String name, Status status, int energy, int money) throws BadStatusException {
        this(name, status);
        this.energy = (energy < 0) ? 0 : energy;
        this.money = (money < 0) ? 0 : money;
    }
    public boolean buyOre(Ore ore){
        if(this.money >= ore.getCost()){
            this.money -= ore.getCost();
            ores.add(ore);
            return true;
        }
        return false;
    }
    public void drinkPotion(int index) throws BadStatusException {
        if (index >= 0 && index < potions.size()) {
            Status potionStatus = potions.get(index).getIncreasingStatus();
            this.status.addStatus(potionStatus);
            potions.remove(index);
        }
    }
    public void eatFood(int index){
        if(index >=0 && index < foods.size()){
            Food food = foods.get(index);
            energy += food.getEnergy();
            foods.remove(index);
        }
    }
    public void sellPotion(int index){
        if(index >= 0 && index < potions.size()){
            Potion potion = potions.get(index);
            money += potion.getPrice();
            potions.remove(index);
        }
    }
    public void sellFood(int index){
        if(index >=0 && index < foods.size()){
            Food food = foods.get(index);
            money += food.getPrice();
            foods.remove(index);
        }

    }
    public void attack(Monster monster) throws BadStatusException {
        int damage = Math.max(0, status.getAttack() - monster.getStatus().getDurability());
        Status monsterStatus = monster.getStatus();
        int newHp = monsterStatus.getHp() - damage;
        monsterStatus.setHp(Math.max(newHp, 0));
    }
    public void magicAttack(Monster monster) throws BadStatusException {
        int damage = status.getMagic();
        Status monsterStatus = monster.getStatus();
        int newHp = monsterStatus.getHp() - damage;
        monsterStatus.setHp(Math.max(newHp, 0));
    }

}
