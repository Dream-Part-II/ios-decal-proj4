//
//  EnterCityViewController.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeatherModel.h"

@interface EnterCityViewController : UIViewController

@property (strong, nonatomic) WeatherModel *model;
@property (weak, nonatomic) IBOutlet UITextField *nameText;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *homeButton;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;
@property (weak, nonatomic) IBOutlet UIButton *submitButton;

@end
