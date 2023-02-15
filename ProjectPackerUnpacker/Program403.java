import java.util.*;
import java.io.*;

class Program403
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        boolean bobj = fobj.createNewFile();
        if(bobj == true)
        {
            System.out.println("File is succesfully created");
        }
        else
        {
            System.out.println("Unable to create file");
        }
    }
}