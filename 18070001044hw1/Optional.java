public class Optional extends Course{
    public char instructor1;
    public int[][] matrix = new int[20][14];

    public Optional(int id, int courseCode, char courseName, int ects, char instructor1) {
        this.id = id;
        this.courseCode = courseCode;
        this.courseName = courseName;
        this.ects = ects;
    }

    public Optional(){

    }

}
