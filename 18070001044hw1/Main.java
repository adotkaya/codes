

import java.util.Random;

public class Main {

    private static int rand(int min, int max){

        Random r = new Random();
        return r.nextInt((max - min) + 1) + min;
    }


    public static void main(String[] args) {


        Student[] students = new Student[48];
        for (int i = 0; i<48; i++){
            students[i] = new Student();
        }

        Instructor[] instructors = new Instructor[12];
        for (int i = 0; i<12; i++){
            instructors[i] = new Instructor();
        }

        Mandatory[] mandatories = new Mandatory[4];
        for (int i = 0; i<4; i++){
            mandatories[i] = new Mandatory();
        }

        Optional[] optionals = new Optional[2];
        for (int i = 0; i<2; i++){
            optionals[i] = new Optional();
        }


        for (int i = 0; i<48; i++){
            students[i].registerCourse(mandatories[0],mandatories[1],mandatories[2],mandatories[3]);
        }

        for (int i = 0; i<24; i++){
            students[i].registerCourse(optionals[0],optionals[1]);
        }


    }
}
