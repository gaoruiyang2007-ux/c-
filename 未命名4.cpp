#include <stdio.h>
#include <string.h>

// 校验 IPv4 地址的合法性
int validate_ipv4(char *ip_str) {
    int len = strlen(ip_str);
    // IPv4 最短为 "0.0.0.0" (7位)，最长为 "255.255.255.255" (15位)
    if (len < 7 || len > 15) {
        return 0; 
    }

    int dot_count = 0;    // 记录点号数量
    int digit_count = 0;  // 记录当前段数字的字符数
    int num = 0;          // 记录当前段的数值

    for (int i = 0; i < len; i++) {
        char c = ip_str[i];

        if (c == '.') {
            dot_count++;
            if (dot_count > 3) return 0; // 超过3个点，不合法
            if (digit_count == 0) return 0; // 两个点连在一起，或者开头是点，不合法

            // 前导零检查：如果长度大于1且首字符是 '0'（例如 "01"），不合法
            if (digit_count > 1 && ip_str[i - digit_count] == '0') return 0;
            
            // 准备计算下一段
            digit_count = 0;
            num = 0;

        } else if (c >= '0' && c <= '9') {
            digit_count++;
            if (digit_count > 3) return 0; // 某一段长度超过3位，不合法

            num = num * 10 + (c - '0');
            if (num > 255) return 0; // 数值超过255，不合法

        } else {
            return 0; // 出现了非数字且非点的字符，不合法
        }
    }

    // 循环结束后，检查最后一段的状态
    if (dot_count != 3) return 0; // 点的数量不是正好3个
    if (digit_count == 0) return 0; // 结尾是点（如 "192.168.1."），不合法
    if (digit_count > 1 && ip_str[len - digit_count] == '0') return 0; // 最后一段有前导零

    return 1; // 所有检查通过，合法
}

int main() {
    char ip_str[50]; // 数组开大一点，防止输入非法长字符串时溢出

    // 读取输入
    if (scanf("%49s", ip_str) != EOF) {
        // 1. 原样输出输入的 IP 地址
        printf("IP地址-%s\n", ip_str);

        // 2. 调用函数并输出校验结果
        if (validate_ipv4(ip_str)) {
            printf("校验结果-合法\n");
        } else {
            printf("校验结果-不合法\n");
        }
    }

    return 0;
}
