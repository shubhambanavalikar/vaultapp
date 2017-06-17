//
//  Account.h
//  NewGameV3
//
//  Created by Bhalachandra Banavalikar on 6/19/16.
//  Copyright © 2016 Bhalachandra Banavalikar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Account : NSObject

@property (nonatomic, strong) NSString *accName;

@property (nonatomic, strong) NSString *userName;

@property (nonatomic, strong) NSString *passName;

- (id)initWithName: (NSString *) accName;

@end