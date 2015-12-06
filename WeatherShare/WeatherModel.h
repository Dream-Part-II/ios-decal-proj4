//
//  placeModel.h
//  lab6
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherModel : NSObject

//@property (strong,nonatomic) NSMutableArray* placeArray;
@property (strong, nonatomic) NSNumber *coordLon;
@property (strong, nonatomic) NSNumber *coordLat;
@property (strong, nonatomic) NSNumber *currTemp;
@property (strong, nonatomic) NSNumber *maxTemp;
@property (strong, nonatomic) NSNumber *minTemp;
@property (strong, nonatomic) NSString *weatherDiscription;
@property (strong, nonatomic) NSString *iconCode;
@property (strong, nonatomic) NSString *cityName;
@property (strong,nonatomic) NSString* mood ;
@property (strong,nonatomic) NSString* word ;

@property (strong,nonatomic) NSDictionary* iconDict;
@property (strong,nonatomic) NSString* sourcePath;
- (void) setName:(NSString *)cityName;

+ (instancetype) sharedModel;

@end
