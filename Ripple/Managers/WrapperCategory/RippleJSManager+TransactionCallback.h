//
//  DivvyJSManager+TransactionCallback.h
//  Divvy
//
//  Created by Kevin Johnson on 7/25/13.
//  Copyright (c) 2013 OpenCoin Inc. All rights reserved.
//

#import "DivvyJSManager.h"

@interface DivvyJSManager (TransactionCallback)

-(void)wrapperSubscribeTransactions;
-(void)wrapperRegisterHandlerTransactionCallback;

@end
