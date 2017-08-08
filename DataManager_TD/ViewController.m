//
//  ViewController.m
//  DataManager_TD
//
//  Created by shiwei on 17/8/1.
//  Copyright © 2017年 ThinkDifferent. All rights reserved.
//

#import "ViewController.h"
#import "NSString+DateString.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    // 1501225042
    // 1501225002
    // 1501559040
    
    // 11: 50
    // 03: 50 美国
    
    
    /// 输入日期字符串或者时间戳,  返回 类似微博动态的时间展示
    NSLog(@"%@", [@"2017-08-01 11:49:48" dateString]);
    NSLog(@"%@", [NSString dateStringWithTimeInterval:1501559388]);

}




- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
