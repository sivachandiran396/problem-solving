class Solution {
    public boolean isValid(String word) {
        int chcount = 0;
        boolean vowel = false, consot = false;
        for (int i = 0; i < word.length(); i++) {
            if (word.charAt(i) == 'a' || word.charAt(i) == 'e' || word.charAt(i) == 'i' || word.charAt(i) == 'o'
                    || word.charAt(i) == 'u' || word.charAt(i) == 'A' || word.charAt(i) == 'E' || word.charAt(i) == 'I'
                    || word.charAt(i) == 'O' || word.charAt(i) == 'U') {
                vowel = true;
            } else if (Character.isLetter(word.charAt(i))) {
                consot = true;
            } else if (Character.isDigit(word.charAt(i))) {
                continue;
            } else {
                return false;
            }
        }
        return ((word.length() >= 3) && vowel && consot) ? true : false;
    }
}