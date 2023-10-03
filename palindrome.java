import java.util.*;
public class palindrome {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a string");
        String word=sc.next();
        int check=0;
        int n=word.length();
        for(int i=0;i<n;i++){
            if(word.charAt(i)==word.charAt(n-1-i)){
                check=1;
                
            }
            else{
                check=0;
            }
            

        } 
        if(check==1){
            System.out.println(word+" is a pailindrome");
        }
        else{
            System.out.println(word+" is not a pailindrome");
        }

    }
    
}
