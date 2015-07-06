// -*- Mode: Eagle -*-
/*
*
* Wire gauge drill functions.
*
* Copyright 2007 - 2009 by John Johnson Software, LLC.
* All Rights Reserved.
*
*/

int NUM_WIRE_DRILL_SIZES = 80;

real DRILL_SIZES_INCHES[] = {
	0.000, 
	0.228, 0.221, 0.213, 0.209, 0.206,    //  1 -  5
	0.204, 0.201, 0.199, 0.196, 0.194,    //  6 - 10
	0.191, 0.189, 0.185, 0.182, 0.180,    // 11 - 15
	0.177, 0.173, 0.169, 0.166, 0.161,    // 16 - 20
	0.159, 0.157, 0.154, 0.152, 0.149,    // 21 - 25
	0.147, 0.144, 0.141, 0.136, 0.129,    // 26 - 30
	0.120, 0.116, 0.113, 0.111, 0.110,    // 31 - 35
	0.106, 0.104, 0.101, 0.099, 0.098,    // 36 - 40
	0.096, 0.094, 0.089, 0.086, 0.082,    // 41 - 45
	0.081, 0.079, 0.076, 0.073, 0.070,    // 46 - 50
	0.067, 0.064, 0.059, 0.055, 0.052,    // 51 - 55
	0.046, 0.043, 0.042, 0.041, 0.040,    // 56 - 60
	0.039, 0.038, 0.037, 0.036, 0.035,    // 61 - 65
	0.033, 0.032, 0.031, 0.029, 0.028,    // 66 - 70
	0.026, 0.025, 0.024, 0.023, 0.021,    // 71 - 75
	0.020, 0.018, 0.016, 0.015, 0.014     // 76 - 80
};

real DRILL_SIZES_MM[] = {
	0.000, 
	5.791, 5.613, 5.410, 5.309, 5.220,    //  1 -  5 
	5.182, 5.105, 5.055, 4.978, 4.915,    //  6 - 10 
	4.851, 4.801, 4.699, 4.623, 4.572,    // 11 - 15 
	4.496, 4.394, 4.305, 4.216, 4.089,    // 16 - 20 
	4.039, 3.988, 3.912, 3.861, 3.797,    // 21 - 25 
	3.734, 3.658, 3.569, 3.454, 3.264,    // 26 - 30 
	3.048, 2.946, 2.870, 2.819, 2.794,    // 31 - 35 
	2.705, 2.642, 2.578, 2.527, 2.489,    // 36 - 40 
	2.438, 2.375, 2.261, 2.184, 2.083,    // 41 - 45 
	2.057, 1.994, 1.930, 1.854, 1.778,    // 46 - 50 
	1.702, 1.613, 1.511, 1.397, 1.321,    // 51 - 55 
	1.181, 1.092, 1.067, 1.041, 1.016,    // 56 - 60 
	0.991, 0.965, 0.940, 0.914, 0.889,    // 61 - 65 
	0.838, 0.813, 0.787, 0.742, 0.711,    // 66 - 70 
	0.660, 0.635, 0.610, 0.572, 0.533,    // 71 - 75 
	0.508, 0.457, 0.406, 0.368, 0.343     // 76 - 80
};                              

real get_drill_size_inches(int num)
{
	return DRILL_SIZES_INCHES[num];
}

int get_drill_number(real inches)
{
	int i;

	i = NUM_WIRE_DRILL_SIZES;
	while (i > 0 && DRILL_SIZES_INCHES[i] > inches) {
		i--;
	}
	return i;
}