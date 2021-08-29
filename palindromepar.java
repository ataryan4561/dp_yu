import java.util.*;
public class palindromepar
{
    public static Scanner scn = new Scanner(System.in);
    public static int calls=0;
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
    public static int part(String s ,int i ,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        else if(ispalin(s,i,j))
        {
            return 0;
        }
        int ans=Integer.MAX_VALUE;
        for(int k=i; k<=j-1; k++)
        {
            calls++;
            int temp=part(s,i,k)+part(s,k+1,j)+1;
            ans=Math.min(temp, ans);
        }
        return ans;
    }
    public static void main(String [] args)
    {
        String s="aryan";
        System.out.print(part(s,0,s.length()-1));
        System.out.print(" ");
        System.out.print(calls);
    } 
}