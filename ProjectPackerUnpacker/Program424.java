import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program424
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("--------- Marvellous Packer Unpacker CUI Panel --------- ");

        try
        {
            System.out.println("Enter the name of packed file : ");
            System.out.println("Note : Packed file should be in the current directory.");

            String PackFile = sobj.nextLine();

            File fpackobj = new File(PackFile);

            FileInputStream fin = new FileInputStream(fpackobj);

            if(fpackobj.exists())
            {
                System.out.println("Packed file is there..");

                byte Header[] = new byte[100];

                fin.read(Header,0,100);

                String StrHeader = new String(Header);

                System.out.println(StrHeader);
            }
            else
            {
                System.out.println("There is no such file..");
            }

        }// End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    } //end of main
}   // end of class