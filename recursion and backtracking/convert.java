public class DecimalToBinary {
    public static void main (string[] args) {
        string binary = findBinary(233, "");
    }
    public static string findBinary(int decimal, string result) {
        if (decimal == 0) {
            return result;
        }

        result = decimal % 2 + result;
        return findBinary(decimal/2, result);
    }
}
