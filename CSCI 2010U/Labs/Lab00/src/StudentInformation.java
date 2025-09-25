import java.util.Scanner;

public class StudentInformation {
    public static void main(String[] args) {
        int year = 0;
        String Name = "";
        double GPA = 0;
        while (!Name.equals("999")) {
            Scanner input = new Scanner(System.in);
            System.out.print("Enter Name, Year of study, and GPA,: ");
            System.out.print("\nEnter name as 999 to exit\n");
            Name = input.nextLine();
            year = input.nextInt();
            GPA = input.nextDouble();
            String eligibility = isTheStudentEligibleForScienceCoop(Name, year, GPA);
            for (int i = 0; i < eligibility.length(); i++) {
                System.out.print(eligibility.charAt(i));
            }
            System.out.println();
            System.out.println();
        }
    }
    public static String isTheStudentEligibleForScienceCoop(String Name, int year, double GPA) {
        boolean goodGpa = GPA > 2.7;
        boolean goodYear = year >= 2;
        if (Name.equals("999")){
            return "";
        }
        if(!goodGpa && !goodYear) {
            return "No, " + Name + " is not eligible for Science Coop.\nBeing in year " + year + " and having a GPA of " + GPA + " makes them ineligible";
        }else if( goodGpa && !goodYear) {
            return "No, " + Name + " is not eligible for Science Coop.\nBeing in year " + year + " makes them ineligible";
        }else if(!goodGpa) {
            return "No, " + Name + " is not eligible for Science Coop.\nHaving a GPA of " + GPA + " makes them ineligible";
        }
        return "Yes, " + Name + " is eligible for Science Coop.\nBeing in year " + year + " and having a GPA of " + GPA + " makes them eligible";

    }
}
