//
//  ChartViewController.h
//  TempMeasure
//
//  Created by Krt on 14/10/22.
//  Copyright (c) 2014年 Krt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChartViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *chartimage;
@property (weak, nonatomic) IBOutlet UILabel *temp;

- (IBAction)week:(id)sender;
- (IBAction)day:(id)sender;
- (IBAction)hour:(id)sender;



@end
