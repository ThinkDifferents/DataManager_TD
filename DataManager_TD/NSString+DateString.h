//
//  NSString+DateString.h
//  ThinkDifferent
//
//  Created by shiwei on 17/8/1.
//  Copyright © 2017年 ThinkDifferent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (DateString)

- (NSString *)dateString;
+ (NSString *)dateStringWithTimeInterval:(NSTimeInterval)timeInterval;

@end
