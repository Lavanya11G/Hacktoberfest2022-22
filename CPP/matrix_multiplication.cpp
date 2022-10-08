#include<iostream>
using namespace std;

class matrix
{
    public:
        int a[10][10],b[10][10],i,j,k,mul[10][10];
        
        //Input the data 
        void getdata()
        {
            cout<<"Enter elements into the first matrix: \n";
            for(i=0;i<3;i++)    
            {    
                for(j=0;j<3;j++)    
                {    
                    cin>>a[i][j];  
                }    
            }
            cout<<"Enter elements into the second matrix: \n";
            for(i=0;i<3;i++)    
            {    
                for(j=0;j<3;j++)    
                {    
                    cin>>b[i][j];  
                }    
            }
        }
        
        void multi_matrix()
        {
            for(i=0;i<3;i++)    
            {    
                for(j=0;j<3;j++)    
                {    
                    mul[i][j]=0;    
                    for(k=0;k<3;k++)    
                    {    
                        mul[i][j]+=a[i][k]*b[k][j];    
                    }    
                }    
            }
            
            cout<<"\nThe result value of multipying the matrix is: \n";
            for(i=0;i<3;i++)    
            {    
                for(j=0;j<3;j++)    
                    {    
                        cout<<mul[i][j]<<" ";    
                    }    
                cout<<"\n";    
            }
        }

};
int main()
{
    matrix m;
    m.getdata();
    m.multi_matrix();
    return 0;
}
