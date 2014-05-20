//
//  PlayingCard.h
//  Matchismo
//
//  Created by Mark Lauda Lauw on 21/5/14.
//  Copyright (c) 2014 Chloro Code. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;
+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
