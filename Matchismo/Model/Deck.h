//
//  Deck.h
//  Matchismo
//
//  Created by Mark Lauda Lauw on 21/5/14.
//  Copyright (c) 2014 Chloro Code. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end
