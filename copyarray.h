#pragma once


// Copy array in first to second massive

void copyarray(char **a, int n,char **b)//from where
{
 for (int i = 0; i != n;i++ )//
  b[i] = a[i]; 	
}

