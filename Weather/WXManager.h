//
//  WXManager.h
//  Weather
//
//  Created by Wei Tu on 4/1/2016.
//  Copyright © 2016 Wei Tu. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa.h>
// 1
#import "WXCondition.h"

@interface WXManager : NSObject
<CLLocationManagerDelegate>

// 2
+ (instancetype)sharedManager;

// 3
@property (nonatomic, strong, readonly)CLLocation *currentLocation;
@property (nonatomic, strong, readonly)WXCondition *currentCondition;
@property (nonatomic, strong, readonly)NSArray *hourlyForecast;
@property (nonatomic, strong, readonly)NSArray *dailyForcast;

// 4
- (void)findCurrentLocation;

@end
