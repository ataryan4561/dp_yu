import java.util.*;
public class palindromeparm {
    public static Scanner scn = new Scanner(System.in);
    public static int calls=0;
    public static int [][] t=new int[100][100];
    public static void iniit()
    {
        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                t[i][j]=-1;
                // System.out.print(t[i][j]);
            }
        }
    }
    public static Boolean ispalin(String s,int i,int j)
    {
        while(i<=j)
        {
            if(s.charAt(i)!=s.charAt(j))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    public static int part(String s,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        else if(ispalin(s, i, j))
        {
            return 0;
        }
        else if(t[i][j]!=-1)
        {
            return t[i][j];
        }
        int ans=Integer.MAX_VALUE;
        for(int k=i; k<=j-1; k++)
        {
            int left=0;
            int right=0;
            if(t[i][k]!=-1)
            {
                left=t[i][k];
            }
            else 
            {
                calls++;
                left=part(s,i,k);
                t[i][k]=left;
            }
            if(t[k+1][j]!=-1)
            {
                right=t[k+1][j];
            }
            else 
            {
                calls++;
                right=part(s,k+1,j);
                t[k+1][j]=right;
            }
            int temp = left+right+1;
            ans=Math.min(temp,ans);
        }
        return t[i][j]=ans;
    }
    public static void main(String [] args)
    {
        String s="aryan";
        iniit();
        System.out.print(part(s,0,s.length()-1));
        System.out.print(" ");
        System.out.print(calls);
    }
}
