public class Mandatory extends Course{

    public int semester;
    public int year;
    public char instructor1;
    public char instructor2;
    public int[][] matrix = new int[48][14];

   public Mandatory(int id, int courseCode, char courseName, int ects, int semester, int year, char instructor1, char instructor2){
       this.id = id;
       this.courseCode = courseCode;
       this.courseName = courseName;
       this.ects = ects;
       this.semester = semester;
       this.year = year;
       this.instructor1 = instructor1;
       this.instructor2 = instructor2;
   }

   public Mandatory(){

   }
}
