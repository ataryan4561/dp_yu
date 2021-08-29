import java.util.*;
public class g 
{
    public static Scanner scn = new Scanner(System.in);
        public static void main(String[] args)
        {
            String s=scn.nextLine();
            int [] arr =new int[26];
            for(int i=0; i<s.length(); i++)
            {
                char ch=s.charAt(i);
                arr[ch-'a']++;
            }
            int ans=0;
            for(int i=0; i<26; i++)
            {
                if(arr[i]>=1)
                    ans++;
            }
            System.out.print(ans);
        }
}