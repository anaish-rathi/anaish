/*                              	
										PROJECT TITLE IS (ATM MACHINE)
1)Anaish kumar      2212478
2)irfan ahmed       2212314
3)M.talha saleem    2212472
4)shahzad naseer     2212499
																			
										
																													*/										
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){				//Program run form here
		char press;									
	int pin,choice,amount,confirm,m,b,am=2000,t,f=500;
		int ch,money,y,total_balance1=100000,total_balance,password,saving,select,new_pin,new_pin2;
		int fund_transfer,account_no,transfer,account_type;
	do{	
	cout<<"\n\n\n\t\t\t\t**********************"<<endl;
	cout<<"\t\t\t\t******** Well Come to Faisal Bank ********"<<endl;
	cout<<"\t\t\t\t************************"<<endl;
	pin:
	system("CLS");
cout<<"\n\n\n\t\tPlease Enter The PIN : ";
cin>>pin;
if(pin==2212499||pin==2212314||pin==2212472||pin==2212478){
system("CLS");
	cout<<"\n\n\n\n\t\Please wait your PIN is verifying";
for(int i=1;i<5;i++){
cout<<".";
		Sleep(1000);
}
cout<<endl;
main:
system("CLS");
cout<<"\n\t***********Main Menu*********";
cout<<"\n\t* 1. Balance Inquiry\t\t\t 2. Fast Cash\t\t*";
cout<<"\n\t* 3. PIN Change\t\t\t\t 4. Cash Withdrawal\t*";
cout<<"\n\t* 5. Utility Bill Payment\t\t 6. Fund Transfer\t*";
cout<<"\n\t***********************";
cout<<"\r"<<endl;
ch=getch();
switch(ch){   																//  1st switch we used
	case '1':
		system("CLS");
		cout<<"\n\t\t\t\t\tPlease Select the Account :"<<endl;
		cout<<"\t\t1)Current Account \t\t\t2)Saving"<<endl;
		cin>>saving;
		if(saving==1){
			system("CLS");
				cout<<"\n\n\t\tYour Current Balance is : "<<total_balance1;
				Sleep(5000);
				goto main;
		}if(saving==2){
				system("CLS");
			cout<<"\n\n\t\tYour Current Balance is : "<<total_balance1;
			Sleep(5000);
				goto main;
		}
		break;
		case '2':
		system("CLS");
			cout<<"\n\n\t\tPlease Select the Amount "<<endl;
			cout<<"\n\t\t1. 500\t\t\t2. 1000"<<endl;
			cout<<"\n\n\t\t3. 2000\t\t\t4. 3000"<<endl;
			cout<<"\n\n\t\t5. 5000\t\t\t6. 10000"<<endl;
			cin>>select;
			switch(select){                   //2nd switch is used
				case 1:
					system("CLS");
						cout<<"\n\n\t\t\t\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
					total_balance=total_balance1-500;
					cout<<"\t\t\t********************"<<endl;
					cout<<"\t\t\t*28/03.2023"<<endl;
					cout<<"\t\t\t*Total Balance is\t =\t\t"<<total_balance1<<endl;
					cout<<"\t\t\t*Current Balance is\t =\t\t"<<total_balance<<endl;
					cout<<"\t\t\t*Your withdraw amount is = \t"<<"500"<<endl;
					cout<<"\t\t\t*Faisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*Thank you to use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
					break;
					case 2:
							system("CLS");
								cout<<"\n\n\t\t\t\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
									cout<<endl;
					total_balance=total_balance1-1000;
					cout<<"\t\t\t********************"<<endl;
					cout<<"\t\t\t*28/03.2023"<<endl;
					cout<<"\t\t\t*Total Balance is\t =\t"<<total_balance1<<endl;
					cout<<"\t\t\t*Current Balance is \t=\t"<<total_balance<<endl;
					cout<<"\t\t\t*Your Transaction is =\t "<<"1000"<<endl;
					cout<<"\t\t\t*Faisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*Thanks use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
					break;
					case 3:
							system("CLS");
								cout<<"\n\n\t\t\t\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
									cout<<endl;
					total_balance=total_balance1-2000;
					cout<<"\t\t\t*********************"<<endl;
					cout<<"\t\t\t*28/03.2023"<<endl;
					cout<<"\t\t\t*Total Balance is\t =\t"<<total_balance1<<endl;
					cout<<"\t\t\t*Current Balance is \t=\t"<<total_balance<<endl;
					cout<<"\t\t\t*Your Transaction is = \t"<<"2000"<<endl;
					cout<<"\t\t\t*Faisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*Thanks use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
					break;
					case 4:
						system("CLS");
							cout<<"\n\n\t\t\t\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
									cout<<endl;
					total_balance=total_balance1-3000;
					cout<<"\t\t\t*********************"<<endl;
					cout<<"\t\t\t*28/03.2023"<<endl;
					cout<<"\t\t\t*Total Balance is\t =\t"<<total_balance1<<endl;
					cout<<"\t\t\t*Current Balance is\t =\t"<<total_balance<<endl;
					cout<<"\t\t\t*Your Transaction is =\t "<<"3000"<<endl;
					cout<<"\t\t\t*Faisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*Thanks use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
					break;
					case 5:
						system("CLS");
							cout<<"\n\n\t\t\t\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
									cout<<endl;
					total_balance=total_balance1-5000;
					cout<<"\t\t\t*********************"<<endl;
					cout<<"\t\t\t*28/03.2023"<<endl;
					cout<<"\t\t\t*Total Balance is\t =\t"<<total_balance1<<endl;
					cout<<"\t\t\t*Current Balance is\t =\t"<<total_balance<<endl;
					cout<<"\t\t\t*Your Transaction is = \t"<<"5000"<<endl;
					cout<<"\t\t\t*Faisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*Thanks use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
					break;
					case 6:
						system("CLS");
							cout<<"\n\n\t\t\t\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
									cout<<endl;
					total_balance=total_balance1-10000;
					cout<<"\t\t\t*********************"<<endl;
					cout<<"\t\t\t*28/03.2023"<<endl;
					cout<<"\t\t\t*Total Balance is\t =\t"<<total_balance1<<endl;
					cout<<"\t\t\t*Current Balance is\t= \t"<<total_balance<<endl;
					cout<<"\t\t\t*Your Transaction is =\t "<<"10000"<<endl;
					cout<<"\t\t\t*Faisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*Thanks use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
					break;
					default:
						cout<<"You Select Wrong";}
			break;                          // 2nd switch is closed now first is contiue
			case '3':
				system("CLS");
				lap:
			cout<<"\t\tPlease Enter Your New PIN :";
			cin>>new_pin;
					system("CLS");
			cout<<"\n\t\tPlease re-enter your PIN to conform :";
			cin>>new_pin2;
			if(new_pin==new_pin2){
				cout<<"Your PIN has been Changed"<<endl;
			}else{
				system("CLS");
			cout<<"\n\t\t Your PIN does not match"<<endl;//pin change
			goto lap;
			}
				break;
				case '4':
					system("CLS");
					cout<<"\n\n\t\t\tPlease Enter amount in multiples of Rs. 500 or Rs.1000 :"<<endl;
					cin>>money;
					system("CLS");
					cout<<"\n\n\n\t\t\t1. confirm\t\t\t2. Cancel"<<endl;
					cin>>confirm;
					if(confirm==1){
							system("CLS");
						cout<<"\n\n\t\t\t1. YES \t\t\t\t\t2. NO"<<endl;
						cin>>y;}
						if(y==1){
								system("CLS");
							cout<<"\n\n\t\t\t\t\tPlease Wait";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
					total_balance=total_balance1-money;
					system("CLS");
					cout<<"\t\t\t*********************"<<endl;
					cout<<"\t\t\t*\t31/03/2023"<<endl;
					cout<<"\t\t\t*\tTotal Balance is\t =\t"<<total_balance1<<endl;
					cout<<"\t\t\t*\tCurrent Balance is \t=\t"<<total_balance<<endl;
					cout<<"\t\t\t*\tYour Transaction is\t = \t"<<money<<endl;
					cout<<"\t\t\t*\tFaisal Bank Islamabad"<<endl;
					cout<<"\t\t\t*\tThanks you use for ATM"<<endl;
					cout<<"\t\t\t*********************"<<endl;
				}else if(y==2){
						cout<<"Please Wait";
							for(int i=1;i<5;i++){
							cout<<".";
							cout<<endl;
							cout<<"Your withdraw is Cancel";
								Sleep(1000);}
								cout<<endl;
								goto main;}
				else{
				cout<<"\n\t\t\tCancel the Withdraw";}
					break;
					case '5':
						system("CLS");
						cout<<"\n\t 1. Gas bill\t\t\t 2. Electricity\t\t"<<endl;
						cin>>m;
						if(m==1){
							cout<<"Enter your Gas bill number:";
							cin>>b;
							system("CLS");
							cout<<"\n\t\t*********************";
							cout<<"\n\t\t*\tBill NUmber is:\t"<<b<<endl;
							cout<<"\t\t*\tDate :\t\t\t31/03/2023"<<endl;
							cout<<"\t\t*\tStatus:\t\t Unpaid"<<endl;
							cout<<"\t\t*\tAmount:\t\t"<<am<<endl;
							cout<<"\t\t*********************"<<endl;
							cout<<endl<<"Press 0 to pay the Bill:\t";
							cin>>t;
							if(t==0){
							
							
							cout<<"Bill has been paid successfully";
						}
							else
						{
							cout<<"You stop the Process"<<endl;
						}
						
						}
					
						else if(m==2){
							cout<<"Enter your Electricity bill number:";
							cin>>b;
							system("CLS");
							cout<<"\n\t\t*********************";
							cout<<"\n\t\t*\tBill NUmber is:\t"<<b<<endl;
							cout<<"\t\t*\tDate :\t\t31/03/2023"<<endl;
							cout<<"\t\t*\tStatus: \t\tUnpaid"<<endl;
							cout<<"\t\t*\tAmount:\t\t"<<f<<endl;
							cout<<"\t\t*********************"<<endl;
							cout<<endl<<"press 0 to pay the Bill:\t";
							cin>>t;
								if(t==0){
							
							
							cout<<"Bill has been paid successfully";
						}
						else
						{
							cout<<"You Stop the Process";
						}
							
						
						}
					
					
						break;
						case '6':
						system("CLS");
							cout<<"\n\t\tSelect the Fund Transfer Option"<<endl;
							
							system("CLS");
							cout<<"\n\n\t\t1) ALFALAH BANK\t\t\t2) ASKARI BANK"<<endl;
							cout<<"\t\t3) FAISAL BANK \t\t\t4) ALLIED BANK"<<endl;
							cout<<"\t\t5) HABIB BANK\t\t\t6) MEZAN BANK"<<endl;
							cin>>fund_transfer;
							if(fund_transfer==1){
								system("CLS");
								cout<<"\n\t\tPlease Enter Account Number : ";
								cin>>account_no;
								system("CLS");
								cout<<"\n\t\tPlease Enter Amount to be Transfer : ";
								cin>>transfer;
								system("CLS");
									cout<<"\n\n\t\tPlease Wait your amount is Transferring :";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
								system("CLS");
								cout<<"\n\n\t\tYou Transfered amount to"<<endl;
								cout<<"\t\t Account No :"<<account_no<<endl;
								cout<<"\t\t Bank :"<<"ALFALAh"<<endl;
								cout<<"\t\tBranch :"<<"H-8 MARKAZ ISLAMABAD"<<endl;
								cout<<"\t\t Amount :"<<transfer<<endl;
								cout<<"\t\tCurrent Balance :"<<total_balance1-transfer<<endl;
							
								cout<<"\t\tThank you!"<<endl;	}	
								else if(fund_transfer==2){
								system("CLS");
								cout<<"\n\t\tPlease Enter Account Number : ";
								cin>>account_no;
								system("CLS");
								cout<<"\n\t\tPlease Enter Amount to be Transfer : ";
								cin>>transfer;
								system("CLS");
									cout<<"\n\n\t\tPlease Wait your amount is Transferring : ";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
									system("CLS");
									cout<<"\n\n\t\tYouTransfered amount to"<<endl;
								cout<<"\t\t Account No :"<<account_no<<endl;
								cout<<"\t\t Bank :"<<"ASKARI"<<endl;
								cout<<"\t\tBranch :"<<"H-8 MARKAZ ISLAMABAD"<<endl;
								cout<<"\t\t Amount :"<<transfer<<endl;
								cout<<"\t\tCurrent Balance :"<<total_balance1-transfer<<endl;
								cout<<"\t\tThank you!"<<endl;
							}
								else if(fund_transfer==3){
								system("CLS");
								cout<<"\n\t\tPlease Enter Account Number : ";
								cin>>account_no;
								system("CLS");
								cout<<"\n\t\tPlease Enter Amount to be Transfer : ";
								cin>>transfer;
								system("CLS");
									cout<<"\n\n\t\tPlease Wait your amount is Transferring : ";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
									system("CLS");
									cout<<"\n\n\t\tYouTransfered amount to"<<endl;
								cout<<"\t\t Account No :"<<account_no<<endl;
								cout<<"\t\t Bank :"<<"FASAL BANK"<<endl;
								cout<<"\t\tBranch :"<<"H-8 MARKAZ ISLAMABAD"<<endl;
								cout<<"\t\t Amount :"<<transfer<<endl;
								cout<<"\t\tCurrent Balance :"<<total_balance1-transfer<<endl;
								cout<<"\t\tThank you!"<<endl;
							}
								else if(fund_transfer==4){
								system("CLS");
								cout<<"\n\t\tPlease Enter Account Number :";
								cin>>account_no;
								system("CLS");
								cout<<"\n\t\tPlease Enter Amount to be Transfer : ";
								cin>>transfer;
								system("CLS");
									cout<<"\n\n\t\tPlease Wait your amount is Transferring : ";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
									system("CLS");
								cout<<"\n\n\t\tYouTransfered amount to"<<endl;
								cout<<"\t\t Account No :"<<account_no<<endl;
								cout<<"\t\t Bank :"<<"ALLIED BANK"<<endl;
								cout<<"\t\tBranch :"<<"H-8 MARKAZ ISLAMABAD"<<endl;
								cout<<"\t\t Amount :"<<transfer<<endl;
								cout<<"\t\tCurrent Balance :"<<total_balance1-transfer<<endl;
							
								cout<<"\t\tThank you!"<<endl;}
							else if(fund_transfer==5){
								system("CLS");
								cout<<"\n\t\tPlease Enter Account Number :";
								cin>>account_no;
								system("CLS");
								cout<<"\n\t\tPlease Enter Amount to be Transfer :";
								cin>>transfer;
								system("CLS");
									cout<<"\n\n\t\tPlease Wait your amount is Transferring";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
									system("CLS");
								cout<<"\n\n\t\tYouTransfered amount to"<<endl;
								cout<<"\t\t Account No :"<<account_no<<endl;
								cout<<"\t\t Bank :"<<"HABIB BANK"<<endl;
								cout<<"\t\tBranch :"<<"H-8 MARKAZ ISLAMABAD"<<endl;
								cout<<"\t\t Amount :"<<transfer<<endl;
								cout<<"\t\tCurrent Balance :"<<total_balance1-transfer<<endl;
							
								cout<<"\t\tThank you!"<<endl;
														}
								else if(fund_transfer==6){
								system("CLS");
								cout<<"\n\t\tPlease Enter Account Number :";
								cin>>account_no;
								system("CLS");
								cout<<"\n\t\tPlease Enter Amount to be Transfer: ";
								cin>>transfer;
								system("CLS");
									cout<<"\n\n\t\tPlease Wait your amount is Transferring";
							for(int i=1;i<5;i++){
							cout<<".";
								Sleep(1000);}
								cout<<endl;
									system("CLS");
								cout<<"\n\n\t\tYouTransfered amount to"<<endl;
								cout<<"\t\t Account No :"<<account_no<<endl;
								cout<<"\t\t Bank :"<<"MEZAN BANK"<<endl;
								cout<<"\t\tBranch :"<<"H-8 MARKAZ ISLAMABAD"<<endl;
								cout<<"\t\t Amount :"<<transfer<<endl;
								cout<<"\t\tCurrent Balance :"<<total_balance1-transfer<<endl;
								cout<<"\t\tThank you!"<<endl;
							}
							break;
							default:
								{
									cout<<"\n\t\tInValid Input";
								}
		
							}	}
							else{
								system("CLS");
			cout<<"\n\n\n\t\t\t\tYour Password is Incorrect : ";
				Sleep(1000);
			goto pin;
			 }
   cout<<"\n\nEnter c to continue and othe button exit the program ";
   cin>>press;
   }while(press=='c'||press=='C');
   
	
}
