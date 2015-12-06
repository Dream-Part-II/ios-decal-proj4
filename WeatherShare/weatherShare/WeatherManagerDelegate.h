//
//  WeatherManagerDelegate.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#ifndef weatherShare_WeatherManagerDelegate_h
#define weatherShare_WeatherManagerDelegate_h

@protocol WeatherManagerDelegate
- (void)didReceiveGroups:(NSArray *)groups;
- (void)fetchingGroupsFailedWithError:(NSError *)error;
@end

#endif
