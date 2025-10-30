class Solution {
    public String addBinary(String a, String b) {
        StringBuilder ans = new StringBuilder();
        int i = a.length() - 1, j = b.length() - 1, carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {
            carry += (i >= 0 ? a.charAt(i) - '0' : 0);
            carry += (j >= 0 ? b.charAt(j) - '0' : 0);

            ans.append(carry % 2);  // Append the binary digit
            carry /= 2;  // Update carry for next iteration

            i--;
            j--;
        }
        
        return ans.reverse().toString(); // Reverse to get correct order
    }
}
