/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: demo_latest.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 28-Mar-2019 15:59:23
 */

/* Include Files */
#include "demo_latest.h"

/* Function Definitions */

/*
 * clc;
 *  clear all;
 *  close all;
 * Arguments    : double Voltage
 * Return Type  : double
 */
double demo_latest(double Voltage)
{
  double data_out;
  int j;
  (void)Voltage;

  /*  R = 10;  %send 10 bits  */
  /*  N = 250; */
  /*  voltage = xlsread('1.xlsx', 'A1:A2400')'; */
  /*  Voltage = xlsread('1.xlsx', 'A721:A960')'; */
  /*  voltage = zeros(1,2400); */
  /*  Len = length(voltage); */
  /*  i = 1;          %initial bit */
  /*  for i = 1:N:Len */
  for (j = 0; j < 24; j++) {
    abort();
  }

  /*  r2c(1) = r(j - N + 1)*u2(1); */
  for (j = 0; j < 23; j++) {
    abort();
  }

  /*  decision variables */
  /*  r1 = r1c((N*i) - (N*(i-1)))^2 + r1s((N*i) - (N*(i-1)))^2; */
  /*          data_out(1,m/N) = 1; */
  /*           data_out(1,rem(i,N) + floor(i/N)) = 1; */
  data_out = 1.0;

  /*        i = i + 1; */
  /*  end  */
  /*  disp(i) */
  /*  v1 = sin(2*pi*f0*t); */
  /*  v2 = sin(2*pi*f1*t); */
  /*  r1c(1) = r(1)*u1(1); */
  /*  r1s(1) = r(1)*v1(1); */
  /*  r2c(1) = r(1)*u2(1); */
  /*  r2s(1) = r(1)*v2(1); */
  /*  for k = 2:N */
  /*      r1c(k) = r1c(k-1)+r(k)*u1(k); */
  /*      r1s(k) = r1s(k-1)+r(k)*v1(k); */
  /*      r2c(k) = r2c(k-1)+r(k)*u2(k); */
  /*      r2s(k) = r2s(k-1)+r(k)*v2(k); */
  /*  end */
  /*   */
  /*  % decision variables */
  /*  r1 = r1c(N)^2+r1s(N)^2; */
  /*  r2 = r2c(N)^2+r2s(N)^2; */
  /*  if (r1 > r2) */
  /*  %         data_out(1,m/N) = 0; */
  /*           data_out(1,1) = 0; */
  /*  else  */
  /*  %         data_out(1,m/N) = 1; */
  /*           data_out(1,1) = 1; */
  /*  end */
  /*  end */
  /*  bit_num = 10; */
  /*  sig_bit = [1 0 0 1 1 1 0 0 1 0]; */
  /*  sgma = 1; */
  /*  for j = 1:bit_num */
  /*      if sig_bit(1,j) == 0 */
  /*      for i = 1:N */
  /*          r(i) = cos(2*pi*f0*t(i)); */
  /*      end */
  /*      else */
  /*      for i = 1:N */
  /*          r(i) = cos(2*pi*f1*t(i)); */
  /*      end */
  /*      end */
  /*  correlator output compute */
  /*   */
  /*  % end */
  /*  % T = 0:1:N-1; */
  /*  % plot(T,r1c,T,r2c,T,r1s,T,r2s); */
  /*  % plot(T,r1c,'.b',T,r2c,'<r',T,r1s,'>g',T,r2s,'*m'); */
  /*  % legend('r1_c','r2_c','r1_s','r2_s'); */
  /*   */
  /*   */
  /*   */
  /*   */
  /*   */
  /*   */
  return data_out;
}

/*
 * File trailer for demo_latest.c
 *
 * [EOF]
 */
