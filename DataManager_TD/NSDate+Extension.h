

#import <Foundation/Foundation.h>

@interface NSDate (Extension)
/**
 *  判断某个时间是否为今年
 */
- (BOOL)isThisYear;
/**
 *  判断某个时间是否为昨天
 */
- (BOOL)isYesterday;
/**
 *  判断某个时间是否为今天
 */
- (BOOL)isToday;

/**
 *  通过一个中文的时间字符串, 返回距离现在日期的自定义字符串
 *  例如 : 2017-08-01 11:49:48  返回 16分钟前
 *
 *  @param dateString 你拿到的字符串的格式要与format 的格式相对应
 *
 *  @return 返回一个类似微博 动态时间的字符串
 */
- (NSString *)stringWithDateString:(NSString *)dateString;

@end
