package quiz_preperation_01;

public class Java_05_Methods {
    // Using methods from another class: ClassName.methodName(actualParameters);

    public static void main(String[] args) {
        // Invoking method #1:
        hello();

        // Invoking method #2:
        welcome(12);

        // Invoking method #3:
        System.out.println("Random number: " + randomInt());

        // Invoking method #4:
        System.out.println("Max of 23, 45: " + max(23, 45));
    }

    // Our Methods:

    public static void hello() {
        // Method without parameters and without a return value
        System.out.println("Nothing!");
    }

    public static void welcome(int counter) {
        // Method with parameters but without a return value
        for (int i = 0; i < counter; i++) {
            System.out.println("This line will run 'counter' times");
        }
    }

    public static int randomInt() {
        // Method without parameters but with a return value
        return (int) (Math.random() * 101);
    }

    public static int max(int x, int y) {
        // Method with parameters and a return value
        return (x > y) ? x : y;
    }
}