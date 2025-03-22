nclude <iostream>
#include <cmath>

using namespace std;

const double gold = (1 + sqrt(5)) / 2; 
double f(double x) {
	    return sin(x) + pow(x, 2);
}

void search(double a, double b, double E) {
	    double c, d;
	        int nr = 0;
		    while (fabs(b - a) > E) {
			            c = b - (b - a) / gold;  
				            d = a + (b - a) / gold;  
					            if (f(c) < f(d)) {
							                b = d;  
									        } else {
											            a = c;  
												            }
						            nr++;  
							        }
		        double minPoint = (a + b) / 2;  
			    double minValue = f(minPoint);  
			        cout << minPoint << endl;
				    cout << nr << endl;
}

int main() {
	    double a, b, E;
	        cin >> a >> b;
		    cin >> E;

		        search(a, b, E);

			    return 0;
}
