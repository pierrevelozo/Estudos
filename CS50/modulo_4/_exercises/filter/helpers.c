#include <stdio.h>
#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            //printf("Altura: %i\n", i);
            //printf("Largura: %i\n", j);

            //printf("R: %i\n", image[i][j].rgbtRed);
            //printf("G: %i\n", image[i][j].rgbtGreen);
            //printf("B: %i\n", image[i][j].rgbtBlue);

            BYTE media = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3;

            image[i][j].rgbtGreen = media;
            image[i][j].rgbtBlue = media;
            image[i][j].rgbtRed = media;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE reserva[height][width];
    
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width / 2; j++){      
            reserva[i][j] = image[i][width - j];  
            image[i][width - j] = image[i][j];  
            image[i][j] = reserva[i][j];
        }
    }
    
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
