#include <stdio.h>
#include <math.h>
int main(){
	int x,y; 
	printf("DD:");
	scanf("%d",&x);
	printf("MM:");
	scanf("%d",&y);
	
	int M1=31;
	int M2=31+28;
	int M3=31+28+31;
	int M4=31+28+31+30;
	int M5=31+28+31+30+31;
	int M6=31+28+31+30+31+30;
	int M7=31+28+31+30+31+30+31;
	int M8=31+28+31+30+31+30+31+31;
	int M9=31+28+31+30+31+30+31+31+30;
	int M10=31+28+31+30+31+30+31+31+30+31;
	int M11=31+28+31+30+31+30+31+31+30+31+30;

	if(y>=1 && y<=12){
	
		if(x>=0 && x<=31){
			if(y==1){				
				int SONGAY=x;
				int THUMAY= (SONGAY%7)+1;
				if((SONGAY%7)>=1 && (SONGAY%7)<=6){
					printf(" So ngay: %d",SONGAY);
					printf("Thu: %d",THUMAY);
					}else{
						int SONGAY=x;
						printf(" So ngay: %d",SONGAY);
						printf("CHU NHAT");					
			}}else{if(y==2){
					int SONGAY=x+M1;
					int THUMAY= (SONGAY%7)+1;
					if((SONGAY%7)>=1 && (SONGAY%7)<=6){
					printf(" So ngay: %d",SONGAY);
					printf("Thu: %d",THUMAY);
						}else{
						int SONGAY=x+M1;
						printf(" So ngay: %d",SONGAY);
						printf("CHU NHAT");											
				}}else{if(y==3){
						int SONGAY=x+M2;
						int THUMAY= (SONGAY%7)+1;
						if((SONGAY%7)>=1 && (SONGAY%7)<=6){
							printf(" So ngay: %d",SONGAY);
							printf("Thu: %d",THUMAY);
							}else{
								int SONGAY=x+M2;
								printf(" So ngay: %d",SONGAY);
								printf("CHU NHAT");
					}}else{if(y==4){
							int SONGAY=x+M3;
							int THUMAY= (SONGAY&7)+1;
							if((SONGAY%7)>=1 && (SONGAY%7)<=6){
							printf(" So ngay: %d",SONGAY);
							printf("Thu: %d",THUMAY);
								}else{
									int SONGAY=x+M3;
									printf(" So ngay: %d",SONGAY);
									printf("CHU NHAT");
						}}else{if(y==5){
								int SONGAY=x+M4;
								int THUMAY= (SONGAY&7)+1;
								if((SONGAY%7)>=1 && (SONGAY%7)<=6){
								printf(" So ngay: %d",SONGAY);
								printf("Thu: %d",THUMAY);
									}else{
										int SONGAY=x+M4;
										printf(" So ngay: %d",SONGAY);
										printf("CHU NHAT");
							}}else{if(y==6){
									int SONGAY=x+M5;
									int THUMAY= (SONGAY&7)+1;
									if((SONGAY%7)>=1 && (SONGAY%7)<=6){
										printf(" So ngay: %d",SONGAY);
										printf("Thu: %d",THUMAY);
											}else{
												int SONGAY=x+M5;
												printf(" So ngay: %d",SONGAY);
												printf("CHU NHAT");
								}}else{if(y==7){
										int SONGAY=x+M6;
										int THUMAY= (SONGAY&7)+1;
										if((SONGAY%7)>=1 && (SONGAY%7)<=6){
											printf(" So ngay: %d",SONGAY);
											printf("Thu: %d",THUMAY);
												}else{
													int SONGAY=x+M6;
													printf(" So ngay: %d",SONGAY);
													printf("CHU NHAT");
									}}else{if(y==8){
										int SONGAY=x+M7;
										int THUMAY= (SONGAY&7)+1;
										if((SONGAY%7)>=1 && (SONGAY%7)<=6){
											printf(" So ngay: %d",SONGAY);
											printf("Thu: %d",THUMAY);
													}else{
														int SONGAY=x+M7;
														printf(" So ngay: %d",SONGAY);
														printf("CHU NHAT");
										}}else{if(y==9){
											int SONGAY=x+M8;
											int THUMAY= (SONGAY&7)+1;
											if((SONGAY%7)>=1 && (SONGAY%7)<=6){
												printf(" So ngay: %d",SONGAY);
												printf("Thu: %d",THUMAY);
														}else{
															int SONGAY=x+M8;
															printf(" So ngay: %d",SONGAY);
															printf("CHU NHAT");
											}}else{if(y==10){
												int SONGAY=x+M9;
												int THUMAY= (SONGAY&7)+1;
												if((SONGAY%7)>=1 && (SONGAY%7)<=6){
													printf(" So ngay: %d",SONGAY);
													printf("Thu: %d",THUMAY);
															}else{
																int SONGAY=x+M9;
																printf(" So ngay: %d",SONGAY);
																printf("CHU NHAT");
												}}else{if(y==11){
													int SONGAY=x+M10;
													int THUMAY= (SONGAY&7)+1;
													if((SONGAY%7)>=1 && (SONGAY%7)<=6){
														printf(" So ngay: %d",SONGAY);
														printf("Thu: %d",THUMAY);
																}else{
																	int SONGAY=x+M10;
																	printf(" So ngay: %d",SONGAY);
																	printf("CHU NHAT");
													}}else{
														int SONGAY=x+M11;
														int THUMAY= (SONGAY&7)+1;
														if((SONGAY%7)>=1 && (SONGAY%7)<=6){
															printf(" So ngay: %d",SONGAY);
															printf("Thu: %d",THUMAY);
																	}else{
																		int SONGAY=x+M11;
																		printf(" So ngay: %d",SONGAY);
																		printf("CHU NHAT");
																		}
															}	
													}
												}
											}									
										}
									}
								}
							}
						}
					}
				}
			}else{printf("ERROR");}
		}else{printf("ERROR");}	
	}
	
