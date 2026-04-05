package quiz_preperation_01;

import java.util.Date;

public class Java_10_Date_Class {
    public static void main(String args[]) {
        // Current date and time
        Date now = new Date();
        
        // Specific date: 5,000,000 milliseconds after Jan 1, 1970
        Date date1 = new Date(5000000);
        
        // Milliseconds since Jan 1, 1970
        long timeInMillis = now.getTime();
        
        // Calculate current hours, minutes, seconds from milliseconds
        long totalSeconds = timeInMillis / 1000;
        long seconds = totalSeconds % 60;              // 0-59
        long minutes = (totalSeconds / 60) % 60;       // 0-59
        long hours = (totalSeconds / 3600) % 24;       // 0-23
        
        // Print results
        System.out.println("Current Date: " + now.toString());
        System.out.println("Milliseconds since Jan 1, 1970: " + timeInMillis);
        System.out.println("Current Hour: " + hours);
        System.out.println("Current Minute: " + minutes);
        System.out.println("Current Second: " + seconds);
        System.out.println("Specific Date (5000000 ms after 1970): " + date1.toString());
    }
}