class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;

        for (string email : emails) {
            string local = "";
            string domain = "";
            bool ignore = false;

            for (char c : email) {
                if (c == '@') {
                    domain = email.substr(email.find('@') + 1);
                    break;
                }
                if (ignore) continue;
                if (c == '+') {
                    ignore = true; // ignore everything after '+'
                } else if (c != '.') {
                    local += c; // take only valid chars
                }
            }

            string normalized = local + "@" + domain;
            uniqueEmails.insert(normalized);
        }

        return uniqueEmails.size();
    }
};
