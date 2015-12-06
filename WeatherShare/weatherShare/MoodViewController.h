//
//  MoodViewController.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeatherModel.h"

@interface MoodViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *angerButton;
@property (weak, nonatomic) IBOutlet UIButton *consolingButton;
@property (weak, nonatomic) IBOutlet UIButton *amazedButton;
@property (weak, nonatomic) IBOutlet UIButton *happyButton;
@property (weak, nonatomic) IBOutlet UIButton *sadnessButton;

@property (strong, nonatomic) WeatherModel *model;

@end
