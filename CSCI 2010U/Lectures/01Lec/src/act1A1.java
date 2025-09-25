public class act1A1 {
    public static void main(String[] args) {
        String lunch = getLunch(3, true);
        System.out.println("I am having " + lunch + " for lunch.");

    }

    public static String getLunch(int food, boolean wantsWater) {
        String f = "";
        switch (food) {
            case 1:
                f = "Fries";
                break;
            case 2:
                f = "Burger";
            case 3:
                f = "tacos";
        }
        if (wantsWater) {
            return f + " and Water";
        }
        return f;
    }
}
