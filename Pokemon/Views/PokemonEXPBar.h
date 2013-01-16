//
//  PokemonEXPBar.h
//  iPokeMon
//
//  Created by Kaijie Yu on 3/7/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PokemonEXPBar : UIView

- (id)initWithFrame:(CGRect)frame EXP:(NSInteger)exp EXPMax:(NSInteger)expMax;
- (NSInteger)exp;
- (NSInteger)expMax;
- (void)updateExpBarWithExp:(NSInteger)exp;
- (void)updateExpBarWithExpMax:(NSInteger)expMax;
- (void)updateExpBarWithExp:(NSInteger)exp ExpMax:(NSInteger)expMax;

@end
