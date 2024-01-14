package logic.components;

import exception.BadStatusException;

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

    public void setAttack(int attack) throws BadStatusException {
        if (attack < 0) {
            throw new BadStatusException();
        }
        this.attack = attack;
    }

    public void setDurability(int durability) throws BadStatusException {
        if (durability < 0) {
            throw new BadStatusException();
        }
        this.durability = durability;
    }

    public void setHp(int hp) throws BadStatusException {
        if (hp < 0) {
            throw new BadStatusException();
        }
        this.hp = hp;
    }


    public void setMagic(int magic) throws BadStatusException {
        if (magic < 0) {
            throw new BadStatusException();
        }
        this.magic = magic;
    }

    public Status(int hp, int durability, int attack, int magic) throws BadStatusException {
        setHp(hp);
        setDurability(durability);
        setAttack(attack);
        setMagic(magic);
    }
    public boolean equals(Object o){
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Status otherStatus = (Status) o;
        return hp == otherStatus.hp &&
                durability == otherStatus.durability &&
                attack == otherStatus.attack &&
                magic == otherStatus.magic;
    }
    public void addStatus(Status another) throws BadStatusException{
        setHp(this.hp + another.hp);
        setDurability(this.durability + another.durability);
        setAttack(this.attack + another.attack);
        setMagic(this.magic + another.magic);
    }

}
