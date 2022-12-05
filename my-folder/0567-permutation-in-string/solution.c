bool checkInclusion(char * s1, char * s2){
    int hash_map_s1[26] = {0};
    int hash_map_s2[26] = {0};
    size_t len_s1 = strlen(s1);
    size_t len_s2 = strlen(s2);
    if (len_s1 > len_s2)
        return false;
    for (int i = 0; s1[i] != '\0'; i++){
        hash_map_s1[s1[i] - 'a']++;
        hash_map_s2[s2[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++){
        if (hash_map_s1[i] == hash_map_s2[i])
            count++;
    }
    for (int i = 0; i < (len_s2 - len_s1); i++){
        if (count == 26)
            return true;
        char r = s2[i + len_s1] - 'a', l = s2[i] - 'a';
        hash_map_s2[r]++;
        if (hash_map_s1[r] == hash_map_s2[r])
            count++;
        else if (hash_map_s2[r] == (hash_map_s1[r] + 1))
            count--;

        hash_map_s2[l]--;

        if (hash_map_s1[l] == hash_map_s2[l])
            count++;
        else if (hash_map_s2[l] == (hash_map_s1[l] - 1))
            count--;

    }
    return count == 26;
}
