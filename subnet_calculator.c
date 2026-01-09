#include <stdio.h>

int main() {
    int last_octet;

    printf("Subnet Calculator (Class C /24)\n");
    printf("Enter last octet of IP address (0-255):\n");
    scanf("%d", &last_octet);

    if (last_octet < 0 || last_octet > 255) {
        printf("Invalid IP address\n");
        return 0;
    }

    printf("\nIP Address: 192.168.1.%d\n", last_octet);
    printf("Subnet Mask: 255.255.255.0 (/24)\n");

    printf("Network Address: 192.168.1.0\n");
    printf("Broadcast Address: 192.168.1.255\n");
    printf("Usable Hosts: 254\n");

    return 0;
}
