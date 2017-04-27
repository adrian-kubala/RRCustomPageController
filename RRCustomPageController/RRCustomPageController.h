//
//  RRCustomPageController.h
//  RRCustomPageController
//
//  Created by Remi Robert on 18/07/14.
//  Copyright (c) 2014 remirobert. All rights reserved.
//

#import <UIKit/UIKit.h>

# define COLOR_LABEL    [UIColor whiteColor]

@interface RRCustomPageController : UIViewController <UIScrollViewDelegate>

@property (nonatomic, assign) BOOL clickScroll;
@property (nonatomic, strong) UIScrollView *menuBar;
@property (nonatomic, strong) UILabel *labelTypeTitle;

- (instancetype)initWithControllers:(NSArray *)_controllers;
- (void)setPageScrollBouncing:(BOOL)bouncing;

@end
