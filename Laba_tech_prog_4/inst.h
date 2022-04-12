#pragma once

#include "figure.h"
#include "circle.h"
#include "rectangle.h"
#include "rtringle.h"
#include "trapetion.h"

void showAll(Figure**& Arr, int kol);
void addEl(Figure**& Arr, int kol, int r);
void addEl(Figure**& Arr, int kol, int a, int b, int h);
void addElrec(Figure**& Arr, int kol,  int a, int b);
void addEl(Figure**& Arr, int kol,  int a, int b);
void delEl(Figure**& Arr,  int kol, int ind);

void redswitch(Figure**& Arr, int kol, int ind);