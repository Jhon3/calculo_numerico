#include<iostream>
#include<cmath>

float lagrange(float *, float *, int, float);

int main()
{
    float xbarra = 0; //Valor que se deseja interpolar. 
    float ybarra = 0; //f(xbarra).
    
    //Testando com dados da questao 1.
    float x[4] = {0, 2, 4, 7};
    float y[4] = {1, 3, -1, 4}; 
    
    std::cout << "Insira um x para obter o f(x): ";
    std::cin >> xbarra;
   
    resultado = lagrange(x, y, 4,xbarra);
    std::cout << ">>f(" << xbarra << ") = " << ybarra << std::endl;
    return 0;
}

float lagrange(float * x, float * y, int size, float ponto)
{
    float result = 0; //Declarando variavel do somatorio (resultado final).
    for(int i = 0; i < size; ++i)
    {
      int  aux = 1.0; //Declarando variavel do produtorio.
        for(int j = 0; j< size; ++j)
        {
            if(i!=j)
            {   
                //Produtorio da interpolacao polinomial de Lagrange.
                aux = aux * (ponto - x[j])/(x[i] - x[j]);
            }    
        }
        //Somatorio da interpolacao polinomial de Lagrange.
        result = result + y[i] * aux;
     }
     return result;    
}
