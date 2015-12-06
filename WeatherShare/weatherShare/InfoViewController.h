//
//  InfoViewController.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeatherModel.h"
#import "WeatherManager.h"
#import "WeatherCommunicator.h"

@interface InfoViewController: UIViewController<WeatherManagerDelegate> {
    NSArray *_groups;
    WeatherManager *_manager;
}

@property (strong, nonatomic) WeatherModel *model;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *homeButton;
@property (strong, nonatomic) NSString *cityName;
@property (weak, nonatomic) IBOutlet UIImageView *weatherImage;
@property (weak, nonatomic) IBOutlet UILabel *cityNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *currTempLabel;
@property (weak, nonatomic) IBOutlet UILabel *desLabel;
//@property (weak, nonatomic) IBOutlet UILabel *tempRangeLabel;
@property (weak, nonatomic) IBOutlet UIButton *moodButton;

@end
