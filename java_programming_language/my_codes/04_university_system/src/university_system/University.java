package university_system;

public class University {
	//data field:
	private String name; 
	private Course[] courses; 
	private int courseCounter =0; 
	
	//constructors:
	University() {
		name = "btu";
		courses = new Course[20];
	}
	University(String name) {
		this.name = name;
		courses = new Course[20];
	}
	
	//methods:
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Course[] getAllCourses () {
		return courses;
	}
	public int getCourseCounter () {
		return courseCounter;
	}
	
	public void addCourse(Course course) {
		if (courseCounter<courses.length)
			courses[courseCounter++] = course;
		else
			System.out.println("NOT ENOUGH SPACE!");
	}
	public int getEnrolledStudents () {
		int total =0;
		for(int i=0; i<courseCounter; i++) {
			total = total + courses[i].getStudentCounter();
		}
		return total;
	}
	public void printAllData() {
		System.out.println("All information for the \"" + name +"\" university:");
		System.out.println("Name: " + name);
		System.out.println("Courses: ");
		if(courseCounter==0) 
			System.out.println("There is no course!");
		else {
			for(int i=0; i<courseCounter; i++) {
				System.out.println((i+1) + " " + courses[i].getName() + "\tstudents number: " + courses[i].getStudentCounter());
			}
			System.out.println("with a total of #" + getEnrolledStudents() + " students!");
		}
	}
}
