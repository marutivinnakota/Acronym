//
//  Meaning.h
//  Acronym
//
//  Created by Karthik Vinnakota on 4/19/16.
//  Copyright © 2016 Karthik Vinnakota. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Meaning : NSObject
@property (nonatomic, copy) NSString *meaning;
@property NSInteger frequency;
@property NSInteger since;
@property (nonatomic, copy) NSMutableArray *variations;

@end
