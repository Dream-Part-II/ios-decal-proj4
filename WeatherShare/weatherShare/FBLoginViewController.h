//
//  FBLoginViewController.h
//  weatherShare
//
//  Created by Yunfan Song on 12/4/15.
//  Copyright (c) 2015 Yunfan Song. All rights reserved.
//

//#import <UIKit/UIKit.h>
//#import <FBSDKCoreKit/FBSDKCoreKit.h>
//#import <FBSDKLoginKit/FBSDKLoginKit.h>
//#import <FBSDKShareKit/FBSDKShareKit.h>
//
//@interface FBLoginViewController : UIViewController
//
//@end

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "WeatherModel.h"

@interface FBLoginViewController : UIViewController <UINavigationControllerDelegate>
//<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UITextView *postText;
@property (strong, nonatomic) IBOutlet UIImageView *postImage;
- (IBAction)selectImage:(id)sender;
- (IBAction)sendPost:(id)sender;

@property (strong, nonatomic) WeatherModel *model;
@end