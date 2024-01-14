package logic.components;

import exception.BadStatusException;
import logic.components.Status;

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


    public Monster(String name, Status status) throws BadStatusException {
        this.name = name;
        this.status = status;
        if(this.status.getHp()<=0){
            this.status.setHp(1);
        }
        this.food = null;
        this.potion = null;
    }
    public void attack(Player player) throws BadStatusException {
        int damage = Math.max(0, status.getAttack() - player.getStatus().getDurability());
        Status playerStatus = player.getStatus();
        int newHp = playerStatus.getHp() - damage;
        playerStatus.setHp(Math.max(newHp, 0));
    }
    public void magicAttack(Player player) throws BadStatusException {
        int damage = status.getMagic();
        Status playerStatus = player.getStatus();
        int newHp = playerStatus.getHp() - damage;
        playerStatus.setHp(Math.max(newHp, 0));

    }

}
