// Reches & Jacob
// Lab 01
// 1.0 (09/09/2025)

public class Burrito {

    //required attributes
    private String size;
    private String protein;
    private String rice;
    private String beans;
    private String toppings;
    private boolean guac;

    //getters and setters for each
    public String getSize() {
        return size;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public String getProtein() {
        return protein;
    }

    public void setProtein(String protein) {
        this.protein = protein;
    }

    public String getRice() {
        return rice;
    }

    public void setRice(String rice) {
        this.rice = rice;
    }

    public String getBeans() {
        return beans;
    }

    public void setBeans(String beans) {
        this.beans = beans;
    }

    public String getToppings() {
        return toppings;
    }

    public void setToppings(String toppings) {
        this.toppings = toppings;
    }

    public boolean isGuac() {
        return guac;
    }

    public void setGuac(boolean guac) {
        this.guac = guac;
    }

    //constructors
    public Burrito(){
        this.size = "small";
        this.protein = "none";
        this.rice = "no";
        this.beans = "no";
        this.toppings = "no toppings";
        this.guac = false;
    }

    public Burrito(String size, String protein) {
        this.size = size;
        this.protein = protein;
        this.rice = "no";
        this.beans = "no";
        this.toppings = "no toppings";
        this.guac = false;
    }

    public Burrito(String size, String protein, String rice, String beans, String toppings, boolean guac) {
        this.size = size;
        this.protein = protein;
        this.rice = rice;
        this.beans = beans;
        this.toppings = toppings;
        this.guac = guac;
    }

    public double getCost() {
        double cost = 0;

        // size cost
        if (this.size.equals("small")) {
            cost += 5.00;
        } else {
            cost += 7.50;
        }

        if (this.protein.equals("chicken") || this.protein.equals("steak")) {
            cost += 2.00;
        } else {
            cost += 3.00;
        }

        if (!this.beans.equals("no")) {
            cost += 1.00;
        }

        if (!this.rice.equals("no")) {
            cost += 1.00;
        }

        cost += ((this.guac) ? 2.00 : 0);

        return cost;
    }


    @Override
    /*public String toString() {
        return size + " " + protein + " burrito with " + rice + " rice, " + beans + " beans, " + toppings + " and " + ((guac) ? "guacamole." : "no guacamole.");
    }*/

    public String toString() {
        return "-- " + size + "\n-- " + protein + "\n-- " + rice + " rice\n-- " + beans + " beans\n-- " + toppings + "\n-- " + ((guac) ? "guacamole" : "no guacamole")  + "\n-- $" + String.format("%.2f", getCost());
    }
}