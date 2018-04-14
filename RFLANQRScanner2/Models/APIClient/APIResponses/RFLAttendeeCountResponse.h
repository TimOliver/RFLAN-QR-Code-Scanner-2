//
//  RFLAttendeeCountResponse.h
//  RFLANQRScanner2
//
//  Created by Tim Oliver on 14/4/18.
//  Copyright © 2018 RFLAN. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface RFLAttendeeCountResponse : MTLModel

@property (nonatomic, assign) NSInteger signedInAttendeeCount;
@property (nonatomic, assign) NSInteger totalAttendeeCount;

@end
