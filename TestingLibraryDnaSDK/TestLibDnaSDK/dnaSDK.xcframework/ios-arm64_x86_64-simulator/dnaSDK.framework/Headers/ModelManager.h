//
//  ModelManager.h
//  DataBaseDemo
//
//  Created by TheAppGuruz-New-6 on 22/02/14.
//  Copyright (c) 2014 TheAppGuruz-New-6. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Ticket.h"
#import "TestRecommendation.h"
#import "NetworkTestResult.h"
#import "FMDatabase.h"
#import "ModelUtility.h"

@interface ModelManager : NSObject

@property (nonatomic,strong) FMDatabase *database;

+ (ModelManager *)getInstance;

- (NSArray<Ticket *> *)getAllTickets;
- (Ticket *)getTicketDetailWith:(NSString *)ticketId;
- (int)insertDataTableDNA_ticket:(Ticket *)data isUpdate:(Boolean *)isUpdate strId:(NSString *)idTicket;
- (void)updateData:(Ticket *)data;
- (void)deleteData:(Ticket *)data;
- (void)createTableDNA_ticket;
- (void)deleteAllTickets;

// table dna recommendation

- (void)createTableDnaRecommendation;
- (void)insertDataTableDnaRecommendation:(TestRecommendation *)data ;
- (void)deleteDataDnaRecomm:(TestRecommendation *)data;
- (void)updateDataDnaRecomm:(TestRecommendation *)data;
- (void)displayDataTableDnaRecommendation;

// table test result

- (void)createTableNetworkTestResult;
- (void)insertDataTableNetworkTestResult:(NetworkTestResult *)data ;
- (void)deleteDataNetworkTestResult:(NetworkTestResult *)data;
- (void)updateDataNetworkTestResult:(NetworkTestResult *)data;
- (void)displayDataTableNetworkTestResult;

-(int)getLastInsertRowId;

@end
