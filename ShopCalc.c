//  Created by Альбина Фролова on 9/12/16.
//  Copyright © 2016 Альбина Фролова. All rights reserved.

#include <stdio.h>

#define TAX_RATE 0.0825


int main(void)
{
    int tv, vcr, remoteCtrlr, cd, tapeRecorder;
    double tvtotal, vcrtotal, remoteCtrlrtotal, cdtotal, tapeRecordertotal, subtotal, taxsales, total;
    
    const double tvUNIT = 400.00,
                 vcrUNIT = 220.00,
                 remoteCtrlrUNIT = 35.20,
                 cdUNIT = 300.00,
                 tapeRecorderUNIT = 150.00;
    
    printf("How many TVs were sold? ");
    scanf("%d", &tv);
    printf("How mny VCRs were sold? ");
    scanf("%d", &vcr);
    printf("How many Remote Controllers were sold? ");
    scanf("%d", &remoteCtrlr);
    printf("How many CDs were sold? ");
    scanf("%d", &cd);
    printf("How many Tape Recorders were sold? ");
    scanf("%d", &tapeRecorder);
    
    tvtotal = tv * tvUNIT;
    vcrtotal = vcr * vcrUNIT;
    remoteCtrlrtotal = remoteCtrlr * remoteCtrlrUNIT;
    cdtotal = cd * cdUNIT;
    tapeRecordertotal = tapeRecorder * tapeRecorderUNIT;
    subtotal = tvtotal + vcrtotal + remoteCtrlrtotal + cdtotal + tapeRecordertotal;
    taxsales = subtotal * TAX_RATE;
    total = subtotal + taxsales;
    
    printf("\nQTY\t\tDESCRIPTION\t\tUNIT PRICE\t\tTOTAL PRICE\n");
    printf("---\t\t-----------\t\t----------\t\t-----------\n");
    printf("%d\t\t\tTV\t\t\t\t%.2f\t\t\t%.2f\n",tv,tvUNIT,tvtotal);
    printf("%d\t\t\tVCR\t\t\t\t%.2f\t\t\t%.2f\n",vcr,vcrUNIT,vcrtotal);
    printf("%d\t\t\tREMOTE CTRLR\t%.2f\t\t\t%.2f\n",remoteCtrlr,remoteCtrlrUNIT,remoteCtrlrtotal);
    printf("%d\t\t\tCD PLAYER\t\t%.2f\t\t\t%.2f\n",cd,cdUNIT,cdtotal);
    printf("%d\t\t\tTAPE RECORDER\t%.2f\t\t\t%.2f\n",tapeRecorder,tapeRecorderUNIT,tapeRecordertotal);
    printf("\t\t\t\t\t\t\t\t\t    -----------\n");
    printf("\t\t\t\t\t\t\tSUBTOTAL\t    %5.2f\n", subtotal);
    printf("\t\t\t\t\t\t\tTAX\t\t\t\t%4.2lf\n", taxsales);
    printf("\t\t\t\t\t\t\tTOTAL\t\t    %5.2f\n", total);
    
    return 0;
}
