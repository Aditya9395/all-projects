import java.util.*;
import java.io.*;

class Program405
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

         if(fobj.exists())
         {
            BufferedReader bobj = new BufferedReader(new FileReader(fobj));

            String data;

            while((data = bobj.readLine()) != null)
            {
                System.out.println(data);
            }
         }
         else
         {
            System.out.println("There is no such file");
         }
    }
}