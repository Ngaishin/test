#include "Head.h"

//one hundred dollars buy one hundred chicken
void buyChicken()
{
	printf("��Ԫ��ټ�,����5Ԫ/ֻ��ĸ��3Ԫ/ֻ��С��1Ԫ/3ֻ\n");
	int i, j, k;
	for (i = 0; i <= 20; i++) {
		for (j = 0; j <= 33; j++) {
			for (k = 0; k <= 100; k++) {
				if (100 == i + j + k && 300 == 15 * i + 9 * j + k * 1) {
					printf("����;%-4d,ĸ��%-4d,С��%-4d\n", i, j, k);
				}
			}

		}
	}
}

//print rhombus
void prnRhombus(int len) 
{
	int halfLen = len / 2;
	int i,j;
	for (i = 0; i < len; i++) {
			for (j = 0; j < len; j++) {
				//��������
				if (len % 2 != 0) {
					if (((i <= halfLen && (j > halfLen - 1 - i) && (j < halfLen + i + 1))\
						|| \
						(i > halfLen && (j >= i - halfLen) && (j < len + halfLen - i)))\
						&&\
						((j+i) % 2 != 0))//���Ӵ�λ������
						printf("%2c",42);

					else
						printf("  ");
				}
				//ż������
				else
					if ((i <= halfLen && (j >= halfLen - 1 - i) && (j <= halfLen + i))\
						|| \
						(i >= halfLen - 1 && (j >= i - halfLen) && (j < len + halfLen - i)))
						printf("%2c", 42);
					else
						printf("  ");
			}
			putchar(10);
	}
}

//find the max or min Number or the second of its in the array 
void findNum(int *arr, int arrLength, char numType)
{
	//sample
	/*int arr[10]  = { 2,2,2,2,2,2,1,2,0,2};
	int arr1[10] = { 11,11,11,11,11,11,0,11,11,0 };
	int arr2[10] = { 11,2,9,3,7,6,8,4,10,5 };
	int arr3[10] = { 1,8,1,9,0,10,1,0,10,1 };

	int arrlen = sizeof(arr) / sizeof(arr[0]);

	findNum(arr, arrlen, 4);
	findNum(arr1, arrlen, 4);
	findNum(arr2, arrlen, 4);
	findNum(arr3, arrlen, 4);*/

	//variable
	int maxNum =arr[0];
	int minNum =arr[0];
	int secMax =arr[0];
	int secMin =arr[0];

	//algorithm
	for (int i=1; i < arrLength; i++) {
		while ((maxNum <= secMax) || (minNum >= secMin)) {
			if (maxNum < arr[i]) {
				maxNum = arr[i];
				if (minNum < arr[i]) {
					secMin = arr[i];
					break;
				}
				else if (minNum > arr[i]) {
					minNum = arr[i];
					break;
				}
			}
			else if (maxNum > arr[i]) {
				secMax = arr[i];
				if (minNum < arr[i]) {
					secMin = arr[i];
					break;
				}
				else if (minNum > arr[i]) {
					minNum = arr[i];
					break;
				}
			}
			else
				break;
		}
		if(secMax>=arr[i]){
			if (minNum > arr[i]) {
				secMin = minNum;
				minNum = arr[i];
			}
			else if (minNum < arr[i] && arr[i] < secMin)
				secMin = arr[i];
		}
		else if (secMax < arr[i]&&arr[i]<maxNum) {
			secMax = arr[i];
			if (minNum > arr[i]) {
				secMin = minNum;
				minNum = arr[i];
			}
			else if (minNum < arr[i] && arr[i] < secMin)
				secMin = arr[i];
		}
		else if (maxNum < arr[i]) {
			secMax = maxNum;
			maxNum = arr[i];
			if (minNum > arr[i]) {
				secMin = minNum;
				minNum = arr[i];
			}
			else if (minNum < arr[i] && arr[i] < secMin)
				secMin = arr[i];
		}

	}

	//select output
	switch(numType) {
		case 0:
			printf("max: %d\n", maxNum); break;
		case 1:		
			printf("sec_max: %d\n", secMax); break;
		case 2:		
			printf("min: %d\n", minNum); break;
		case 3:	
			printf("sec_min: %d\n", secMin); break;
		case 4:
			printf("max: %d\nsec_max: %d\nmin: %d\nsec_min: %d\n", maxNum,secMax,minNum,secMin); break;
		default:
			printf("Error Input\n");
	}
	putchar(10);
}


