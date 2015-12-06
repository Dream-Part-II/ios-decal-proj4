//
//  GroupBuilder1.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Group.h"
#import "WeatherModel.h"

@interface GroupBuilder1 : NSObject

+ (NSArray *)groupsFromJSON:(NSData *)objectNotation error:(NSError **)error;
@property (strong, nonatomic) WeatherModel *model;

@end


