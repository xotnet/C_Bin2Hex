void uc2hex(unsigned char* input, char* output) {
    int inputLen = sizeof(input) / sizeof(unsigned char) / 2;
	unsigned char byte0 = 0b00000000;
    unsigned char byte1 = 0b00000001;
	unsigned char byte2 = 0b00000010;
	unsigned char byte3 = 0b00000011;
	unsigned char byte4 = 0b00000100;
	unsigned char byte5 = 0b00000101;
	unsigned char byte6 = 0b00000110;
	unsigned char byte7 = 0b00000111;
	unsigned char byte8 = 0b00001000;
	unsigned char byte9 = 0b00001001;
	unsigned char byteA = 0b00001010;
	unsigned char byteB = 0b00001011;
	unsigned char byteC = 0b00001100;
	unsigned char byteD = 0b00001101;
	unsigned char byteE = 0b00001110;
	unsigned char byteF = 0b00001111;
	int outIndex = 0;
    for (int i = 0; i < inputLen; i++) {
        if ((byte0 << 4 | input[i] >> 4 << 4) == (byte0 << 4)) {output[outIndex] = '0'; goto second4Bits;}
		else if ((byte1 << 4 | input[i] >> 4 << 4) == (byte1 << 4)) {output[outIndex] = '1'; goto second4Bits;}
    	else if ((byte2 << 4 | input[i] >> 4 << 4) == (byte2 << 4)) {output[outIndex] = '2'; goto second4Bits;}
		else if ((byte3 << 4 | input[i] >> 4 << 4) == (byte3 << 4)) {output[outIndex] = '3'; goto second4Bits;}
		else if ((byte4 << 4 | input[i] >> 4 << 4) == (byte4 << 4)) {output[outIndex] = '4'; goto second4Bits;}
		else if ((byte5 << 4 | input[i] >> 4 << 4) == (byte5 << 4)) {output[outIndex] = '5'; goto second4Bits;}
		else if ((byte6 << 4 | input[i] >> 4 << 4) == (byte6 << 4)) {output[outIndex] = '6'; goto second4Bits;}
		else if ((byte7 << 4 | input[i] >> 4 << 4) == (byte7 << 4)) {output[outIndex] = '7'; goto second4Bits;}
		else if ((byte8 << 4 | input[i] >> 4 << 4) == (byte8 << 4)) {output[outIndex] = '8'; goto second4Bits;}
		else if ((byte9 << 4 | input[i] >> 4 << 4) == (byte9 << 4)) {output[outIndex] = '9'; goto second4Bits;}
		else if ((byteA << 4 | input[i] >> 4 << 4) == (byteA << 4)) {output[outIndex] = 'A'; goto second4Bits;}
		else if ((byteB << 4 | input[i] >> 4 << 4) == (byteB << 4)) {output[outIndex] = 'B'; goto second4Bits;}
		else if ((byteC << 4 | input[i] >> 4 << 4) == (byteC << 4)) {output[outIndex] = 'C'; goto second4Bits;}
		else if ((byteD << 4 | input[i] >> 4 << 4) == (byteD << 4)) {output[outIndex] = 'D'; goto second4Bits;}
		else if ((byteE << 4 | input[i] >> 4 << 4) == (byteE << 4)) {output[outIndex] = 'E'; goto second4Bits;}
		else {output[outIndex] = 'F';}
		
		second4Bits:
		if ((byte0 << 4 | (unsigned char)input[i] << 4) == (byte0 << 4)) {output[outIndex+1] = '0'; goto end;}
		else if ((unsigned char)(byte1 << 4 | input[i] << 4) == (byte1 << 4)) {output[outIndex+1] = '1'; goto end;}
		else if ((unsigned char)(byte2 << 4 | input[i] << 4) == (byte2 << 4)) {output[outIndex+1] = '2'; goto end;}
		else if ((unsigned char)(byte3 << 4 | input[i] << 4) == (byte3 << 4)) {output[outIndex+1] = '3'; goto end;}
		else if ((unsigned char)(byte4 << 4 | input[i] << 4) == (byte4 << 4)) {output[outIndex+1] = '4'; goto end;}
		else if ((unsigned char)(byte5 << 4 | input[i] << 4) == (byte5 << 4)) {output[outIndex+1] = '5'; goto end;}
		else if ((unsigned char)(byte6 << 4 | input[i] << 4) == (byte6 << 4)) {output[outIndex+1] = '6'; goto end;}
		else if ((unsigned char)(byte7 << 4 | input[i] << 4) == (byte7 << 4)) {output[outIndex+1] = '7'; goto end;}
		else if ((unsigned char)(byte8 << 4 | input[i] << 4) == (byte8 << 4)) {output[outIndex+1] = '8'; goto end;}
		else if ((unsigned char)(byte9 << 4 | input[i] << 4) == (byte9 << 4)) {output[outIndex+1] = '9'; goto end;}
		else if ((unsigned char)(byteA << 4 | input[i] << 4) == (byteA << 4)) {output[outIndex+1] = 'A'; goto end;}
		else if ((unsigned char)(byteB << 4 | input[i] << 4) == (byteB << 4)) {output[outIndex+1] = 'B'; goto end;}
		else if ((unsigned char)(byteC << 4 | input[i] << 4) == (byteC << 4)) {output[outIndex+1] = 'C'; goto end;}
		else if ((unsigned char)(byteD << 4 | input[i] << 4) == (byteD << 4)) {output[outIndex+1] = 'D'; goto end;}
		else if ((unsigned char)(byteE << 4 | input[i] << 4) == (byteE << 4)) {output[outIndex+1] = 'E'; goto end;}
		else {output[outIndex+1] = 'F';}
		end:
		outIndex = outIndex + 2;
	}
	output[inputLen*2-1] = '\0';
}