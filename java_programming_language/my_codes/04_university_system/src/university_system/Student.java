package university_system;

public class Student {
	private int id;
	private String name;
	private double average;
	private Course[] courses = new Course[8];
	private int courseCounter;
	
	
	Student() {
	}
	Student(int id, String name, double average) {
		this.id = id;
		this.name = name;
		this.average = average;
		
	}
	
	public int getId() {
		return id;
	}
	public String getName() {
		return name;
	}
	public double getAverage () {
		return average;
	}
	public void setId(int id) {
		this.id = id;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setAverage(double average) {
		this.average = average;
	}
	
	public void randomFill() {
		id = (int) (Math.random() * (1000000-100000) + 100000 );
		average = Math.random() * 3 + 1;
		int length = (int)(Math.random()*6+5);
		name = "";
		for(int i=0; i<length; i++) {
			name += (char)((int)(Math.random()*26) + 'a');
		}
	}
	public void printStudent() {
		System.out.println("information of the student with #" + id + " id number:");
		System.out.println("Name: "+ name);
		System.out.println("Average: " + average);
		System.out.println("Enrolled courses: ");
		for(int i=0; i<courseCounter; i++) {
			System.out.println("\t" + (i+1) + ": " + courses[i].getName());
		} 
	}
	public void addCourse(Course course) {
		if(courseCounter<courses.length)
			courses[courseCounter++] = course; 
		else
			System.out.println("Student CAN'T TAKE ANY MORE COURSES");
	}
	public void clearCourses() {
		courseCounter = 0;
	}

}
