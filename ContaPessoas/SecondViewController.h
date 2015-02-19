//
//  SecondViewController.h
//  ContaPessoas
//
//  Created by Victor Lisboa on 2/18/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *totalBoys;
@property (weak, nonatomic) IBOutlet UILabel *totalGirls;
@property (weak, nonatomic) IBOutlet UILabel *total;
- (IBAction)click:(id)sender;

@end

