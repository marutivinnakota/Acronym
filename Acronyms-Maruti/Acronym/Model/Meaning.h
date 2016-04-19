//
//  Meaning.h
//  Acronym
//
//  Created by Maruti Vinnakota on 4/19/16.
//  Copyright © 2016 Maruti Vinnakota. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Meaning : NSObject
@property (nonatomic, copy) NSString *meaning;
@property NSInteger frequency;
@property NSInteger since;
@property (nonatomic, copy) NSMutableArray *variations;

@end
