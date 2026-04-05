package quiz_preperation_01;

public class Java_09_Classes {
	public static void main(String args[]) {
		Circle circle1;   				//creating object
		circle1 = new Circle(); 		//declaring
		//or:
		Circle circle2 = new Circle(); 
		
		//accessing data from a class:
		System.out.println(circle1.radius); 
		System.out.println("radius: " + circle1.radius + "\narea: " + circle1.get_area());
		//changing a data from an object:
		circle2.radius = 4;   //or:
		circle2.set_radius(45);
		
		

	}
	

}

class Circle {
	double radius = 1;
	
	Circle() {
	}
	Circle(double radius) {
		this.radius = radius;
	}
	
	double get_area() { 
		return Math.PI * radius * radius;
	}
	
	double get_perimeter() {
		return 2 * Math.PI * radius; 
	}
	void set_radius(double radius) {
		this.radius = radius; 
	}
	//getter method:
	public double getRadius() {
		return radius;
	}
	//setter method:
	public void setRadius(double radius) {
		this.radius = radius;
	}
	

}
