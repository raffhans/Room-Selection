#include <iostream>
#include <cmath>
#define PI 3.141
using namespace std;

int main ()
{

	// d_room_width
	double d_room_width = 0;
	double d_room_lenght = 0;
    double d_room_area = 0;

	double d_tbl_width = 0;
	double d_tbl_lenght = 0;

	double d_inner_width_space= 0;
	double d_outer_width_space = 0;

	double d_inner_lenght_space= 0;
	double d_outer_lenght_space = 0;

	double d_inner_width_tbl= 0;
	double d_outer_width_tbl = 0;

	double d_inner_lenght_tbl= 0;
	double d_outer_lenght_tbl = 0;

	double d_inner_area = 1.0;
	double d_outer_area = 0.6;
	
	int i_seater = 0;
	int i_noseat = 0;

	/*
	//2
	double d_area_squarefinn = (0.76*0.76);
	//4
	double d_area_squarelea= (0.9+d_inner_area+d_outer_area)*2;
	//6
	double d_area_roundemma = (1.35+d_inner_area+d_outer_area)*2*PI;
	double d_area_recniklas = (1.5+d_inner_area+d_outer_area)*(0.9+d_inner_area+d_outer_area);
	double d_area_recheinrich = (1.3+d_inner_area+d_outer_area)*(0.8+d_inner_area+d_outer_area);
	//8
	double d_area_recbertha= (2.1+d_inner_area+d_outer_area)*(0.9+d_inner_area+d_outer_area);
	double d_area_roundnadine = (0.75+d_inner_area+d_outer_area)*2*PI;
	//10
	double d_rea_ovalstefan = (3.0+d_inner_area+d_outer_area)*(1.3+d_inner_area+d_outer_area);
	//12
	double d_area_recshade= (3.0+d_inner_area+d_outer_area)*(1.0+d_inner_area+d_outer_area);
	*/
	
    cout << "Please enter the total number of seaters : ";
	cin>> i_seater;
	cout << "Please enter the length of your room (min room size 2.36 m, max 4.6 m) : ";
	cin>> d_room_width;
	cout << "Please enter the width of your room (min room size 2.36m, max 4.6 m ) : ";
	cin >> d_room_lenght;

	//get minimum table width and lenght to get total area of table
	d_tbl_width = d_room_width - d_inner_area - d_outer_area;
	d_tbl_lenght = d_room_lenght - d_inner_area - d_outer_area;

	//get minimum inner width and lenght to get total area of table
	d_inner_width_space = d_room_width - d_outer_area;
	d_inner_lenght_space = d_room_lenght - d_outer_area;

	//get minimum inner width and lenght to get total area of table
	d_outer_width_space = d_room_width;
	d_outer_lenght_space = d_room_lenght;

	cout << "Table size " << d_tbl_width << " m ," << d_tbl_lenght << " m.\n" ;
	cout << "Inner space " << d_inner_width_space << " m ," << d_inner_lenght_space << " m.\n" ;
	cout << "Outer space " << d_outer_width_space << " m ," << d_outer_lenght_space << " m.\n" ;
	cout << "Number of seater " << i_seater << " \n\n" ;
//2
	if((d_tbl_width >= 0.76 && d_tbl_lenght >= 0.76) && i_seater <= 2){

		cout << "Square Finns, 0.76 x 0.76 m\n";
		i_noseat++;

	}
//4
	if((d_tbl_width >= 0.9 && d_tbl_lenght >= 0.9) && (i_seater > 2 && i_seater <= 4)){
		cout << "Square Lea, 0.9 x 0.9 m\n";
		i_noseat++;
	}
//6
	
	if((d_tbl_width >= 1.35 && d_tbl_lenght >= 1.35) && (i_seater > 4 && i_seater <= 6)){
		cout << "Round Emma, 1.35 m diameter\n";
		i_noseat++;
	}

	if(((d_tbl_width >= 1.3 && d_tbl_lenght >= 0.8) || (d_tbl_lenght >= 1.3 && d_tbl_width >= 0.8)) && (i_seater > 4 && i_seater <= 6)){
		cout << "Rectangle Heinrich, 1.3 m x 0.8 m\n";
		i_noseat++;
	}

	if(((d_tbl_width >= 1.5 && d_tbl_lenght >= 0.9) || (d_tbl_lenght >= 1.5 && d_tbl_width >= 0.9)) && (i_seater > 4 && i_seater <= 6)){
		cout << "Rectangle Niklas, 1.5 m x 0.9 m\n";
		i_noseat++;
	}
//8
	if(((d_tbl_width >= 2.1 && d_tbl_lenght >= 1.0) || (d_tbl_lenght >= 2.1 && d_tbl_width >= 1.0) )&& (i_seater > 6 && i_seater <= 8)){
		cout << "Rectangle Bertha, 2.1 m x 1.0 m\n";
		i_noseat++;
	}

	if((d_tbl_width >= 1.5 && d_tbl_lenght >= 1.5) && (i_seater > 6 && i_seater <= 8)){
		cout << "Round Nadine, 1.5 m diameter\n";
		i_noseat++;
	}
//10
	if(((d_tbl_width >= 3.0 && d_tbl_lenght >= 1.3) || (d_tbl_lenght >= 3.0 && d_tbl_lenght >= 1.3))&& (i_seater > 8 && i_seater <= 10)){
		cout << "Oval Stefan,  3 m x 1.3 m\n";
		i_noseat++;
	}
//12
	if(((d_tbl_width >= 3.0 && d_tbl_lenght >= 1) || (d_tbl_width >= 3.0 && d_tbl_lenght >= 1))&& (i_seater > 10 && i_seater <= 12)){
		cout << "Rectangle Shade, 3 m x 1 m\n";
		i_noseat++;
	}

	// if no seat arrangement not meet the specific size, display available seat option
	if(i_noseat == 0){
		cout << "No table meet the room size requirement, display best available option for " << i_seater << "seater.\n" ;
		//2
		if((d_tbl_width >= 0.76 && d_tbl_lenght >= 0.76) && i_seater <= 2){

			cout << "Square Finns\n";
			i_noseat++;

		}
	//4
		if(i_seater > 2 && i_seater <= 4){
			cout << "Square Lea\n";
			i_noseat++;
		}
	//6
		if(i_seater > 4 && i_seater <= 6){
			cout << "Rectangle Niklas\n";
			i_noseat++;
		}
	//8
		if(i_seater > 6 && i_seater <= 8){
			cout << "Rectangle Bertha\n";
			i_noseat++;
		}
	//10
		if(i_seater > 8 && i_seater <= 10){
			cout << "Oval Stefan\n";
			i_noseat++;
		}
	//12
		if(i_seater > 10 ){
			cout << "Rectangle Shade\n";
			i_noseat++;
		}

	}

	

}
