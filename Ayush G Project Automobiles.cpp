/*Automobiles Management
BY- Ayush Gupta*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define show(line) cout << "\n********************************************************************************************************";
#define show2(line) cout << "\n_______________________________________________________________________________________________________";

struct Address // Stucture for Address Input
{
	char street[60];
	char city[20];
	char state[20];
	char country[20];
	int pincode;
};

struct Details // Stucture for Details Input
{
	char model_name[20];
	char registration_number[10];
	char purchase_month[10];
	char insurance_validity[10];
};

struct Customer // Stucture for Customer Info Input
{
	char first_name[30];
	char last_name[30];
	char email[40];
	char email1[40];
	char pwd[40];
	char phone[10];
	Address a;
};

struct Servicing
{
	char tov[30];
	char dop[30];
	char ser[30];
	long int nos;
	long int odr;
	int op7;
};

struct EmployeeRecord
{
	char ename[40];
	char efname[40];
	int age;
	char mno[11];
	long int sal;
	char qualification[100];
	char position[50];
	int empno;
	Address a;
};

Customer c[500];
Address a[500];
Details d[500];
Servicing g[500];
EmployeeRecord er[500];

void feedback();			// Function for Feedback Definition
void service();				// Function for Servicing Definition
void login();				// Function for Login in Software Definition
void registers();			// Function for Register in Software Definition
void vehicle();				// Function to Add Vehicle Definition
void contact();				// Function for Contact Info Definition
void aboutus();				// Fuction for About Us Definition
void productsanddetails();	// Fuction for Products & Details Definition
void dealerlocator();		// Fuction for Dealer locator Definition
void userinfo();			// Fuction for User Info Definition
void employeeinformation(); // Function for Employee Information Holder
void rateus();				// Function for Ratings Holder

int z = 0, j = 0, m = 1; // Global identofiers to run MAIN MENU multiple times

int main()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t   Welcome to Ayush Automobiles\n\t\t\t\t\tProject ~ Automobiles Management\n\t\t\t\t\t\tBy Ayush Gupta";
	_getch();
	while (1) // Loop to return to the MAIN MENU after Each Operation
	{

		int op, op1, op2, op3, op4;
		system("cls");

		show(line)
				cout
			<< "\n\t\t\t Ayush Automobiles Pvt. Ltd.\n\t\t\t   'Add Speed to your Life'";
		show(line)
				cout
			<< "\n\t\t\tMAIN MENU"; // MAIN MENU
		show(line)
				cout
			<< "\n\t\t\t1-My Profile\n\t\t\t2-Service\n\t\t\t3-Feedback\n\t\t\t4-Products & Details\n\t\t\t5-Contact Us\n\t\t\t6-Dealer Locator\n\t\t\t7-Employees Record (Office Use Only)\n\t\t\t8-About Us\n\t\t\t9-Rate Us\n\t\t\t10-Exit";
		show(line)
				cout
			<< "\nEnter the option:";
		cin >> op;	// Option entry for Main Menu
		switch (op) // Switch for Main Menu Options
		{
		case 1: // Main Menu Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tMy Profile";
			show(line)
					cout
				<< "\n\t\t\t1-Log In\n\t\t\t2-Register\n\t\t\t3-Vehicle Info\n\t\t\t4-User Info";
			show(line)
					cout
				<< "\nEnter the option:";
			cin >> op1;	 // Option Entry for the Profile of Main Menu
			switch (op1) // Switch for Profile Options
			{
			case 1: // My Profile Option
			{
				login(); // Fuction Call for login
			}
			break;
			case 2: // My Profile Option
			{
				registers(); // Fuction Call for Register
			}
			break;
			case 3: // My Profile Option
			{
				vehicle(); // Fuction Call for vehicle
			}
			break;
			case 4:
			{
				userinfo(); // Fuction Call for User Info
			}
			break;
			default: // My Profile Option
			{
				cout << "\nInvalid Input!";
				exit;
			}
			break;
			}
		}
		break;
		case 2: // Main Menu Option
		{
			system("cls");
			service(); // Fuction Call for Service
		}
		break;
		case 3: // Main Menu Option
		{
			system("cls");
			feedback(); // Fuction Call for feedback
		}
		break;
		case 4: // Main Menu Option
		{
			system("cls");
			productsanddetails(); // Function Call for Products and Details
		}
		break;
		case 5: // Main Menu Option
		{
			system("cls");
			contact(); // Function Call for contact info
		}
		break;
		case 6: // Main Menu Option
		{
			system("cls");
			dealerlocator(); // Function Call for Dealer Locator
		}
		break;
		case 7:
		{
			system("cls");
			employeeinformation(); // Function Call for Information of an Employee
		}
		break;
		case 8: // Main Menu Option
		{
			system("cls");
			aboutus();
		}
		break;
		case 9:
		{
			system("cls");
			rateus();
		}
		break;
		case 10: // Main Menu Option
		{
			exit(0);
		}
		break;
		default: // Main Menu Option
		{
			cout << "\nINVALID OPTION!";
			exit;
		}
		break;
		}
	}

	_getch();
	return 0;
}

void login() // Fuction Definition for Login Operation
{

	system("cls");
	show(line)
			cout
		<< "\n\t\t\tLogin";
	show(line)
			cout
		<< "\nEnter your Email Id   : ";
	cin.get();
	cin.clear();
	cin.getline(c[z].email, 40);
	cout << "\nEnter your Password   : ";
	cin.get();
	cin.clear();
	cin.getline(c[z].pwd, 40);
	cout << "\nLogin Successful!";
	z++; // It is a Global Variable, incremented after each operation.
	show(line)
			cout
		<< "\n PRESS ANY KEY !!!";
	_getch();
}

void registers() // Fuction Definition for Registration Operation
{
	system("cls");
	show(line)
			cout
		<< "\n\t\t\tRegistration";
	show(line)
			cout
		<< "\nFirst Name              : ";
	cin.get();
	cin.clear();
	cin.getline(c[z].first_name, 30);
	cout << "\nLast Name               : ";
	cin.getline(c[z].last_name, 30);
	cout << "\nE-Mail                  : ";
	cin.getline(c[z].email, 40);
	cout << "\nPassword                : ";
	cin.get();
	cin.clear();
	cin.getline(c[z].pwd, 40);
	cout << "\nConfirm Password        : ";
	cin.get();
	cin.clear();
	cin.getline(c[z].pwd, 40);
	cout << "\nMobile Number           : ";
	cin >> c[z].phone;
	cout << "\nCity                    : ";
	cin.get();
	cin.clear();
	cin.getline(c[z].a.city, 40);
	cout << "\nState                   : ";
	cin.getline(c[z].a.state, 40);
	cout << "\nCountry                 : ";
	cin.getline(c[z].a.country, 40);
	cout << "\nPincode                 : ";
	cin >> c[z].a.pincode;
	cout << "\nRegitration Successful!";
	z++; // It is a Global Variable, incremented after each operation.
	show(line)
			cout
		<< "\n PRESS ANY KEY !!!";
	_getch();
}

void userinfo() // Fuction Definition for User Info Operation
{

	for (int i = 0; i < z; i++)
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tUser Info";
		show(line)
				cout
			<< "\n\nFIRST NAME            : " << c[i].first_name;
		cout << "\n\nLAST NAME             : " << c[i].last_name;
		cout << "\n\nE-MAIL ID             : " << c[i].email;
		cout << "\n\nMOBILE NO.            : " << c[i].phone;
		cout << "\n\nCITY                  : " << c[i].a.city;
		cout << "\n\nSTATE                 : " << c[i].a.state;
		cout << "\n\nCOUNTRY               : " << c[i].a.country;
		cout << "\n\nPINCODE               : " << c[i].a.pincode;
		i++;
		show(line)
				cout
			<< "\nPRESS ANY KEY !!!";
	}
	_getch();
}

void vehicle() // Fuction Definition for Vehicle Info Operation
{
	char press;
	for (z = 1; z <= 500; z++)
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tVehicle Info";
		show(line)
				cout
			<< "\nModel Name                          : ";
		cin.get();
		cin.clear();
		cin.getline(d[j].model_name, 20);
		cout << "\nRegistratiom Number                 : ";
		cin.get();
		cin.clear();
		cin.getline(d[j].registration_number, 10);
		cout << "\nPurchase Month                      : ";
		cin.get();
		cin.clear();
		cin.getline(d[j].purchase_month, 10);
		cout << "\nInsurance Validity                  : ";
		cin.get();
		cin.clear();
		cin.getline(d[j].insurance_validity, 10);
		cout << "\nVehicle Info Added!";
		cout << "\nDo you want to add more vehicles (y/n):";
		cin >> press;
		if (press == 'Y' || press == 'y')
			continue;
		else
			break;
	}
	j++; // It is a Global Variable, incremented after each operation.
	show(line)
			cout
		<< "\n PRESS ANY KEY !!!";
	_getch();
}

void service() // Fuction Definition for Servicing Operation
{

	system("cls");
	show(line)
			cout
		<< "\n\t\t\tService";
	show(line)
			cout
		<< "\n\t\t\t1-Book Your Servicing\n\t\t\t2-Booked Servicing";
	show(line)
			cout
		<< "\nEnter the option:";
	cin >> g[j].op7;
	switch (g[j].op7)
	{
	case 1: // Service Optiom
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tBook Your Service";
		show(line)
				cout
			<< "\nEnter the Type of Vehicle (Bike, Scooty or Car)      : ";
		cin.clear();
		cin.get();
		cin.getline(g[j].tov, 30);
		cout << "\nEnter the Date of Purchase (DD/MM/YYYY)              : ";
		cin.clear();
		cin.get();
		cin.getline(g[j].dop, 30);
		cout << "\nEnter the no. of servicing of the vehicle            : ";
		cin >> g[j].nos;
		cout << "\nEnter the Odometer Reading of the Vehicle            : ";
		cin >> g[j].odr;
		cout << "\nEnter Servicing Date to be Booked (DD/MM/YYYY)       : ";
		cin.clear();
		cin.get();
		cin.getline(g[j].ser, 30);
		cout << "\nServicing Booked on " << g[j].ser;
		j++;
		show(line)
				cout
			<< "\n PRESS ANY KEY !!!";
		cin.get();
		_getch();
	}
	break;
	case 2: // Service Optiom
	{

		for (int i = 0; i < j; i++)
		{
			system("cls");

			show(line)
					cout
				<< "\n\t\t\tBooked Servicing";
			show(line)
					cout
				<< "\n\nYou Have One Booked Servicing Pending!";
			cout << "\n\nMODEL NAME               : " << g[i].tov;
			cout << "\n\nDATE OF PURCHASE         : " << g[i].dop;
			cout << "\n\nSERVICING NO.            : " << g[i].nos;
			cout << "\n\nODOMETER READING         : " << g[i].odr;
			cout << "\n\nBOOKED FOR THE DATE      : " << g[i].ser;
			i++;
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
		}
		_getch();
	}
	break;
	default: // Service Optiom
	{
		cout << "\nInvalid Input!";
		exit;
	}
	break;
	}
}

void feedback() // Fuction Definition for Feedback Operation
{
	char fb[500];
	system("cls");
	show(line)
			cout
		<< "\n\t\t\tFeedback";
	show(line)
			cout
		<< "\nE-Mail        :";
	cin.get();
	cin.clear();
	cin.getline(c[z].email, 40);
	cout << "\nFeedback      :";
	cin.get();
	cin.clear();
	cin.getline(fb, 500);
	cout << "\nFeedback Submitted!";
	z++; // It is a Global Variable, incremented after each operation.
	show(line)
			cout
		<< "\n PRESS ANY KEY !!!";
	_getch();
}

void contact() // Fuction Definition for Contact Info Operation
{
	system("cls");
	show(line)
			cout
		<< "\n\t\t\tContact Us";
	show(line)
			cout
		<< "\n\nCUSTOMER CARE";
	cout << "\n\nTEL: 2200114";
	cout << "\nPhone: 9546281267";
	cout << "\nEmail: ayushauto90@gmail.com";
	cout << "\nWebsite: www.AyushAutomobilesIndia.com/Home";
	show(line)
			cout
		<< "\nPRESS ANY KEY !!!";
	_getch();
}

void accessories() // Fuction Definition for Accessories Operation
{
	system("cls");
	show(line)
			cout
		<< "\n\t\t\tAccessories";
	show(line)
}

void aboutus() // Fuction Definition for About Us Operation
{
	int op5;
	show(line)
			cout
		<< "\n\t\t\tAbout Us";
	show(line)
			cout
		<< "\n\t\t1- About the Company \n\t\t2- Safety India \n\t\t3- History \n\t\t4- Racing";
	show(line)
			cout
		<< "\nEnter the option:";
	cin >> op5; // Option Entry for About Us

	switch (op5) // Switch for options of About us
	{
	case 1: // About Us Option
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\t\t\tCompany Info";
		show(line)
				cout
			<< "\nAyush Automobiles India is an undisputed leader in the Indian automobile industry. Started its journey in\nFebruary 1981 as Ayush Industry Limited, the company created history in the Indian automobile market with its hugely popular \nfour-wheeler and two-wheeler models. The company became the first Indian automobile company to manufacture one million vehicles in 1994.\nThe company became Ayush Automobiles India Limited on September 17, 2007.\n\nAyush's average revenue for the year ending 2010-11 is US$7.13 billion. Ayush sold 83,306 units of vehicles in September 2009, \ncomparing to 71,000 units in the same month in the previous year (with a growth rate of 17.3%). It also exported 11,712 units during\nSeptember 2009, comparing to 6,318 units in the same month in the previous year (with a growth rate of 85.4%).";
		show(line)
				cout
			<< "\n\n\nPRESS ANY KEY !!!";
		_getch();
	}
	break;
	case 2: // About Us Option
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\t\t\tSafety India";
		show(line)
				cout
			<< "\nEnhancing safety on the roads is one of Ayush's top priorities. We firmly believe that the realization of a \ncomfortable and an enjoyable mobile society depends on the mutual trust that automobile manufacturers like us, share with the \nconsumers and society. At Ayush, we use a three prong approach, based on preventing accidents from happening in the first place,\nminimizing injury in the unlikely event of an accident and our Driving Safety Promotion operations. Ayush's safety philosophy emphasizes \nthe development of appropriate technologies for its products, so as to ultimately achieve maximum riding comfort for its customers. \nAyush was the first manufacturer in Japan to develop and apply the anti-lock brake system. Educating the world, Ayush is actively \ninvolved with driving education across the world for promoting traffic safety.";
		show(line)
				cout
			<< "\n\n\nPRESS ANY KEY !!!";
		_getch();
	}
	break;
	case 3:
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\t\t\tHistory";
		show(line)
				cout
			<< "\nThe history of the Ayush brand is nothing more than the history of our challenges and achievements in creating values,\n invariably ahead of our time. It is also the history of the dreams of each of our associates that have come true and have been shared by people around the world.";
		show(line)
				cout
			<< "\n\n\nPRESS ANY KEY !!!";
		_getch();
	}
	break;
	case 4:
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\t\t\tRacing";
		show(line)
				cout
			<< "\nAyush has always played an important role in motor sports, believing it to be the springboard for technological advancement.\nIt has also been an aggressive force in the endurance, motocross and trial races held around the world. We, at Ayush,\nare not allowing this momentum to let up, as we pursue even greater achievements. Ayush has always loved racing,\never since he took his company into motorcycle competition, sometime in the 1950s. Ayush's engineers have tested \nthemselves on the international stage, proving their technology to be the best in the world. These technologies are \ntested in the extreme conditions of motorcycle racing, to adapt them for use in vehicles that ply on roads today. \nIn the past, Ayush has powered some of the all time great racers, including Redman, Hailwood, Spencer, Gardner, \nCapirossi and Doohan, to 39 riders' titles. Even today, some of the greatest motorcycle racers, like Marc Marquez & Dani Pedrosa\n ride on Ayush bikes, at the races. Ayush enters the Isle of Man TT Races in 1959 Ayush is an active participant in many off-road races Michael Doohan riding Repsol Honda's NSR 500";
		show(line)
				cout
			<< "\n\n\nPRESS ANY KEY !!!";
		_getch();
	}
	default: // About Us Option
	{
		cout << "\nInvalid Option!";
		exit;
	}
	break;
	}
}

void productsanddetails() // Fuction Definition for Products & Details Operation
{
	int op2, op3, op4, op6;
	show(line)
			cout
		<< "\n\t\t\tProducts & Details";
	show(line)
			cout
		<< "\n\t\t\t1-Bikes\n\t\t\t2-Scooty\n\t\t\t3-Cars";
	show(line)
			cout
		<< "\nEnter the option:";
	cin >> op2;	 // Option entry for Products & Details of Main Menu
	switch (op2) // Switch for Options of Products & Details
	{
	case 1: // Products & Details Option
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tBikes";
		show(line)
				cout
			<< "\n\t\t\t1-Pulsar\n\t\t\t2-Splender\n\t\t\t3-Apache\n\t\t\t4-Honda Shine\n\t\t\t5-KTM\n\t\t\t6-Duke\n\t\t\t7-Platina\n\t\t\t8-Yamaha\n\t\t\t9-BMW Piraele 2D\n\t\t\t10-Bullet";
		show(line)
				cout
			<< "\nEnter the Option:";
		cin >> op3;	 // Option entry for Bikes of Products & Details of Main Menu
		switch (op3) // Switch for Options of Bikes
		{
		case 1: // Bikes Option
		{
			cout << "\nPulsar\n\nThe Bajaj Pulsar is a motorcycle brand owned by Bajaj Auto in India.\n The two wheeler was developed by the product engineering division of Bajaj Auto in association with \nTokyo R&D, and later with motorcycle designer Glynn Kerr. Currently there are six variants available, with engine capacities\n of 135 cc, 150 cc, 180 cc, 200 cc, 220 cc and 400 cc (Renamed Dominar before release).";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
		}
		break;
		case 2: // Bikes Option
		{
			cout << "\nSplendor\n\nThe Hero Honda Splendor is a motorcycle manufactured in India by Hero\n Honda. It has an electronic ignition and a tubular double cradle type frame with a 97.2 cc (5.93 cu in)\n engine. The engine is based on the Honda cub C100EX with a similar bore and stroke of 50 mm � 49.5 mm (1.97 in � 1.95 in). \nAs of 2009, Splendor models were selling at a rate of one million per year.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
		}
		break;
		case 3: // Bikes Option
		{
			cout << "\nApache\n\nThe TVS Apache is a brand of motorcycle made by TVS Motors since 2006.\n In 2008 the company claimed that more than 2.5 million Apaches were on the road.Currently the company sells\n five variants of the TVS Apache. ... The abbreviation 'RTR' in the names of the motorcycles refer to 'Racing Throttle Response'.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
		}
		break;
		case 4: // Bikes Option
		{
			cout << "\nHonda Shine\n\nThe Honda Shine is a motorcycle developed by Honda Motorcycle & Scooter \nIndia (HMSI). It was introduced in India in 2006. It is a 125 cc motorcycle. Honda claimed that the Shine \naccelerated from 0 to 60 km/h (0 to 37 mph) in 5.30 seconds and had a top speed of 95-100 km/h (59-62 mph).";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
		}
		break;
		case 5: // Bikes Option
		{
			cout << "\nKTM\n\nKTM AG (the former KTM Sportmotorcycle AG[3][4]) is an Austrian motorcycle and \nsports car manufacturer owned by KTM Industries AG and Indian manufacturer Bajaj Auto. It was formed in 1992 but \ntraces its foundation to as early as 1934. Today, KTM AG is the parent company of the KTM Group.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 6: // Bikes Option
		{
			cout << "\nDuke\n\nKTM 200 Duke price starts at Rs.1.52 lakh (Ex-Showroom, Delhi) and the top end variant\n KTM 200 Duke ABS is priced at Rs. 1.60 lakh (Ex-Showroom, Delhi). Powering the KTM 200 Duke is a 200c single-cylinder engine.\n The liquid-cooled motor delivers 25PS at 10,000rpm and 19.2Nm of peak torque arrives at 8,000rpm. ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 7: // Bikes Option
		{
			cout << "\nPlatina\n\n Bajaj Platina Comfortec Price starts from Rs. 47,405 and Hero Splendor Plus\n Price starts from Rs. 49,060. The claimed mileage for the Bajaj Platina Comfortec is 104 kmpl and for the Hero Splendor Plus\n is 80.6 kmpl. Bajaj Platina Comfortec is available in 7 different colours while Hero Splendor Plus \ncomes with 10 colours. In technical specifications, Bajaj Platina\n Comfortec is powered by 102 cc engine where as Hero Splendor Plus is powered by 97.2 cc engine.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 8: // Bikes Option
		{
			cout << "\nYamaha\n\nYamaha bikes price starts at Rs. 48,221 for the cheapest bike Saluto RX and goes up to\n Rs. 18.16 lakh for the top model Yamaha YZF R1. Yamaha offers 19 new bike models in India. YZF R15 V3 (Rs. 1.27 lakh), FZ S FI (V 2.0)\n (Rs. 84,042) and FZ FI (Rs. 82,040) are among the popular bikes from Yamaha. In the year 2019/2020, Yamaha is \ngoing to launch 3 new models in India. Select a Yamaha bike \nto know the latest offers in your city, prices, variants, specifications, pictures, mileage and reviews.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 9: // Bikes Option
		{
			cout << "\nBMW Piraele 2D\n\nBMW bikes price starts at Rs. 2.99 lakh for the cheapest bike G 310 R and goes\n up to Rs. 28.30 lakh for the top model BMW K 1600 GTL. BMW offers 17 new bike models in India. G 310 R (Rs. 2.99 lakh), G 310 GS (Rs. 3.49 lakh)\n and S 1000 RR (Rs. 18.05 lakh) are among the popular bikes from BMW. In the year 2019/2020, BMW is\n going to launch 2 new models in India. Select a BMW bike to know the \nlatest offers in your city, prices, variants, specifications, pictures, mileage and reviews.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 10: // Bikes Option
		{
			cout << "\nBullet\n\nThe Royal Enfield Bullet INDIA was originally a British\n overhead valve single cylinder four-stroke motorcycle made by Royal Enfield in Redditch, Worcestershire, now produced by Royal Enfield (India) at\n Chennai, Tamil Nadu, a company originally founded by Madras Motors to build Royal Enfield motorcycles\n under licence in India. The Royal Enfield Bullet has the longest\n unchanged production run of any motorcycle having remained continuously in production since 1948.\n The Bullet marque is even older, and has passed 75 years of continuous production. ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Bikes Option
		{
			cout << "\nInvalid Input!";
			exit;
		}
		break;
		}
	}
	break;
	case 2: // Products & Details Option
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tScooty";
		show(line)
				cout
			<< "\n\t\t\t1-Activa 3G\n\t\t\t2-Activa 4G\n\t\t\t3-Activa 5G\n\t\t\t4-Activa 125\n\t\t\t5-Aviator\n\t\t\t6-Majestro\n\t\t\t7-Jupiter";
		show(line)
				cout
			<< "\nEnter the Option:";
		cin >> op4;	 // Option entry for Scooty of Products & Details of Main Menu
		switch (op4) // Switch for Options of Scooty
		{
		case 1: // Scooty Option
		{
			cout << "\nActiva 3G\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Scooty Option
		{
			cout << "\nActiva 4G\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Scooty Option
		{
			cout << "\nActiva 5G\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Scooty Option
		{
			cout << "\nActiva 125\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Scooty Option
		{
			cout << "\nAviator\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 6: // Scooty Option
		{
			cout << "\nMaestro\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 7: // Scooty Option
		{
			cout << "\nJupitor\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Scooty Option
		{
			cout << "\nInvalid Input!";
			exit;
		}
		break;
		}
	}
	break;
	case 3: // Products & Details Option
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tCars";
		show(line)
				cout
			<< "\n\t\t\t1-Honda City\n\t\t\t2-Fortuner\n\t\t\t3-Bolero\n\t\t\t4-Qualis\n\t\t\t5-Nano\n\t\t\t6-Scorpio\n\t\t\t7-Lambhorghini\n\t\t\t8-Ferrari\n\t\t\t9-Innova\n\t\t\t10-Audi";
		show(line)
				cout
			<< "\nEnter the Option:";
		cin >> op6;	 // Option entry for Cars of Products & Details of Main Menu
		switch (op6) // Switch for Options of Cars
		{
		case 1: // Cars Option
		{
			cout << "\nHonda City\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Cars Option
		{
			cout << "\nFortuner\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Cars Option
		{
			cout << "\nBolero\n\nMahindra's popular rugged SUV, Bolero combines powerful performance, butch looks and rugged attitude. \n The UV has received a new engine in the line-up, mHawkD70 claimed to deliver 13% more power and 5% more mileage as compared to the standard Bolero.\n Dubbed Bolero Power+, the new variant is offered across 3 trim levels-SLE, SLX and ZLX. In terms of styling,\n it is similar to the regular model, but measures around 3,995mm as opposed to other variants in Bolero range that are above 4 meters in length.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Cars Option
		{
			cout << "\nQualis\n\n ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Cars Option
		{
			cout << "\nNano\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 6: // Cars Option
		{
			cout << "\nScorpio\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 7: // Cars Option
		{
			cout << "\nLamborghini\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 8: // Cars Option
		{
			cout << "\nFerrari\n\n";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 9: // Cars Option
		{
			cout << "\nInnova\n\nThree variants of the Innova come with a petrol engine option which is powered by a 1,998 cc, \n1TR-FE, petrol, inline four-cylinder petrol engine with electronic fuel injection. The diesel variants of the Innova \nare powered by 2,494 cc, 2KD-FTV diesel with intercooler and turbocharger four-cylinder engine.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 10: // Cars Option
		{
			cout << "\nAudi\n\nAudi is a German automobile manufacturer that designs, engineers, produces, markets and distributes luxury vehicles. \nAudi is a member of the Volkswagen Group and has its roots at Ingolstadt, Bavaria, Germany. \nAudi-branded vehicles are produced in nine production facilities worldwide.";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Cars Option
		{
			cout << "\nInvalid Option!";
			exit;
		}
		break;
		}
	}
	break;
	default: // Products & Details Option
	{
		cout << "\nInvalid Input!";
		exit;
	}
	break;
	}
}
void dealerlocator() // Fuction Definition Dealer Locator Operation
{
	int sta, cty;

	show(line)
			cout
		<< "\n\t\t\tDealer Locator";
	show(line)
			cout
		<< "\n\t\t1-Uttar Pradesh\n\t\t2-Maharastra\n\t\t3-Madhya Pradesh\n\t\t4-Bihar\n\t\t5-Andhra Pradesh";
	show(line)
			cout
		<< "\nEnter the option to choose the State: ";
	cin >> sta; // Option Entry for Dealer Locator of Main Menu

	switch (sta) // Switch for Options of Dealer Locator
	{
	case 1: // Dealer Locator Option
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tUttar Pradesh";
		show(line)
				cout
			<< "\n\t\t1-Gorakhpur\n\t\t2-Lucknow\n\t\t3-Basti\n\t\t4-Kanpur\n\t\t5-Noida";
		show(line)
				cout
			<< "\nEnter the option to choose the City:";
		cin >> cty; // Option Entry for Uttar Pradesh of Dealer Locator of Main Menu

		switch (cty) // Switch for Options of Uttar Pradesh of Dealer Locator
		{
		case 1: // Uttar Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tGorakhpur";
			show(line)
					cout
				<< "\nBajrang Auto Agency \n Address: H.N 633A Jatepur South,Kalimandir,Purdilpur,Gorakhpur(UP) 273001\nOwner: Mr. Amit Rungta \n Contact: 9415314410, 9415314410\n E-Mail: hello_bajrang@rediffmail.com";
			show2(line)
					cout
				<< "\n\nHIND Auto Agency \nAddress: Nh Road, Indiranagar Dhala, Near Paidleyganj, Beside Rachit Hospital 273001\n Owner: Shadab \n Contact: 8853098060, 8853098060 \nE-Mail- eliteenergieshonda@gmail.com ";
			show2(line)
					cout
				<< "\n\nSUNNY Auto Agency \n Address: HORA TOWER,DEORIA ROAD,MOHDDIPUR,GORAKHPUR 273001\n Owner: AJAY SINGH \nContact: 8601878645, 8601878646 \nE-Mail: sunnyhonda2003@gmail.com ";
			show2(line)
					cout
				<< "\n\nTrimurti Auto Agency \nAddress: Medical College Road, Basharatpur, Near Petrol Pump 273004\nOwner: Mr. Dheeraj Chowdhary \nContact: 0551-2500592, 7607999053, 7607999054, 7388898285 \nE-Mail: gorakhpur.trimurtihonda@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Uttar Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tLucknow";
			show(line)
					cout
				<< "\nAditya Sky Auto Agency\nAddress: CP-8 , Vijyant Khand,Near Chinhat Tiraha, Gomti Nagar, Lucknow 226010\nOwner: Ankit Tripathi \nContact: 8382806329 \nE-Mail:serviceadityaskyhonda@gmail.com ";
			show2(line)
					cout
				<< "\n\nBeeaar Auto Agency\n Address:10, Ashok Marg 226001Mr.\nOwner: V. K. Agarwal \nContact:(0522) 2286928, 9839013790 \nE-Mail:hondasales@beeaar.com";
			show2(line)
					cout
				<< "\n\nEnvision Auto Agency\nAddress: 54 Navikot Nandana, Bakshi ka Talab, Lucknow 226001\nOwner: Shobhit Vaish \nContact: 9794952520 \nE-Mail: vaish.shobhit@gmail.com ";
			show2(line)
					cout
				<< "\n\nHari Om Auto Agency\nAddress: Sultanpur Road,Gosainganj,Lucknow 226501\nOwner: Mr.Pradeep Kumar \nContact; 9918127723 \nE-Mail: hariomhondagsg@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Uttar Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tBasti";
			show(line)
					cout
				<< "\n\nAbhishek Auto Agency\nAddress: Neerprakash Hotel 272002\nOwner: Mr. Abhishek \nContact: (05542) 287275, 9451111330 \nE-Mail: abhishekmotor@yahoo.com";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Uttar Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tKanpur";
			show(line)
					cout
				<< "\n\nAxis Auto Agency\nAddress: Plot No.7 Block W-2, Barra ye Pass chauraha, Kanpur 208027\nOwner: Mr Arvind Jain \nContact: 9956120009, 9935199068, 7905577093 \nE-Mail: axishondaworkhopbarra@hotmail.com ";
			show2(line)
					cout
				<< "\n\nCrossroad Auto Agency\nAddress: Crossroad Auto Pvt. Ltd., 516, Gooba Garden Crossing, G T Road, Kalyanpur, Kanpur (UP) 208016\nOwner: Preety Verma \nContact: 7521801522, 7521801522 \nE-Mail: service.honda@crossroadauto.org ";
			show2(line)
					cout
				<< "\n\nDua Auto Sales\nAddress: 103/2A-1, Mehboob Complex, Thana Bajaria, Bakarmandi \nOwner: Mr.Rajendra Kumar Dua \nContact: 0512-2554547, 9415477519 \nE-Mail: duaautosales@rediffmail.com ";
			show2(line)
					cout
				<< "\n\nGlobal Auto Agency\nAddress: 148 D, Mandir Road,Panki,Dist-Kanpur 208020\nOwner: Rocky Bhatia \nContact: 7317075555 \nE-Mail:globalhonda23@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Uttar Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tNoida";
			show(line)
					cout
				<< "\nParkash Auto Agency\nAddress: A-38, Sector-8 201301\nOwner; Aurnabh Singh \nContact: 0120-4730007, 9868461218 \nE-Mail: parkashhonda@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Uttar Pradesh Option
		{
			cout << "\nINVAILD INPUT";
			exit;
		}
		break;
		}
	}
	break;
	case 2: // Dealer Locator Option
	{
		int cty1;
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tMaharastra";
		show(line)
				cout
			<< "\n\t\t1-Mumbai\n\t\t2-Pune\n\t\t3-Ahmednagar\n\t\t4-Nashik\n\t\t5-Sillod";
		show(line)
				cout
			<< "\nEnter the option to choose the City:";
		cin >> cty1; // Option Entry for Maharastra of Dealer Locator of Main Menu

		switch (cty1) // Switch for Options of Maharastra of Dealer Locator
		{
		case 1: // Maharastra Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tMumbai";
			show(line)
					cout
				<< "\n21 Auto Agency\nAddress: Unit No.4, Virat Engneering Compound 400072\nOwner: Mr. Datta \nContact: 022-28474600, 9545212121, 9821438325 \nE-Mail: twenty1honda@ymail.com ";
			show2(line)
					cout
				<< "\n\nBhutta Auto Agencies\nAddress: 36, Balaram street, Grant road NA\nOwner: Mr.Tikku Bhutta, Mr.Anuj \nContact: 23083062, 23098456, 9833129403, 9322503725 \nE-Mail: anujbhutta@yahoo.com, anujbhutta@hotmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Maharastra Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tMumbai";
			show(line)
					cout
				<< "\nDua Auto Sales\nAddress: 103/2A-1, Mehboob Complex, Thana Bajaria, Bakarmandi,Mumbai \nOwner: Mr.Rajendra Kumar Dua \nContact: 0512-2554547, 9415477519 \nE-Mail: duaautosales@rediffmail.com ";
			show2(line)
					cout
				<< "\n\nGlobal Auto Agency\nAddress: 148 D, Mandir Road,Panki,Dist-Mumbai 208020\nOwner: Rocky Bhatia \nContact: 7317075555 \nE-Mail:globalhonda23@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Maharastra Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tAhmednagar";
			show(line)
					cout
				<< "\n\nAbhishek Auto Agency\nAddress: Neerprakash Hotel 272002, Ahmednagar, Maharastra\nOwner: Mr. Abhishek \nContact: (05542) 287275, 9451111330 \nE-Mail: abhishekmotor@yahoo.com";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Maharastra Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tNashik";
			show(line)
					cout
				<< "\n\nAxis Auto Agency\nAddress: Plot No.7 Block W-2, Barra ye Pass chauraha, Nashik 208027\nOwner: Mr Arvind Jain \nContact: 9956120009, 9935199068, 7905577093 \nE-Mail: axishondaworkhopbarra@hotmail.com ";
			show2(line)
					cout
				<< "\n\nCrossroad Auto Agency\nAddress: Crossroad Auto Pvt. Ltd., 516, Gooba Garden Crossing, G T Road, Kalyanpur, Nashik 208016\nOwner: Preety Verma \nContact: 7521801522, 7521801522 \nE-Mail: service.honda@crossroadauto.org ";
			show2(line)
					cout
				<< "\n\nDua Auto Sales\nAddress: 103/2A-1, Mehboob Complex, Thana Bajaria, Bakarmandi, Nashik \nOwner: Mr.Rajendra Kumar Dua \nContact: 0512-2554547, 9415477519 \nE-Mail: duaautosales@rediffmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Maharastra Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tSillod";
			show(line)
		}
		break;
		default: // Maharastra Option
		{
			cout << "\nINVALID INPUT";
			exit;
		}
		break;
		}
	}
	break;
	case 3: // Dealer Locator Option
	{
		int cty2;
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tMadhya Pradesh";
		show(line)
				cout
			<< "\n\t\t1-Rajpur\n\t\t2-Satna\n\t\t3-Ashok Nagar\n\t\t4-Betul\n\t\t5-Gwalior";
		show(line)
				cout
			<< "\nEnter the option to choose the City:";
		cin >> cty2; // Option Entry for Madhya Pradesh of Dealer Locator of Main Menu

		switch (cty2) // Switch for Options of Madhya Pradesh of Dealer Locator
		{
		case 1: // Madhya Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tRajpur";
			show(line)
					cout
				<< "\nParmar Auto Agency\nAddress: Julwaniya Road Rajpur,Distt-Barwani 451447\nOwmer: Jitendra Parmar \nContact: 9993356471 \nE-Mail: Jituparmar009@Gmail.Com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Madhya Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tSatna";
			show(line)
					cout
				<< "\nEagle Auto Agency\nAddress: BESIDES SITARAM PETROL PUMP, KOLGAWAN NH-75, REWA ROAD, SATNA,MP,485001\nOwner: Mrigendra Mishra \n07672-252555, 9752414334 \nE-Mail: eaglehondaservice1@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Madhya Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tAshok Nagar";
			show(line)
					cout
				<< "\nSeth And Sons\nAddress: Vivek Talkies 473331\nOwner: Mr. Vineet Seth \nContact: (07543) 225159, 9425131221 \nE-Mail: vineetset@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Madhya Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tBetul";
			show(line)
					cout
				<< "\nMandre Auto\nAddress: College Chowk 460002\nOwner: Mr. Rajesh Mandre \nContact: (07141) 2232157, 2204057, 9826074983 \nE-Mail: mandreautomobile@rediffmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Madhya Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tGwalior";
			show(line)
					cout
				<< "\nA.S. Auto Agency\nAddress: Opp Electricity Power House Office, Tansen Road, Gwalior, 474001\nOwner: Mr. Anay Khandekar  \nContact: 9926186419, 9926186428 \nE-Mail: asmgwhonda@gmail.com ";
			show2(line)
					cout
				<< "\n\nDivya Sai Auto Agency\nAddress: Inderganj Chauraha near Old High Court,Lashkar,Gwalior 474009\nOwner: Mr. Jitendra Banwani \nContact: 0751-2444456,9644203111, 9644202111 \nE-Mail: dshonda2wheelers@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Madhya Pradesh Option
		{
			cout << "\nINVALID INPUT!";
			exit;
		}
		break;
		}
	}
	break;
	case 4: // Dealer Locator Option
	{
		int cty3;
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tBihar";
		show(line)
				cout
			<< "\n\t\t1-Patna\n\t\t2-Alamnagar\n\t\t3-Dahiyar\n\t\t4-Siwan\n\t\t5-Ramnagar";
		show(line)
				cout
			<< "\nEnter the option to choose the City:";
		cin >> cty3; // Option Entry for Bihar of Dealer Locator of Main Menu

		switch (cty3) // Switch for Options of Bihar of Dealer Locator
		{
		case 1: // Bihar Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tPatna";
			show(line)
					cout
				<< "\nAlankar Auto Agency\nAddress: New Bypass Road 800002\nOwner: Mr. Ajay Singh \nContact: (0612) 2251125, 9308272546 \nE-Mail: alankarhonda@gmail.com ";
			show2(line)
					cout
				<< "\n\nAmbey Auto Agency\nAddress: NH-19, Near Bhikhari chowk,chhapra 841301\nOwner: Mr. Amarjit Kumar Sharma \nContact: 9570500030, 9570500030 \nE-Mail: Prateeksinghkausik@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Bihar Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tAlamnagar";
			show(line)
					cout
				<< "\nSunny Auto Agency\nAddress: Near Manoj Medico,Alamnagar,Madhepura 852219\nOwner: Mr. Bishwajeet \nContact: 9006367489 \nE-Mail: sunnyhonda.alamnagar@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Bihar Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tDahiyar";
			show(line)
					cout
				<< "\nSwati Auto Agency\nAddress: Dahiyar, P. O. Ranna, P.S. Hathouri,Samastipur 847105\nOwner: Mr.Ranjeet Kumar Thakur \nContact: 9386355556 \nE-Mail: swatiautomobiles335@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Bihar Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tSiwan";
			show(line)
					cout
				<< "\nDev Auto Agency\nAddress: Near S.K.G 841226\nOwner: Mr. Ajay Singh\nContact: 9234162313, 9931999519 \nE-Mail: ajay.tomar1972@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Bihar Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tRamnagar";
			show(line)
					cout
				<< "\nMeera Auto Agency\nAddress: Ramnagar Main Road . Near to HP Petrolpump, 845106\nOwner: Mr. Ujjawal Kumar \nContact: 7050054936, 7739654936 \nE-Mail: meerahonda.ramnagar@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Bihar Option
		{
			cout << "\nINVALID INPUT!";
			exit;
		}
		break;
		}
	}
	break;
	case 5: // Dealer Locator Option
	{
		int cty4;
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tAndhra Pradesh";
		show(line)
				cout
			<< "\n\t\t1-Eluru\n\t\t2-Darsi\n\t\t3-Chittoor\n\t\t4-Anaparthy\n\t\t5-Podili";
		show(line)
				cout
			<< "\nEnter the option to choose the City:";
		cin >> cty4; // Option Entry for Andhra Pradesh of Dealer Locator of Main Menu

		switch (cty4) // Switch for Options of Andhra Pradesh of Dealer Locator
		{
		case 1: // Andhra Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tEluru";
			show(line)
					cout
				<< "\nPavan Auto Agency\nAddress: Old Kesari Talkies 534001\nOwner: Mr. Suresh Dangeti \nContact: (08812) 222411, 222412, 224659, 9849137037 \nE-Mail: pavanhondaeluru@rediffmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Andhra Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tDarsi";
			show(line)
					cout
				<< "\nLakshmi Auto Agency\nAddress: 771/4, Podli Road, Darsi, Prakasam 523247\nOwner: Chandrashekara Babu \nContact: 08407-254567, 9866229525 \nE-Mail: lakshmihondadarsi@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 3: // Andhra Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tChittoor";
			show(line)
					cout
				<< "\nSiva Auto Agency\nAddress: 27-244, Opp.Nutrine factory, Palamaner road, Chittoor 517002\nOwner: N.Sasi Kumar \nContact: 08572 -221699/226199, 9052699799 \nE-Mail: siva.honda@yahoo.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 4: // Andhra Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tAnaparthy";
			show(line)
					cout
				<< "\nSree Rama Sai Auto AgencyCanal Road , Near Hp Gas , Anaparthi\nOwner: Sai Suresh \nContact: 08857-225557, 9492355557\nE-Mail: sreeramasaihonda@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 5: // Andhra Pradesh Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tPodili";
			show(line)
					cout
				<< "\nSri Varasiddi Auto Agency\nAddress: Door No 8/121, Main Road, Podili, Prakasam 523240\nOwner: Jithender N\nContact: 08499243599, 9912703799 \nE-Mail: varasiddihonda@gmail.com ";
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		default: // Andhra Pradesh Option
		{
			cout << "\nINVALID INPUT!";
			exit;
		}
		break;
		}
	}
	break;
	default: // Dealer Locator Option
	{
		cout << "\nINVALID INPUT!";
		exit;
	}
	break;
	}
}

void employeeinformation() // Fuction Definition for Employee Record Operation
{
	int erm;
	char pwd[40];
	system("cls");
	show(line)
			cout
		<< "\n\t\t\tEmployees Record";
	show(line)
			cout
		<< "\nEnter the Password:";
	cin.get();
	cin.getline(pwd, 40);
	if ((strcmp(pwd, "ayush") == 0) || (strcmp(pwd, "AYUSH") == 0))
	{
		system("cls");
		show(line)
				cout
			<< "\n\t\t\tEmployees Record";
		show(line)
				cout
			<< "\n\t\t\t1-Create a Record\n\t\t\t2-View a Record";
		show(line)
				cout
			<< "\nEnter the Option:";
		cin >> erm; // Option Entry for Employees Record of Main Menu

		switch (erm) // Switch for Emplyees Record Options
		{
		case 1: // Employees Record Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tCreate a Record";
			show(line)
					cout
				<< "\nEmployee Number           : ";
			cin.get();
			cin.clear();
			cin >> er[m].empno;
			cout << "\nName                      : ";
			cin.get();
			cin.clear();
			cin.getline(er[m].ename, 40);
			cout << "\nAge                       : ";
			cin >> er[m].age;
			cout << "\nFather's Name             : ";
			cin.get();
			cin.clear();
			cin.getline(er[m].efname, 40);
			cout << "\nMobile Number             : ";
			cin.getline(er[m].mno, 11);
			cout << "\nQualification             : ";
			cin.getline(er[m].qualification, 100);
			cout << "\nPosition in Company       : ";
			cin.getline(er[m].position, 50);
			cout << "\nSalary                    : ";
			cin >> er[m].sal;
			cout << "\nLocality                  : ";
			cin.get();
			cin.clear();
			cin.getline(er[m].a.street, 60);
			cout << "\nCity                      : ";
			cin.getline(er[m].a.city, 40);
			cout << "\nState                     : ";
			cin.getline(er[m].a.state, 40);
			cout << "\nPincode                   : ";
			cin >> er[m].a.pincode;
			cout << "\nNationality               : ";
			cin.get();
			cin.clear();
			cin.getline(er[m].a.country, 40);
			cout << "\n\nRecord Created !!!";
			m++;
			show(line)
					cout
				<< "\nPRESS ANY KEY !!!";
			_getch();
			;
		}
		break;
		case 2: // Employees Record Option
		{
			system("cls");
			show(line)
					cout
				<< "\n\t\t\tView a Record";
			show(line)
					cout
				<< "\nEnter the Employee Number:";
			cin.clear();
			cin >> er[m].empno;
			for (int i = 1; i < m; i++)
			{

				system("cls");
				show(line)
						cout
					<< "\n\t\t\tDetails of Emp No." << er[m].empno;
				show(line)
						cout
					<< "\nName                      : " << er[i].ename;
				cout << "\nAge                       : " << er[i].age;
				cout << "\nFather's Name             : " << er[i].efname;
				cout << "\nMobile Number             : " << er[i].mno;
				cout << "\nQualification             : " << er[i].qualification;
				cout << "\nPosition in Company       : " << er[i].position;
				cout << "\nSalary                    : " << er[i].sal;
				cout << "\nLocality                  : " << er[i].a.street;
				cout << "\nCity                      : " << er[i].a.city;
				cout << "\nState                     : " << er[i].a.state;
				cout << "\nPincode                   : " << er[i].a.pincode;
				cout << "\nNationality               : " << er[i].a.country;
				show(line)
						cout
					<< "\nPRESS ANY KEY !!!";
				_getch();
				;
			}
		}
		default: // Employees Record Option
		{
			cout << "\nINVALID INPUT";
			exit;
		}
		break;
		}
	}
	else
	{
		cout << "\nWrong Password Entered!!!";
		show(line)
				cout
			<< "\n\nPRESS ANY KEY !!!";
		_getch();
		;
	}
}

void rateus()
{
	int stars;
	char few, rec[10], con[10], inter[10];
	system("cls");
	show(line)
			cout
		<< "\n\t\t\tRate Us";
	show(line)
			cout
		<< "\nEnter the no. of Stars (1-5):";
	cin >> stars;

	if (stars == 1)
		cout << "\nWe are very sorry to give you bad expirience. We will try to improve it. Thank You! ";

	else if (stars == 2)
		cout << "\nWe are very sorry to give you bad expirience. We will try to improve it. Thank You! ";

	else if (stars == 3)
		cout << "\nWe are very sorry to give you bad expirience. We will try to improve it. Thank You! ";

	else if (stars == 4)
		cout << "\nWe will try to improve it more. Thank You! ";

	else if (stars == 5)
		cout << "\nThank You so much! ";
	show(line)
			cout
		<< "\nWould you like to take a survey about the software (y/n):";
	cin >> few;
	if (few == 'y' || few == 'Y')
	{
		cout << "\nDo you recommend this software:";
		cin >> rec;
		cout << "\nDo you like the control of this software:";
		cin >> con;
		cout << "\nDo you like the interface of this software:";
		cin >> inter;
		cout << "\n\nThank You!";
		show(line)
				cout
			<< "\nPRESS ANY KEY !!!";
		_getch();
		;
	}
	else
	{
		show(line)
				cout
			<< "\nPRESS ANY KEY !!!";
		_getch();
		;
	}
}
q																	