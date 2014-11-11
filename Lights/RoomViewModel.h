//
//  RoomViewModel.h
//  Lights
//
//  Created by Evan Coleman on 11/9/14.
//  Copyright (c) 2014 Evan Coleman. All rights reserved.
//

@class HomeController;

@interface RoomViewModel : NSObject

@property (nonatomic, readonly) HMRoom *room;

@property (nonatomic, readonly) NSString *name;

@property (nonatomic, readonly) NSArray *viewModels;

- (instancetype)initWithRoom:(HMRoom *)room homeController:(HomeController *)homeController;

@end
