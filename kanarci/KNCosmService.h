//
//  KNCosmService.h
//  kanarci
//
//  Created by Jan Remes on 26.03.13.
//  Copyright (c) 2013 Jan Remes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Measurement.h"


@interface KNCosmService : NSObject


+ (KNCosmService *) sharedInstance;

+ (void) postMeasurementToCosm:(Measurement *) measurement;

@end
