import java.util.*;

public class subsequence {
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args) {
        String s = scn.nextLine();
        String ssf = "";
        printSS(s,ssf);
        System.out.println(SS(s));
    }    

    public static ArrayList<String> SS(String s){
        if(s.length()==0){
            ArrayList<String> base = new ArrayList<>();
            base.add("");
            return base;
            }
            char me = s.charAt(0);
            String str = s.substring(1);

            ArrayList<String> ans = SS(str);

            ArrayList<String> res = new ArrayList<>();

            for(String f: ans){
                res.add(f);
            }

            for(String f: ans){
                res.add(f+me);
            }

            return res;


        }
    public static void printSS(String s,String ssf){
        if(s.length()==0){
            if(ssf!="")
            System.out.println(ssf);
            return;
        }
        
        String c = s.substring(1);
        char ch = s.charAt(0);
        printSS(c,ssf);
        printSS(c,ssf+ch);
    }
}