#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n)
        {

            int j = i + 1;
            while (j < n && chars[i] == chars[j])
            {
                j++;
            }

            //loop theke baire asbo tokonie jokon newchar pabo/length finish

            // Store the current character
            chars[ansIndex++] = chars[i];

            int count = j - i;

            // If count is greater than 1, convert it to a string and append it
            if (count > 1)
            {
                //convert count into single digit and saving in ans
                string cnt = to_string(count);
                for (char ch : cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }

            // Move to the next group of characters
            i = j;
        }

        return ansIndex;
    }
};

int main() {
    Solution solution;

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << "Original characters: ";
    for (char ch : chars)
    {
        cout << ch << " ";
    }
    cout << endl;

    int compressedLength = solution.compress(chars);

    cout << "Compressed characters: ";
    for (int i = 0; i < compressedLength; ++i)
    {
        cout << chars[i];
    }
    cout << endl;

    cout << "Compressed length: " << compressedLength << endl;

    return 0;
}

