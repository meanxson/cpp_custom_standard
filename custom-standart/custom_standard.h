//
// Created by meanx on 15/05/2023.
//

#ifndef CPP_CUSTOM_STANDARD_CUSTOM_STANDARD_H
#define CPP_CUSTOM_STANDARD_CUSTOM_STANDARD_H

namespace c_std {

    size_t strlen(char *str);

    struct string {
    private:
        char *data;
        size_t length;

    public:
        string() : data(nullptr), length(0) {}

        string(char *str) {
            data = str;
            length = strlen(str);
        }

        char *getData() {
            return data;
        }
    };

    size_t strlen(char *str) {
        size_t length = 0;
        while (str[length] != '\0') length++;
        return length;
    }
}

#endif //CPP_CUSTOM_STANDARD_CUSTOM_STANDARD_H
