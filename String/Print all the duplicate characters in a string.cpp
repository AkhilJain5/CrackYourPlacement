void Duplicates(string str)
{
    unordered_map <char, int> char_cnt;
    for (int i = 0; i < str.size(); i++) {
        char_cnt[str[i]]++;
    }
    for (auto ch : char_cnt) {
        if (ch.second > 1)
            cout << ch.first << " count = " << ch.second;

}


