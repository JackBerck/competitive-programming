        string result;
        for (size_t i = 0; i < s.length(); ++i)
        {
            result += toupper(s[i]);
            for (size_t j = 0; j < i; ++j)
            {
                result += tolower(s[i]);
            }
            if (i != s.length() - 1)
            {
                result += "-";
            }
        }
        return result;
