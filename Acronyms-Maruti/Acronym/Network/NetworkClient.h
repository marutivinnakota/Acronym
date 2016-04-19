//
//  NetworkClient.h
//  Acronym
//
//  Created by Karthik Vinnakota on 4/19/16.
//  Copyright © 2016 Karthik Vinnakota. All rights reserved.
//

#import "AFHTTPSessionManager.h"
#import "Acronym.h"


typedef void (^ServiceSuccessBlock)(NSURLSessionDataTask *task, Acronym *acronym);
typedef void (^ServiceFailureBlock)(NSURLSessionDataTask *task, NSError *error);

@interface NetworkClient : AFHTTPSessionManager

/*
 * @discussion 
 * @return SingleTon instance of NetworkClient
 */
+(NetworkClient *) sharedManager;

/*
 * @discussion - This method makes a GET request to the given URL.
 * @param urlString url string of webservice
 * @parameters Dictionary of parameters to be sent
 * @success Successblock to be called on service success
 * @failure FailureBlock to be called on service failure
 *
 *  *** Sample usage ***
 * GET webservice : http://www.nactem.ac.uk/software/acromine/dictionary.py?sf=usa
 * urlstring : http://www.nactem.ac.uk/software/acromine/dictionary.py?
 * parameters: @{@"sf": @"usa"}
 *
 */
- (void)getResponseForURLString: (NSString *)urlString Parameters:(NSDictionary *) parameters success:(ServiceSuccessBlock) success failure:(ServiceFailureBlock) failure;

@end
