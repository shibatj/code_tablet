public class Compare2String
{
    public static void main(String[] args)
    {
        String test1 = "match";
        String test2 = "match";

        if(test1 == test2)
        {
            System.out.println("String test1 is equal to test2\n");

            String a = "Hello, ";
            String b = "how are you?";
            String c = "Hello, how are you?";

            a += b;

            if(a == c)
            {
                System.out.println("String a is equal to String c\n");
            }else{
                System.out.println("No, String a is not equal to String c\n");
            }

            a = a.intern();
            System.out.println("After calling intern Method");

            if(a == c)
            {
                System.out.println("String a is equal to String c");
            }else{
                System.out.println("No, String a is not equal to String c");
            }
        } 
    }
}