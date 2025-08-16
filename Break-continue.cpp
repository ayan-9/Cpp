#include<iostream>

using namespace std;

int main(){
    
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << i <<endl;
//     if (i==5)
//     {
//         break; // Yahan break laga diya yani jaise hy i 5 hoga ap ka loop escape karjayega 
//     }
//     
// }

for (int i = 0; i < 5; i++)
{
    if (i==2)
    {
        continue; // Ab jaise hy i ki value 2 hogi woh usey skip kardeyga 
    }
    cout << endl<< i ; 
    
}

    return 0;
}