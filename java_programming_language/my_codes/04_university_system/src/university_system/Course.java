package university_system;

public class Course {
	private String name;
	private Student [] students = new Student[30];
	private int studentCounter=0;
	
	Course() {
		name = "Empty";
		
	}
	Course(String name) {
		this.name = name;
	}
	Course(String name, Student[] students) {
		this(name);
		this.students = students;
		studentCounter = students.length; 
	}
	
	
	public int getStudentCounter() {
		return studentCounter;
	}
	public Student[] getStudents() {
		return students;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name= name;
	}
	public void addStudent(Student x) {
		if(studentCounter<students.length)
			students[studentCounter++] = x;
		else
			System.out.println("NOT ENOUGH SPACE");
	}
}
