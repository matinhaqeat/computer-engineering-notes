package university_system;

public class Test01 {

    public static void main(String[] args) {

        // Create university
        University uni = new University("BTU");

        // Create courses
        Course c1 = new Course("Math");
        Course c2 = new Course("Physics");

        // Add courses to university
        uni.addCourse(c1);
        uni.addCourse(c2);

        // Create students
        Student[] s = new Student[8];
        for (int i = 0; i < 8; i++) {
            s[i] = new Student();
            s[i].randomFill();
        }

        // Enroll students in courses
        c1.addStudent(s[0]);
        c1.addStudent(s[1]);

        c2.addStudent(s[1]);
        c2.addStudent(s[2]);

        // Also update student side
        s[0].addCourse(c1);

        s[1].addCourse(c1);
        s[1].addCourse(c2);

        s[2].addCourse(c2);

        // Print students
        System.out.println("=== STUDENTS ===");
        for (int i = 0; i < 8; i++) {
            s[i].printStudent();
            System.out.println();
        }

        // Print university data
        System.out.println("=== UNIVERSITY ===");
        uni.printAllData();
    }
}