+Program Problem 1: Display text
+
+Garrett Ostrander, Period 1, and �Hello World�, without the quotations.You will make sure that it prints to the console in a readable format, and pauses before the console exits so the user can actually read what is displayed.
+
+Below is a template to start your program :
+/*
 +Your Name - Date Period
 +Assignment Name : *
 +Brief Description of the Assignment
 +*/
	+// Libraries
	+#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
	+ #include <conio.h> // gives access to _kbhit() and _getch() for pause()
	+// Namespaces
	+using namespace std; //*
+// Functions() 
+void pause() {
	+cout << "Press any key to continue . . .";
	+while (!_kbhit());
	+_getch();
	+cout << '\n';
	+
}
+// MAIN
+void main() {
	+	// Define and Assign your variable(s)
		+	// Display Text
		+pause(); // pauses to see the displayed text
	+
}