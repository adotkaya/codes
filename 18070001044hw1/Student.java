public class Student extends User{
    public int studentID;
    public char department;
    public int studyYear;

    public Student(int studentID,char name,char surname,int birthdate,char gender,int mobileNumber,char eMail,char password,char department,int studyYear) {

        this.name = name;
        this.surname = surname;
        this.birthdate = birthdate;
        this.gender = gender;
        this.mobileNumber = mobileNumber;
        this.eMail = eMail;
        this.password = password;
        this.studentID = studentID;
        this.department = department;
        this.studyYear = studyYear;
    }

    public Student() {
    }

    public void downloadFiles(String fileName){
        System.out.println("downloading file"+fileName+"to the system...");

    }

    public void readFiles(String fileName){

        System.out.println(fileName+"is opening....");
        fileName = "read";

    }

    public void registerCourse(Course cName1, Course cName2, Course cName3, Course cName4){
        Course[] registeredCourses = new Course[4];
        cName1 = registeredCourses[0];
        cName2 = registeredCourses[1];
        cName3 = registeredCourses[2];
        cName4 = registeredCourses[3];
    }

    public void registerCourse(Course cName1, Course cName2){
        Course[] registeredOptionalCourses = new Course[2];
        cName1 = registeredOptionalCourses[0];
        cName2 = registeredOptionalCourses[1];

    }
}
