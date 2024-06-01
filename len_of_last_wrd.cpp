class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0; // Initialize the counter to 0 to count the length of the last word
        int n = s.length(); // Store the length of the string
        
        // Loop until there are characters left in the string
        while (n > 0) {
            // Decrease the length and check if the current character is not a space
            if (s[--n] != ' ') {
                count++; // If the character is not a space, increment the counter
            } else if (count > 0) { // If the character is a space and the counter is greater than 0
                return count; // Return the length of the last word
            }
        }
        
        return count; // Return the length of the last word (or 0 if no words were found)
    }
};
