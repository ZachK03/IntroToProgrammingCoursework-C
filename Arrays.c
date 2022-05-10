#include <stdio.h>

int main(void) {
    float seaLevelData[] = {
        4.8,
        9.5,
        11.5,
        12.9,
        15.5,
        11.4,
        13.9,
        20.8,
        26.4,
        29.1,
        34.0,
        36.9,
        40.8,
        41.6,
        42.2,
        44.7,
        49.0,
        53.2,
        52.2,
        61.6,
        67.2,
        68.8,
        73.3,
        82.0,
        83.5,
        86.7,
        92.1,
        95.4,
        102.3
    };
    printf("\n\n\nThis program uses data from NASA to predict sea level rise from years 2025 to 2055.\n");
    float annualChange[29];
    //Find annual average change in sea level
    for(int i = 0; i < 29; i++) {
        //Add to annualChange value of seaLevelData[i] - the next value in seaLevelData
        annualChange[i] = seaLevelData[i] - seaLevelData[i+1];
    }
    //Get float of sum of differences
    float totalChange = 0;
    for(int i = 0; i < 29; i++) {
        totalChange += annualChange[i];
    }
    //Get average by dividing by total number
    totalChange = (float)totalChange / 29;
    //Year current and year to estimate to get proper numbers
    int yearsCurrent = 2022;
    int yearToEstimate = 2025;
    printf("The predicted Global Mean Sea Level is:\n");
    //Create array to hold variables
    float estimatedValues[7];
    int storeIndex = 0;
    //While less than or equal to 2050.
    while(yearToEstimate <= 2055) {
        //Store data in array
        estimatedValues[storeIndex] = seaLevelData[28] + ((float) totalChange * (yearToEstimate - yearsCurrent));
        storeIndex++;
        
        //Print yearToEstimate and the last value in seaLevelData plus totalChange times the year difference
        printf("%i  %.2lf\n",yearToEstimate, seaLevelData[28] + ((float) totalChange * (yearToEstimate - yearsCurrent)));
        //Increment by 5
        yearToEstimate += 5;
    }
}