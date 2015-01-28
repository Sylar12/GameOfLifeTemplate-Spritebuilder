//
//  Grid.h
//  GameOfLife
//
//  Created by PinchaoWang on 15/1/27.
//  Copyright (c) 2015年 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
-(void) evolveStep;
-(void) countNeighbors;
-(void)updateCreatures;
@end
