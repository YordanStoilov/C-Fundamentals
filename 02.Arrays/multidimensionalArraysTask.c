#include <stdio.h>

int main()
{
    // Find yearly average of rainfall for 2010-2014
    int rows = 5;
    int cols = 12;

    double averageRainfallPerYear[rows];
    
    double rainfall[5][12] = {
        {3.2, 2.9, 3.5, 4.1, 4.0, 2.7, 3.8, 4.3, 3.9, 2.6, 2.5, 3.1}, // Year 1
        {3.0, 2.8, 3.4, 4.0, 4.1, 2.8, 3.7, 4.2, 3.8, 2.7, 2.4, 3.0}, // Year 2
        {3.1, 2.7, 3.6, 4.2, 4.2, 2.6, 3.9, 4.4, 3.7, 2.5, 2.6, 3.2}, // Year 3
        {3.3, 3.0, 3.7, 4.0, 4.3, 2.9, 3.5, 4.1, 3.6, 2.4, 2.7, 3.3}, // Year 4
        {3.4, 2.6, 3.8, 4.3, 4.4, 2.5, 3.6, 4.0, 3.5, 2.8, 2.3, 3.4}  // Year 5
    };

    for (int i = 0; i < rows; ++i)
    {
        double sum = 0;
        for (int j = 0; j < cols; ++j)
        {
            sum += rainfall[i][j];
        }
        averageRainfallPerYear[i] = sum;
    }

    for (int i = 0; i < rows; ++i)
        printf("Average rainfall for %d: %.2lf\n", i + 2010, averageRainfallPerYear[i]);
}