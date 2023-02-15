import java.util.*;

class Sorting
{
    public int Arr[];

    public Sorting(int Size)
    {
        Arr[] = new int[Size];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements : ");
        for(int i =0; i < Arr.length; i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println()
        }

    }
}

class Program436
{
    public static void main(String arg[])
    {
        
    }
}