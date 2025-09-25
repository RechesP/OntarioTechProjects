//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int age = getAge(2003, true);
        System.out.println("I am " + age + " years old.");

    }

    public static int getAge(int BirthYear, boolean HadBirthday) {
        int age = 2025 - BirthYear;
        if (!HadBirthday) {
            age--;
        }
        return age;
    }
}