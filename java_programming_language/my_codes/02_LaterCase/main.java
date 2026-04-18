/*
 * LaterCases
 * Simple utility class for basic string operations like case conversion,
 * validation of numeric/letter content, and string-to-number conversion.
 * All methods are static and do not modify the original input string.
 */
public class LaterCases {

    /*
     * Converts all lowercase letters in the string to uppercase.
     * Non-letter characters are not changed.
     */
    public static String toUpper(String str) {
        if (str == null) return null;

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch >= 'a' && ch <= 'z') {
                ch = (char) (ch - 32);
            }

            result.append(ch);
        }

        return result.toString();
    }

    /*
     * Converts all uppercase letters in the string to lowercase.
     * Non-letter characters are not changed.
     */
    public static String toLower(String str) {
        if (str == null) return null;

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch >= 'A' && ch <= 'Z') {
                ch = (char) (ch + 32);
            }

            result.append(ch);
        }

        return result.toString();
    }

    /*
     * Checks if the string contains only digits (0–9).
     */
    public static boolean isNumber(String str) {
        if (str == null || str.isEmpty()) return false;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch < '0' || ch > '9') return false;
        }

        return true;
    }

    /*
     * Checks if the string contains only letters (A–Z, a–z).
     */
    public static boolean isLetter(String str) {
        if (str == null || str.isEmpty()) return false;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
                return false;
            }
        }

        return true;
    }

    /*
     * Checks if the string contains only letters and digits.
     */
    public static boolean isLetterAndNumber(String str) {
        if (str == null || str.isEmpty()) return false;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (!((ch >= 'a' && ch <= 'z') ||
                  (ch >= 'A' && ch <= 'Z') ||
                  (ch >= '0' && ch <= '9'))) {
                return false;
            }
        }

        return true;
    }

    /*
     * Converts a numeric string into a long value.
     * Returns -1 if the string is not a valid number.
     */
    public static long toNumber(String str) {
        if (!isNumber(str)) return -1;

        long number = 0;

        for (int i = 0; i < str.length(); i++) {
            number = number * 10 + (str.charAt(i) - '0');
        }

        return number;
    }
}
