//
//  PTDetailViewController.h
//  GitExistingProject
//
//  Created by Paulo Campos on 7/28/14.
//  Copyright (c) 2014 Paulo Campos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
