import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program418
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name : ");
            String FolderName = sobj.nextLine();

            File fobj = new File(FolderName);

            System.out.println("Enter the n ame of packed file : ");
            String PackFile = sobj.nextLine();

            File fpackobj = new File(PackFile);
            fpackobj.createNewFile();

            FileOutputStream fout = new FileOutputStream(fpackobj);

            if(fobj.exists())
            {
                File allfiles[] = fobj.listFiles();

                System.out.println("Number of files are : "+allfiles.length);

                System.out.println("File names are : ");

                byte Buffer[] = new byte[1024];
                int ret = 0;

                for(int i = 0; i< allfiles.length; i++)
                {
                    name = allfiles[i].getName();

                    for(int j = name.length(); j<100; j++)
                    {
                        name = name + " ";
                    }

                    if(name.endsWith(".txt"))
                    {
                        name = name + " " + allfiles[i].length();

                        for(int j = name.length(); j<100; j++)
                       {
                          name = name + " ";
                       }

                        System.out.println("Header : "+name+"with length : "+name.length());
                        
                        byte HeaderByte [] =name.getBytes();
                        FileInputStream fiobj = new FileInputStream(allfiles[i]);

                        while((ret = fiobj.read(Buffer)) != -1)
                        {
                          fout.write(Buffer,0,ret);
                        }

                    }
                }
            }
            else
            {
                System.out.println("There is no such folder..");
            }

        }// End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    } //end of main
}   // end of class