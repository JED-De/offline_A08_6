#include <iostream>

using namespace std;

unsigned int my_strlen(const char * ptr)
{
	int i = 0;
	for (; i < 20; i++)
	{
		if (ptr[i] == '\0')
		{
			break;
		}
	}
	return i;
}

char* my_strconcat(const char * ptr1, const char * ptr2) 
{
	int i = 0;
	
	int ptr1_len = my_strlen(ptr1);
	int ptr2_len = my_strlen(ptr2);
	const int output_len = ptr1_len + ptr2_len + 1; // die + 1 hat gefehlt
	char* output;
	output = new char[output_len] { 0 };
	for (; i < my_strlen(ptr1); i++)
	{
		output[i] = ptr1[i];
	}
	for (int j = 0; j < my_strlen(ptr2); i++, j++)
	{
		output[i] = ptr2[j];
	}
	output[i] = '\0';
	return output;
}


int main()
{
	const int len = 20; 
	char array1[len] = { 0 };
	char array2[len] = { 0 };
	char* my_strconcat(const char * ptr1, const char * ptr2);

	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(array1, len);
	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(array2, len);
	char* ergebnis;
	ergebnis = my_strconcat(array1, array2);
	cout << "Ergebnis my_strconcat(): " << ergebnis << endl;
	system("PAUSE");
	return 0;
}