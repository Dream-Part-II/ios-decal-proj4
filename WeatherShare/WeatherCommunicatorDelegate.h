//
//  WeatherCommunicatorDelegate.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#ifndef weatherShare_WeatherCommunicatorDelegate_h
#define weatherShare_WeatherCommunicatorDelegate_h

@protocol WeatherCommunicatorDelegate
- (void)receivedGroupsJSON:(NSData *)objectNotation;
- (void)fetchingGroupsFailedWithError:(NSError *)error;
@end


#endif
