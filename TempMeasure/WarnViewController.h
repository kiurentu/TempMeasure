//
//  WarnViewController.h
//  TempMeasure
//
//  Created by Krt on 14/10/22.
//  Copyright (c) 2014年 Krt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WarnViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *warntemp1;
@property (weak, nonatomic) IBOutlet UITextField *warntemp2;

@property (weak, nonatomic) IBOutlet UISwitch *warnsound;
@property (weak, nonatomic) IBOutlet UISwitch *warnmove;
@property (weak, nonatomic) IBOutlet UISegmentedControl *warntime;
- (IBAction)warnsave:(id)sender;
- (IBAction)warncancel:(id)sender;



@end
