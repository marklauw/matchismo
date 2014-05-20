//
//  Card.h
//  Matchismo
//
//  Created by Mark Lauda Lauw on 21/5/14.
//  Copyright (c) 2014 Chloro Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;
- (int)match:(NSArray *)otherCards;

@end
