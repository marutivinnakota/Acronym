//
//  Acronym.h
//  Acronym
//
//  Created by Maruti Vinnakota on 4/19/16.
//  Copyright © 2016 Maruti Vinnakota. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Acronym : NSObject

@property (nonatomic,copy) NSString *shortForm;
@property (nonatomic,strong) NSMutableArray *meanings;
@end
