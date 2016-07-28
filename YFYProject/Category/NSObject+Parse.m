//
//  NSObject+Parse.m
//  YFYProject
//
//  Created by spare on 16/7/27.
//  Copyright © 2016年 yuan. All rights reserved.
//

#import "NSObject+Parse.h"

@implementation NSObject (Parse)
+ (id)parseJSON:(id)json{
    if([json isKindOfClass:[NSDictionary class]]){
        return [self modelWithJSON:json];
    }
    if ([json isKindOfClass:[NSArray class]]) {
        return [NSArray modelArrayWithClass:[self class] json:json];
    }
    return json;
}
@end
