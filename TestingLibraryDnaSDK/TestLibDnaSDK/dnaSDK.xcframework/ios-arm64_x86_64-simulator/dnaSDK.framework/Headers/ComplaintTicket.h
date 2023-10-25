//
//  ComplaintTicket.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 09/09/22.
//

#import <Foundation/Foundation.h>
#import <dnaSDK/Ticket.h>

NS_ASSUME_NONNULL_BEGIN

@interface ComplaintTicket: NSObject

- (instancetype)initWith:(NSDictionary *)headers;
- (NSMutableArray<Ticket *> *)getActiveTicket;
- (NSMutableArray<Ticket *> *)getCompletedTicket;
- (Ticket *)getDetailTicketWith:(NSString *)ticketId;
- (void)sendTicket:(Ticket *)ticket completionHandler: (void (^_Nullable)(NSDictionary *_Nullable))completionHandling;
- (void)getTicketServer:(void (^_Nonnull)(NSArray<NSDictionary *> *))tickets;
- (void)checkIncidentMassiveStatusWith:(double)longitude
							  latitude:(double)latitude
							completion:(void (^_Nonnull)(bool))status;
- (void)getProblemDetail:(void (^_Nonnull)(NSArray<NSString *> *))problemDetails;
- (void)getCategories:(void (^_Nonnull)(NSArray<NSString *> *))categoryProblem;

@end

NS_ASSUME_NONNULL_END
