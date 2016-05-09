#include <iostream>
#include <array>

using namespace std;

int main(){
    int number_of_nodes;
    
    cout << "Enter number of nodes: ";
    
    cout << endl;
    
    cin >> number_of_nodes;
    
    int count_array[number_of_nodes];
    
    for(int i = 0; i < number_of_nodes; i++)
        count_array[i] = 0;
       
    cout << "Enter node number. Enter -1 to stop" << endl;   
       
    while(true){
        int number;
        
        cin >> number;
        
        if(number == -1)
            break;
            
        count_array[number-1]++;
    }
    
    for(int i = 0; i < number_of_nodes; i++)
        cout << "Node " << i+1 << " has degree " << count_array[i] << endl;
        
}
