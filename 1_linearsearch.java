import java.util.Scanner;
class lsearch
{
    public static void main(String args[])
    {
        String list[]=new String[10];String key;
        Scanner s=new Scanner(System.in);
        for(int i=0;i<3;i++)
            list[i]=s.nextLine();
        key=s.nextLine();
        int pl=linearsearch(list,key);
        System.out.println(pl);
    }
    public static int linearsearch(String list[],String key)
    {
        for(int i=0;i<10;i++)
            if(key.equals(list[i]))
                return 1;
        return 0;
    }
}