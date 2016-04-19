//
//  Constants.h
//  Acronym
//
//  Created by Maruti Vinnakota on 4/19/16.
//  Copyright © 2016 Maruti Vinnakota. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const BaseURL;
extern NSString *const kAppFontName;
extern NSString *const kAppBoldFontName;

#define labelTextFont [UIFont fontWithName:kAppFontName size:15.0f]
#define labelBoldTextFont [UIFont fontWithName:kAppBoldFontName size:15.0f]
#define descriptionTextFont [UIFont fontWithName:kAppFontName size:13.0f]
#define cellVerticalPadding 10
#define cellHorizontalWaste 50
#define MAXLENGTH 30


@interface Constants : NSObject

@end
