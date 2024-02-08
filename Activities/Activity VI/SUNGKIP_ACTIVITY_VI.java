import java.util.Scanner;
public class SUNGKIP_ACTIVITY_VI {
    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
      
        System.out.print("enter your number: ");
        int num = sc.nextInt();
         
        int sum = 0;
        int A = 1;
        while(A <= num){
            sum += A;
            A++;

        }
       System.out.println(sum);
    }
}