public class Cheese {
    private boolean stinky;
    private String colour;

    public boolean isStinky() {
        return stinky;
    }

    public void setStinky(boolean stinky) {
        this.stinky = stinky;
    }

    public String getColour() {
        return colour;
    }

    public void setColour(String colour) {
        this.colour = colour;
    }

    public int getHeigh() {
        return heigh;
    }

    public void setHeigh(int heigh) {
        this.heigh = heigh;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public int getDepth() {
        return depth;
    }

    public void setDepth(int depth) {
        this.depth = depth;
    }

    private int heigh;
    private int width;
    private int depth;

    public Cheese(boolean s, String c, int h, int w, int d) {
        this.stinky = s;
        this.colour = c;
        this.heigh = h;
        this.width = w;
        this.depth = d;
    }

    public Cheese(){
        this.stinky = false;
        this.colour = "Orange";
        this.heigh = 5;
        this.width = 5;
        this.depth = 5;
    }

    public void cutInHalfWidth(){
        this.width /= 2;
    }

    @Override
    public String toString(){
        return this.width + " cm wide cheese";
    }

    public static void main(String[] args){
        Cheese cheddar = new Cheese();
        System.out.print(cheddar);
        cheddar.cutInHalfWidth();
        System.out.print("\n" + cheddar);
    }
}
