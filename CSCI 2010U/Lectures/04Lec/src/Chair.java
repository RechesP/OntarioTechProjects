//1B2 Lecture 2

public class Chair {
    private String colour;
    private String material;
    private int height;
    private boolean spinny;

    public Chair(String colour, String material, int height, boolean spinny) {
        this.colour = colour;
        this.material = material;
        this.height = height;
        this.spinny = spinny;
    }

    public Chair(){
        this.colour = "black";
        this.material = "leather";
        this.height = 4;
        this.spinny = true;
    }

    public String getColour() {
        return colour;
    }

    public void setColour(String colour) {
        this.colour = colour;
    }

    public String getMaterial() {
        return material;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public boolean isSpinny() {
        return spinny;
    }

    public void setSpinny(boolean spinny) {
        this.spinny = spinny;
    }

    @Override
    public String toString() {
        return "This chair is " + colour + ", made of " + material + " , and " + height + " feet tall" + ((spinny) ? " and spinny.":".");
    }

    public void lower(){
        this.height -= 1;
    }

}
