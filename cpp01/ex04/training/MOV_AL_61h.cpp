/* roi 240905
Here is a sample machine language instruction: 10110000 01100001 */

#include <iostream>

int main() {
    unsigned char value;
    std::cout << "Value in AL register b4 asm command 'MOV AL, 61h': " << static_cast<int>(value) << std::endl;
	asm("movb $0x61, %0" : "=r"(value)); // Inline assembly to move 0x61 into 'value'
    std::cout << "Value in AL register: " << static_cast<int>(value) << std::endl;
    return 0;
}