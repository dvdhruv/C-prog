#include<stdio.h>

int main()
{
int l,n,w,h;

scanf("%d",&l);
printf("\n");
scanf("%d",&n);

while(n)
{
scanf("%d %d",&w,&h);

if((w < l)||(h < l))
{
printf("UPLOAD ANOTHER \n");
}
else if((l <= w)&&(l <= h))
{
if(w == h)
{
printf("ACCEPTED \n");
}
else {
printf("CROP IT \n");
}
}
n--;
}
return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// #include <iostream>

// }

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!";
//   return 0;
// }
