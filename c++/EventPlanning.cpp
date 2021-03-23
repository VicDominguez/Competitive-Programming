#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int participants,budget,numberHotel,numberWeeks,hotelCost,answer,maxCapacity;
    
    while(scanf("%d %d %d %d",&participants,&budget,&numberHotel,&numberWeeks) == 4)
    {
        answer = budget + 1;
        
        for(int hotelIndex = 0; hotelIndex < numberHotel; hotelIndex++)
        {
            scanf("%d",&hotelCost);
            maxCapacity = 0;
            
            for(int weekIndex = 0,actualCapacity; weekIndex < numberWeeks; weekIndex++)
            {
                scanf("%d",&actualCapacity);
                maxCapacity = max(maxCapacity,actualCapacity);
            }
            
            if(maxCapacity >= participants) 
                answer = min(answer,participants * hotelCost);
        }
        
        if(answer == budget+1) 
            puts("stay home");
        else 
            printf("%d\n",answer);
    }
    
    return 0;
}
