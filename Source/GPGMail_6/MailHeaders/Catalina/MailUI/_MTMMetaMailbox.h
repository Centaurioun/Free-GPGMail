//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTMSpecialMailbox.h"

@interface _MTMMetaMailbox : MTMSpecialMailbox
{
}

- (BOOL)_shouldSortMailboxes;
- (id)subRestoreString;
- (id)restoreString;
- (id)paths;
- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;
- (BOOL)needsToLoadMessagesInBackground;
- (void)_loadMessages;
- (void)discardMailbox;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

