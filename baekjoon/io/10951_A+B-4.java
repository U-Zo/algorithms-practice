package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        // hasNext() 메서드: 더 이상 읽을 값이 존재하지 않으면 EOF 처리
        while (s.hasNextInt()) {
            int a = s.nextInt();
            int b = s.nextInt();

            System.out.println(a + b);
        }
    }
}