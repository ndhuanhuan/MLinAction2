//4 5 6 7 0 1 2
class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());

        size_t begin = 0, end = 0, len = 0;
        while ((begin = s.find_first_not_of(" ", end)) != string::npos) {
            if ((end = s.find(" ", begin)) == string::npos) {
                end = s.length();
            }
            // Reverse each word in the string.
            cout<<end<<endl;
            reverse(s.begin() + begin, s.begin() + end);

            // Shift the word to avoid extra space.
            //Moves the elements in the range [first,last) into the range beginning at result
            move(s.begin() + begin, s.begin() + end, s.begin() + len);
            len += end - begin;
            //cout<<len<<endl;
            s[len++] = ' ';
        }

        //remove last space
        s.resize(len ? len - 1 : 0);
    }
};