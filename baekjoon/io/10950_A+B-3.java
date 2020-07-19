package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int a, b;

        for (int i = 0; i < t; i++) {
            a = scanner.nextInt();
            b = scanner.nextInt();
            System.out.println(a + b);
        }
    }
}