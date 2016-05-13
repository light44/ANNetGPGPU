#ifndef NETSAMPLES_H
#define NETSAMPLES_H

#include <vector>


float fInp1[56] = { 0,0,0,0,1,0,0,
                    0,0,0,1,1,0,0,
                    0,0,1,0,1,0,0,
                    0,1,0,0,1,0,0,
                    0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0 };
                    
float fInp2[56] = { 0,0,0,1,1,0,0,
                    0,0,1,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,1,0,0,
                    0,0,0,1,0,0,0,
                    0,0,0,1,0,0,0,
                    0,0,1,0,0,0,0,
                    0,1,1,1,1,1,0 };
                    
float fInp3[56] = { 0,0,0,0,0,0,0,
                    0,1,1,1,1,0,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,0,1,0,
                    0,1,1,1,1,0,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,0,1,0,
                    0,1,1,1,1,0,0 };
                    
                    
float fInp4[56] = { 0,0,0,1,0,0,0,
                    0,0,1,0,0,0,0,
                    0,1,0,0,0,0,0,
                    1,0,0,0,1,0,0,
                    1,1,1,1,1,1,0,
                    0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0 };
                    
float fInp5[56] = { 0,1,1,1,1,1,0,
                    0,1,0,0,0,0,0,
                    0,1,0,0,0,0,0,
                    0,1,1,1,1,1,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,0,1,0,
                    0,1,1,1,1,1,0 };
                    
float fInp6[56] = { 0,0,0,1,1,1,0,
                    0,0,1,0,0,0,0,
                    0,1,0,0,0,0,0,
                    0,1,0,0,0,0,0,
                    0,1,1,1,1,0,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,0,1,1,1,0,0 };
                    
float fInp7[56] = { 0,1,1,1,1,1,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,1,0,0,
                    0,1,1,1,1,1,0,
                    0,0,1,0,0,0,0,
                    0,0,1,0,0,0,0,
                    0,1,0,0,0,0,0,
                    0,1,0,0,0,0,0 };
                    
float fInp8[56] = { 0,1,1,1,1,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,1,1,1,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,1,1,1,1,0 };
                    
float fInp9[56] = { 0,0,1,1,1,0,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,0,1,1,1,1,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,0,1,0,
                    0,0,0,0,0,1,0,
                    0,1,1,1,1,0,0 };
 
float fInp10[56] = {0,1,1,1,1,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,0,0,0,1,0,
                    0,1,1,1,1,1,0 };
                    
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
float fOut1[9] =  {1, 0, 0, 0, 0, 0, 0, 0, 0};
float fOut2[9] =  {0, 1, 0, 0, 0, 0, 0, 0, 0};
float fOut3[9] =  {0, 0, 1, 0, 0, 0, 0, 0, 0};
float fOut4[9] =  {0, 0, 0, 1, 0, 0, 0, 0, 0};
float fOut5[9] =  {0, 0, 0, 0, 1, 0, 0, 0, 0};
float fOut6[9] =  {0, 0, 0, 0, 0, 1, 0, 0, 0};
float fOut7[9] =  {0, 0, 0, 0, 0, 0, 1, 0, 0};
float fOut8[9] =  {0, 0, 0, 0, 0, 0, 0, 1, 0};
float fOut9[9] =  {0, 0, 0, 0, 0, 0, 0, 0, 1};
float fOut10[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
float ared[3] 		= {1,0,0};
float agreen[3] 	= {0,1,0};
float ablue[3] 		= {0,0,1};
float ayellow[3] 	= {1,1,0};
float aorange[3] 	= {1, 0.4, 0.25};
float apurple[3] 	= {1,0,1};
float adk_green[3] 	= {0, 0.5, 0.25};
float adk_blue[3] 	= {0, 0, 0.5};
float awhite[3] 	= {1,1,1};
float ablack[3] 	= {0,0,0};

std::vector<float> red (ared, ared + sizeof(ared) / sizeof(int) );
std::vector<float> green (agreen, agreen + sizeof(agreen) / sizeof(int) );
std::vector<float> blue (ablue, ablue + sizeof(ablue) / sizeof(int) );
std::vector<float> yellow (ayellow, ayellow + sizeof(ayellow) / sizeof(int) );
std::vector<float> orange (aorange, aorange + sizeof(aorange) / sizeof(int) );
std::vector<float> purple (apurple, apurple + sizeof(apurple) / sizeof(int) );
std::vector<float> dk_green (adk_green, adk_green + sizeof(adk_green) / sizeof(int) );
std::vector<float> dk_blue (adk_blue, adk_blue + sizeof(adk_blue) / sizeof(int) );
std::vector<float> black (ablack, ablack + sizeof(ablack) / sizeof(int) );
std::vector<float> white (awhite, awhite + sizeof(awhite) / sizeof(int) );
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
float TR1[16] = {-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,};
float TR2[16] = {-1,-1,-1,-1,-1,-1,-1,-1,1,1,1,1,1,1,1,1};
float TR3[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

float fInpHF1[16] = {-1,1,1,1,-1,1,-1,1,1,1,-1,1,-1,1,1,1,};
float fInpHF2[16] = {-1,-1,-1,1,-1,-1,-1,-1,1,1,1,1,1,1,1,-1};
float fInpHF3[16] = {1,1,1,1,1,-11,1,1,1,1,1,1,-1,1,1,1};;

#endif