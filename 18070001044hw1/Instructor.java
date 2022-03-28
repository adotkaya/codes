public class Instructor extends User{
    public int officePhone;
    public char employementType;

    public Instructor(int id,char name,char surname,int birthdate,char gender,int mobileNumber,char eMail,char password,int officePhone,char employementType) {
        this.id = id;
        this.name = name;
        this.surname = surname;
        this.birthdate = birthdate;
        this.gender = gender;
        this.mobileNumber = mobileNumber;
        this.eMail = eMail;
        this.password = password;
        this.officePhone = officePhone;
        this.employementType = employementType;
    }

    public Instructor() {
    }

    public void downloadFiles(String fileName){
        System.out.println("downloading file"+fileName+"to the system...");
    }

    public void uploadFiles(String fileName){
        System.out.println("uploading file"+fileName+"to the system...");
    }
}
