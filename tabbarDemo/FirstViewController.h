//
//  FirstViewController.h
//  tabbarDemo
//
//  Created by MD101 on 14-10-8.
//  Copyright (c) 2014年 TabBarDemo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NTViewController.h"
@interface FirstViewController : UIViewController

@property (nonatomic ,weak) NTViewController * delegate;

@end
