//
//  WXCondition.h
//  Weather
//
//  Created by Wei Tu on 4/1/2016.
//  Copyright © 2016 Wei Tu. All rights reserved.
//

#import <Mantle/Mantle.h>

// 1
@interface WXCondition : MTLModel<MTLJSONSerializing>

// 2
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSNumber *humidity;
@property (nonatomic, strong) NSNumber *temperature;
@property (nonatomic, strong) NSNumber *tempHigh;
@property (nonatomic, strong) NSNumber *tempLow;
@property (nonatomic, strong) NSString *locationName;
@property (nonatomic, strong) NSDate *sunrise;
@property (nonatomic, strong) NSDate *sunset;
@property (nonatomic, strong) NSString *conditionDescription;
@property (nonatomic, strong) NSString *condition;
@property (nonatomic, strong) NSNumber *windBearing;
@property (nonatomic, strong) NSNumber *windSpeed;
@property (nonatomic, strong) NSString *icon;

// 3
- (NSString *)imageName;

@end
