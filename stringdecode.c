/*
 * Routine to decode a string and print the decoded format
 *
 * eg: 3[a2[bc]] decodes as abcbcabcbcabcbc
 */

void decodeString (char *input_str) {
    int i = 0;

    while (input_str[i] != '\0') {
        if (Character.isDigit(input_str.charAt(i))) {
            Stack.push(input_str.charAt(i));
        } else if (input_str.charAt(i) == '[') {
            Stack.push((input_str.charAt(i)));
        } else if (input_str.charAt(i) == ']') {
            (void) Stack.pop();    //Pops the [ brace
            int repeat = Character.toDigit(Stack.pop());    //pops the number

            for (int j = 0; j < repeat; j++) {
                finalStr.append(interimStr);
            }
        } else {
            interimStr.append(input_str.charAt(i));
        }
        i++;
    }

    System.out.println(finalStr);
}
