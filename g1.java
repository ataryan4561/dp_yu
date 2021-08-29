import java.util.*;
public class g1 {
    public static Scanner scn = new Scanner(System.in);
    public static Boolean[] arr=new Boolean[100000];
    public static Boolean check(int a)
    {
        for(int i=2; i*i<=a; i++)
        {
            if(a%i==0)
                return false;
        }
        return true;
    }
    public static void prime()
    {
        for(int i=1; i<100000; i++)
        {
            arr[i]=check(i);
        }
    }
    public static void fibo()
    {
        int i=0; 
        int j=1; 
        while(i<100000)
        {
            int th=i+j;
            if(i>100000 || j>100000 || th>100000)
                break;
            arr[i]=arr[j]=true;
            arr[th]=true;
            i=j;
            j=th;
        }
    }
    public static void main(String [] args)
    {
        int n=scn.nextInt();
        prime();
        fibo();
        int flag=0;
        int i=n;
        while(flag!=1)
        {
            if(arr[i]==false)
            {
                System.out.print(i);
                flag=1;
            }
            i++;
        }
        // for(int i=n; i<100000; i++)
        // {
        //     if(arr[i]==false)
        //         System.out.print(i);
        //         break;
        // }
    }
}
