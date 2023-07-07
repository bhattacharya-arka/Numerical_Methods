import java.util.*;
public class elementsum
{
    public static void main(String[] args)
    {
        int[] arr={800,500,400,900,700,200,100,600,300};
        Arrays.sort(arr);
        Scanner sc = new Scanner(System.in);
        int num=sc.nextInt();
        int top=0,down=arr.length-1;
        while (arr[top]+arr[down]!=num)
        {
            if(arr[top]+arr[down]==num)
            {
                System.out.println(arr[top]+" "+arr[down]);
                System.exit(0);
            }
            if (arr[top]+arr[down]>num)
                down--;
            else
                top++;
        }
        System.out.println(arr[top]+" "+arr[down]);
        sc.close();
    }
}