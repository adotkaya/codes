import java.time.format.DateTimeFormatter;
import java.time.LocalDateTime;

public class Registration {

    DateTimeFormatter dtf = DateTimeFormatter.ofPattern("yyyy/MM/dd");
    DateTimeFormatter dtfs = DateTimeFormatter.ofPattern("mm:ss");
    LocalDateTime now = LocalDateTime.now();



    Instructor instructor1 = new Instructor();
    Student stu1 = new Student();
    Course course1 = new Course();
    String registrationDate = dtf.format(now);
    String registrationTime = dtfs.format(now);

    public Registration(Student stu, Course course){
        this.stu1 = stu;
        this.course1 = course;
    }

    public Registration(Instructor instructor, Course course){
        this.instructor1 = instructor;
        this.course1 = course;
    }

}
