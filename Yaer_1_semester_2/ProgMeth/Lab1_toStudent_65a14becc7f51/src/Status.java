public class Status {
    private int hp;
    private int durability;
    private int attack;
    private int magic;

    public int getDurability() {
        return durability;
    }

    public int getHp() {
        return hp;
    }

    public int getAttack() {
        return attack;
    }

    public int getMagic() {
        return magic;
    }
    public Status(int hp, int durability, int attack, int magic) throws BadStatusException{

    }
    public boolean equals(Object o){
        if(this.attack == attack && this.hp == hp && this.durability == durability && this.magic == magic){
            return true;
        }
        return false;
    }
    public void addStatus(Status another) throws BadStatusException{

    }

}
