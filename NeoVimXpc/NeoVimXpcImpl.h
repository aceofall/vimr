/**
 * Tae Won Ha - http://taewon.de - @hataewon
 * See LICENSE
 */

#import <Foundation/Foundation.h>
#import "NeoVimXpc.h"

@protocol NeoVimUiBridgeProtocol;

@interface NeoVimXpcImpl : NSObject <NeoVimXpc>

- (instancetype _Nonnull)initWithNeoVimUi:(id<NeoVimUiBridgeProtocol> _Nonnull)ui;

- (void)probe;

- (void)vimInput:(NSString * _Nonnull)input;

@end
