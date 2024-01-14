public class Monster {
    private String name;
    private Status status;
    private Food food;
    private Potion potion;

    public String getName() {
        return name;
    }

    public Food getFood() {
        return food;
    }

    public Potion getPotion() {
        return potion;
    }

    public Status getStatus() {
        return status;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setFood(Food food) {
        this.food = food;
    }

    public void setPotion(Potion potion) {
        this.potion = potion;
    }

    public void setStatus(Status status) {
        this.status = status;
    }


    public Monster(String name, Status status){

    }
    public void attack(Player player){

    }
    public void magicAttack(Player player){

    }

}
