﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian" );
	/*Integer1◦.Дано расстояние L в сантиметрах.Используя операцию деления
    нацело, найти количество полных метров в нем(1 метр = 100 см).*/
	/*int L,m;
	cin >> L;
	m = L / 100;
	cout << m << endl;*/
	/*Integer2◦.Дана масса M в килограммах.Используя операцию деления нацело,
	найти количество полных тонн в ней(1 тонна = 1000 кг).*/
	/*int M, tonn;
	cin >> M;
	tonn = M / 1000;
	cout << tonn << endl;*/
	/*Integer3◦.Дан размер файла в байтах.Используя операцию деления нацело,
	найти количество полных килобайтов, которые занимает данный файл
	(1 килобайт = 1024 байта).*/
	/*int byte,kilobyte;
	cin >> byte;
	kilobyte = byte / 1024;
	cout << kilobyte << endl;*/
	/*Integer4◦.Даны целые положительные числа A и B(A > B).На отрезке длины A размещено максимально возможное количество отрезков длины B
	(без наложений).Используя операцию деления нацело, найти количество
	отрезков B, размещенных на отрезке A.*/
	/*int A, B,col;
	cout << "Введите A и B, A>B: " << endl;
	cin >> A >> B;
	col = A / B;
	cout << col << endl;*/
	/*Integer5◦.Даны целые положительные числа A и B(A > B).На отрезке длины A
	размещено максимально возможное количество отрезков длины B(безналожений).
	Используя операцию взятия остатка от деления нацело, найти длину незанятой части отрезка A.*/
	/*int A, B,ost;
	cout << "Введите A и B, A>B: " << endl;
	cin >> A >> B;
	ost = A % B;
	cout << ost << endl;*/
	/*Integer6◦.Дано двузначное число.Вывести вначале его левую цифру(десятки), а затем — его правую цифру(единицы).
	Для нахождения десятков использовать операцию деления нацело, для нахождения единиц — операцию взятия остатка от деления.*/
	/*int num;
	cin >> num;
	int d, e;
	d = num / 10;
	e = num % 10;
	cout << d << " " << e << endl;*/
	//Integer7◦.Дано двузначное число.Найти сумму и произведение его цифр.
	/*
	int num,d,e,sum;
	cin >> num;
	d=num/10;
	e=num%10;
	sum = d+e;
	cout << sum << endl;
	*/
	//Integer8◦.Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.
	/*
	int num,d,e,sum;
	cin >> num;
	d=num/10;
	e=num%10;
	sum = d+(e*10);
	cout << sum << endl;
	*/
	//Integer9◦.Дано трехзначное число.Используя одну операцию деления нацело, вывести первую цифру данного числа(сотни).
	/*
	int num,s,sum;
	cin >> num;
	s=num/100;
	cout << s << endl;
	*/
	//Integer10.Дано трехзначное число.Вывести вначале его последнюю цифру (единицы), а затем — его среднюю цифру(десятки).
	/*
	int num,sr,e,sum;
	cin >> num;
	e=num%10;
	sr=(num%100)/10;
	cout << e << " " << sr << endl;*/
	
	/*Integer11◦.Дано трехзначное число.Найти сумму и произведение его цифр.*/
	/*int num, s, d, e,sum,pr;
	cin >> num;
	s = num / 100;
	e = num % 10;
	d = (num % 100) / 10;
	sum = s + e + d;
	pr = s * e * d;
	cout << sum << " " << pr << endl;*/
	/*Integer12◦.Дано трехзначное число.Вывести число, полученное при прочтении исходного числа справа налево.*/
	/*int num, s, d, e, sum, spr;
	cin >> num;
	s = num / 100;
	e = num % 10;
	d = (num % 100) / 10;
	spr = e * 100 + d * 10 + s;
	cout << spr << endl;*/
	/*Integer13◦.Дано трехзначное число.В нем зачеркнули первую слева цифру и приписали ее справа.Вывести полученное число.*/
	/*int num, ost, s, num2;
	cin >> num;
	ost = num % 100;
	s = num / 100;
	num2 = (ost * 10) + s;
	cout << num2 << endl;*/
	/*Integer14◦.Дано трехзначное число.В нем зачеркнули первую справа цифру и приписали ее слева.Вывести полученное число.*/
	/*int num, ost, s, num2;
	cin >> num;
	ost = num % 10;
	s = num / 10;
	num2 = (ost * 100) + s;
	cout << num2 << endl;*/
	//Integer15◦.Дано трехзначное число.Вывести число, полученное при перестановке цифр сотен и десятков исходного числа(например, 123 перейдет в213).
	/*int num, s, d, e, sum;
	cin >> num;
	s = num / 100;
	e = num % 10;
	d = (num % 100) / 10;
	sum=s*10+e+d*100;
	cout << sum << endl;*/
	//Integer16◦.Дано трехзначное число.Вывести число, полученное при перестановке цифр десятков и единиц исходного числа(например, 123 перейдетв 132).
	/*int num, s, d, e, sum;
	cin >> num;
	s = num / 100;
	e = num % 10;
	d = (num % 100) / 10;
	sum=s*100+e*10+d;
	cout << sum << endl;*/
	//Integer17◦.Дано целое число, большее 999. Используя одну операцию деления нацело и одну операцию взятия остатка от деления, найти цифру, соответствующую разряду сотен в записи этого числа.
	/*int num,ost,sot;
	cin >> num;
	ost = num % 1000;
	sot = ost / 100;
	cout << sot << endl;*/
	//Integer18◦.Дано целое число, большее 999. Используя одну операцию деления нацело и одну операцию взятия остатка от деления, найти цифру, соответствующую разряду тысяч в записи этого числа.
	/*int num, ost, sot;
	cin >> num;
	ost = num % 10000;
	sot = ost / 1000;
	cout << sot << endl;*/
	//Integer19◦.С начала суток прошло N секунд(N — целое).Найти количество полных минут, прошедших с начала суток.
	/*int N,m;
	cin >> N;
	m = N / 60;
	cout << m << endl;*/
	//Integer20◦.С начала суток прошло N секунд(N — целое).Найти количество полных часов, прошедших с начала суток.
	/*int N,m;
	cin >> N;
	m = N / 3600;
	cout << m << endl;*/

}